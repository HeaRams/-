#include <stdio.h>
#include <string.h>
#include "20006_Room.h"

Player createPlayer(int level, char* name) {
    Player player;
    player.level = level;
    strcpy(player.name, name);
    return player;
}