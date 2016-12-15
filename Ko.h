/* 
 * File:   Ko.h
 * Author: user
 *
 * Created on 15 décembre 2016, 12:05
 */

#ifndef KO_H
#define	KO_H

class ko {
private:
    //ko's position et its number of turn
    int ko_x, ko_y;
    int ko_num;
public:

    /*accesseur*/
    int getKoX() {
        return ko_x;
    }

    int getKoY() {
        return ko_y;
    }

    int getKoNum() {
        return ko_num;
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
};

#endif	/* KO_H */

