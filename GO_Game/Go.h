/* 
 * File:   Go.h
 * Author: user
 *
 * Created on 8 décembre 2016, 09:04
 */

#ifndef GO_H
#define	GO_H

#include "constantes.h"
#include <vector>

#define VIDE 0
#define NOIR 1
#define BLANC 2
#define OUT 3

class goban {
private:

    int turn; /*number of turn*/
    int board[MSIZE][MSIZE]; /*[position_y][position__x]*/
    //int ren[MSIZE][MSIZE]; /*[position_y][position_x]*/


public:
    //Ren connecting stones
    // global counter 
    //int counter = 0;

    /*accesseur*/

    int getTurn() {
        return turn;
    }

    int getKoX() {
        return ko_x;
    }

    int getKoY() {
        return ko_y;
    }

    int getKoNum() {
        return ko_num;
    }

    void TurnEnd() {
        turn++;
    }

    void setKoX(int x) {
        ko_x = x;
    }

    void setKoY(int y) {
        ko_y = y;
    }

    void setKoNum(int n) {
        ko_num = n;
    }
    /* CONSTRUCTEUR goban()
     * argument: void
     * return  : void
     * descrip.: constructeur de goban de taille 5*/
    goban();

    /* CONSTRUCTEUR goban(int n)
     * argument : integer n(size of goban)
     * return   : void
     * descrip. : constructeur de goban de taille n*/
    goban(int n);

    /* FONCTION void affichage(int n)
     * argument : integer n(size of goban)
     * return   : void
     * descrip. : afficher le goban */
    void affichage(int n);

    /* FONCTION void pierre(int type, int y, int x)
     * arguments: integers color of stone, position of stone(x,y) 
     * return   : void
     * descrip. :mettre une pierre*/
    void pierre(int type, int y, int x);

    /* FONCTION void enlever(int type, int y, int x)
     * arguments: integers position of stone(x,y) 
     * return   : void
     * descrip. :mettre une pierre*/
    void enlever();

    /* FONCTION bool checklegal(int type, int y, int x)
     * arguments: integers color of stone, position of stone(x,y) 
     * return   : bool
     * descrip. :whether you can put your stone or not*/
    bool checklegal(int type, int y, int x);

    /* FONCTION bool CheckSuicide(int type, int y, int x)
     * arguments: integers color of stone, position of stone(x,y) 
     * return   : bool
     * descrip. :whether your choice is to suicide or not*/
    bool CheckSuicide(int type, int y, int x);
};



#endif	/* GO_H */

