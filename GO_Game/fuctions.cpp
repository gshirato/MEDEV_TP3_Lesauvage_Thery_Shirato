
#include "Go.h"
#include "functions.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <sstream>
using namespace std;

// C'est parti !!

void Kaikyoku(goban g, int n) {
    bool finish = false;
    while (!finish) {

        int x;

        char char_x;
        int pos_x,pos_y;
   
        /*NOIR*/
        cout << endl;
        cout << "First move (Noir)" << endl;

        cout << "Input Position X ex) B " << endl;
        cin >> char_x;
        pos_x = (int) char_x -65;
  
        cout << "Input Position Y ex) 7 " << endl;
        cin >> pos_y;

        // Put the stone
        g.pierre(1, pos_y-1, pos_x);
        g.affichage(n);

        // capture

        /*Blanc*/
        cout << endl;
        cout << "Second move (Blanc)" << endl;

       
                cout << "Input Position X ex) B " << endl;
                 cin >> char_x;
                 pos_x = (int) char_x -65;

                cout << "Input Position Y ex) 7 " << endl;
                cin >> pos_y;

                // Put the stone
                g.pierre(2, pos_y-1, pos_x);
                g.affichage(n);

                g.TurnEnd();
    }

}
