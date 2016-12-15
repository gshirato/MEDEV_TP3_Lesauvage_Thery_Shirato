
#include "Go.h"
#include <stdio.h>
#include <iostream>

using namespace std;
goban::goban(int n){
     for (int i = 0; i <n; i ++){
        for (int j = 0; j <n; j ++){
            board[i][j]= VIDE;
        }
    }
}

void goban::affichage(int n){
    char goishi[] = {'+', 'N', 'B', '!'};
    cout << "   [" ;
    for (int k = 65; k <65+n; k ++){
        printf("%2c",k);
    }
    cout << "]" << endl;
    
    for (int j = 0; j <n; j ++){
        printf("[%2d]",j+1);
        for (int i = 0; i <n; i ++){
            printf(" %c", goishi[board[j][i]]);
        }
        cout << endl;
    }
}

 void goban::pierre(int type,int y, int x){
     board[y][x]=type;
 }
