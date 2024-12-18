#include <stdio.h>
#include "20006_Room.h"

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