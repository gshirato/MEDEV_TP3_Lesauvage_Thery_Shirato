

#include "Go.h"
#include <stdio.h>
#include <iostream>

using namespace std;

goban::goban(int n) {
    turn = 1;
    for (int _i = -1; _i < n + 1; _i++) {
        for (int _j = -1; _j < n + 1; _j++) {
            board[_i][_j] = OUT;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            board[i][j] = VIDE;
            //            ren[i][j] = -1;
        }
    }
}

goban::goban() {
    turn = 1;
    for (int _i = -1; _i < 6; _i++) {
        for (int _j = -1; _j < 6; _j++) {
            board[_i][_j] = OUT;
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            board[i][j] = VIDE;
            //        ren[i][j] = -1;
        }
    }
}

void goban::affichage(int n) {
    char goishi[] = {'+', 'N', 'B', '!'};
    cout << "   [";
    for (int k = 65; k < 65 + n; k++) {
        printf("%2c", k);
    }
    cout << "]" << endl;

    for (int j = 0; j < n; j++) {
        printf("[%2d]", j + 1);
        for (int i = 0; i < n; i++) {
            printf(" %c", goishi[board[j][i]]);
        }
        cout << endl;
    }
}

void goban::pierre(int type, int y, int x) {
    int i = 0;
    while (i == 0) {
        char char_x;
        int pos_x, pos_y;

        /* int around[4], raround[4];
         around[0] = board[y - 1][x]; //    1
         around[1] = board[y][x + 1]; //  4 N 2
         around[2] = board[y + 1][x]; //    3
         around[3] = board[y][x - 1]; //

         raround[0] = ren[y - 1][x]; //    1
         raround[1] = ren[y][x + 1]; //  4 N 2
         raround[2] = ren[y + 1][x]; //    3
         raround[3] = ren[y][x - 1]; //
         */
        if (checklegal(type, y, x)) {
            board[y][x] = type;
            /*for (int _i = 0; _i < 4; _i++) {
                if (around[_i] == type && raround[_i] == -1) {
                    ren[y][x] = counter;
                    raround[_i] = counter;
                }else if(around[_i] == type && raround[_i] != -1){
                    ren[y][x]=raround[_i];
                }
            }
            ren[y - 1][x] = raround[0];
            ren[y][x + 1] = raround[1];
            ren[y + 1][x] = raround[2];
            ren[y][x - 1] = raround[3];
            counter++;
             * 
             */
            i++;
            break;
        } else {

            cout << "Cannot put here!Reselect !" << endl;

        }
        cout << "Input Position X ex) B " << endl;
        cin >> char_x;
        pos_x = (int) char_x - 65;

        cout << "Input Position Y ex) 7 " << endl;
        cin >> pos_y;
        y = pos_y;
        x = pos_x;
    }
}

bool goban::checklegal(int type, int y, int x) {

    if (board[y][x] != VIDE)
        return false;
    if (turn > 1) {
        if (ko_x == x && ko_y == y && ko_num == turn - 1) {
            return false;
        }

        if (CheckSuicide(type, y, x))
            return false;

        return true;
    }
}

bool goban::CheckSuicide(int type, int y, int x) {
    return false;
}
