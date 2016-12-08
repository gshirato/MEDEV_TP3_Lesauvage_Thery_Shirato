/* 
 * File:   main.cpp
 * Author: user
 *
 * Created on 8 décembre 2016, 09:02
 */
#include"Go.h"
#include"functions.h"
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    goban goban1(9);
    Kaikyoku(goban1, 9);
    return 0;
}

