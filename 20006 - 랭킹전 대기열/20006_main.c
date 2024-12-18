#include <stdio.h>
#include "20006_Room.h"


int main() {
    int p, m;
    scanf("%d %d", &p, &m);

    for (int i = 0; i < p; i++) {
        int level;
        char name[17];
        scanf("%d %s", &level, name);

        Player player = createPlayer(level, name);
        addPlayerToRoom(player, m);
    }

    sortPlayersInRoom();
    printRoomStatus();

    return 0;
}