/* 
 * File:   Go.h
 * Author: user
 *
 * Created on 8 décembre 2016, 09:04
 */

#ifndef GO_H
#define	GO_H

#define VIDE 0
#define NOIR 1
#define BLANC 2
#define OUT 3
#define max_taille 9


class goban {
    
private:
    int board[max_taille][max_taille];
public:
    goban(int n);
    void affichage(int n);
    void pierre(int type, int y, int x);
};

#endif	/* GO_H */

