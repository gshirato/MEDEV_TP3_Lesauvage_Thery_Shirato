/* 
 * File:   switchcolor.h
 * Author: user
 *
 * Created on 8 décembre 2016, 11:13
 */

#ifndef SWITCHCOLOR_H
#define	SWITCHCOLOR_H

char switchcolor(char couleur){
    if (couleur == 'N'){couleur = 'B';}
    if (couleur == 'B'){couleur = 'N';}
    if (couleur == '+'){couleur = '+';}
    return couleur;
}


#endif	/* SWITCHCOLOR_H */

