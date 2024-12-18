#ifndef ROOM_H
#define ROOM_H

#define MAX_PLAYERS 300
#define MAX_ROOMS 300

typedef struct {
    int level;
    char name[17];
} Player;

typedef struct {
    int minLevel;
    int maxLevel;
    int capacity;
    int playerCount;
    Player players[MAX_PLAYERS];
} Room;

extern Room rooms[MAX_ROOMS];
extern int roomCount;

void addPlayerToRoom(Player player, int m);
void sortPlayersInRoom();
void printRoomStatus();
Player createPlayer(int level, char* name);

#endif