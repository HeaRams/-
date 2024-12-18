#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "20006_Room.h"

Room rooms[MAX_ROOMS];
int roomCount = 0;

int comparePlayers(const void *a, const void *b) {
    return strcmp(((Player *)a)->name, ((Player *)b)->name);
}

void addPlayerToRoom(Player player, int m) {
    int matchedRoom = -1;

    for (int i = 0; i < roomCount; i++) {
        if (rooms[i].playerCount < m &&
            rooms[i].minLevel <= player.level &&
            rooms[i].maxLevel >= player.level) {
            matchedRoom = i;
            break;
        }
    }

    if (matchedRoom == -1) {
        rooms[roomCount].minLevel = player.level - 10;
        rooms[roomCount].maxLevel = player.level + 10;
        rooms[roomCount].capacity = m;
        rooms[roomCount].playerCount = 0;
        matchedRoom = roomCount++;
    }

    rooms[matchedRoom].players[rooms[matchedRoom].playerCount++] = player;
}

void sortPlayersInRoom() {
    for (int i = 0; i < roomCount; i++) {
        qsort(rooms[i].players, rooms[i].playerCount, sizeof(Player), comparePlayers);
    }
}