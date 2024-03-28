#include <iostream>
#include <ctime>
#include <cstdlib>
#include <random>

using namespace std;
//generate a temple with half rooms occupied
//

int temple_run(int map_cap) {
    default_random_engine huh;
    uniform_int_distribution<int> new_room(1,25); // generates a room from 1 (good) to 25 (bad)
    uniform_int_distribution<int> enter_room(1,12); // generates a room to incur into

    int temple[12];
    int remember[4];
    int temp_room, alt_room;
    int room1, room2, map;
    int stop_it = 1;
    int keep_it = 1;
    int opendoor;

    for(room1 = 6; room1 < 12; room1++) {
        keep_it = 1;
        while(keep_it) { //generates 1 room that is not already here
            temp_room = new_room(huh);
            stop_it = 1;
            for(room2 = 6; room2 < room1 && stop_it; room2++) {
                if (temple[room2] == 100 + temp_room) {
                    stop_it = 0;
                }
            }
            if(stop_it) {
                keep_it = 0;
            }
        }
        temple[room1] = 100 + temp_room;
    }

    int roomscomp;
    while(roomscomp < 12) {
        keep_it = 1;
        while(keep_it) { //generates 1 room that is not already here
            opendoor = enter_room(huh);
            stop_it = 1;
            for(room2 = 6; room2 < room1 && stop_it; room2++) {
                if (temple[room2] == 100 + temp_room) {
                    stop_it = 0;
                }
            }
            if(stop_it) {
                keep_it = 0;
            }
        }
        
        for(map = 0; map < map_cap; map++) {
            
        }
    }
}

int main() {
    




    return 0;
}