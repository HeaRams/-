#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int level;
    char name[17];
} Player;

typedef struct {
    int minLevel;
    int maxLevel;
    int capacity;
    int playerCount;
    Player players[300];
} Room;

Room rooms[300];
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

void printRoomStatus() {
    for (int i = 0; i < roomCount; i++) {
        if (rooms[i].playerCount == rooms[i].capacity) {
            printf("Started!\n");
        } else {
            printf("Waiting!\n");
        }
        for (int j = 0; j < rooms[i].playerCount; j++) {
            printf("%d %s\n", rooms[i].players[j].level, rooms[i].players[j].name);
        }
    }
}

int main() {
    int p, m;
    scanf("%d %d", &p, &m);

    for (int i = 0; i < p; i++) {
        int level;
        char name[17];
        scanf("%d %s", &level, name);

        Player player;
        player.level = level;
        strcpy(player.name, name);

        addPlayerToRoom(player, m);
    }

    sortPlayersInRoom();
    printRoomStatus();

    return 0;
}