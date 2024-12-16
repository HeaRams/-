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

int comparePlayers(const void *a, const void *b) {
    return strcmp(((Player *)a)->name, ((Player *)b)->name);
}

int main() {
    int p, m;
    scanf("%d %d", &p, &m);

    Room rooms[300];
    int roomCount = 0;

    for (int i = 0; i < p; i++) {
        int level;
        char name[17];
        scanf("%d %s", &level, name);

        Player player = {level, ""};
        strcpy(player.name, name);

        int matchedRoom = -1;
        for (int j = 0; j < roomCount; j++) {
            if (rooms[j].playerCount < m &&
                rooms[j].minLevel <= level &&
                rooms[j].maxLevel >= level) {
                matchedRoom = j;
                break;
            }
        }
        
        if (matchedRoom == -1) {
            Room newRoom;
            newRoom.minLevel = level - 10;
            newRoom.maxLevel = level + 10;
            newRoom.capacity = m;
            newRoom.playerCount = 0;
            rooms[roomCount++] = newRoom;
            matchedRoom = roomCount - 1;
        }

        rooms[matchedRoom].players[rooms[matchedRoom].playerCount++] = player;
    }

    for (int i = 0; i < roomCount; i++) {
        Room *room = &rooms[i];
        qsort(room->players, room->playerCount, sizeof(Player), comparePlayers);

        if (room->playerCount == room->capacity) {
            printf("Started!\n");
        } else {
            printf("Waiting!\n");
        }

        for (int j = 0; j < room->playerCount; j++) {
            printf("%d %s\n", room->players[j].level, room->players[j].name);
        }
    }

    return 0;
}
