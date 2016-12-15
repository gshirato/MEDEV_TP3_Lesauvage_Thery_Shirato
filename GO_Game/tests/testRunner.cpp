#include "gtest/gtest.h"
#include "constantes.h"
#include "capture.h"
#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;
 

TEST(Equality,AddIntegers_GetSum){
	EXPECT_EQ(23,11+12);
}

/*TEST(Capture,testcapture){
    char board[MSIZE][MSIZE];
    for (int i = 0; i<MSIZE; i++){
        for (int j = 0; j < MSIZE; j++){
            board[i][j] = '+';
        }
    }
    board[0][2] = 'N';
    board[1][1] = 'N';
    board[1][3] = 'N';
    board[3][2] = 'N';
    board[1][2] = 'B';
    board[2][2] = 'B';
    board[2][3] = 'B';
    EXPECT_FALSE(test_capture(board,2,1,'N'));
    board[2][4] = 'N';
    board[3][3] = 'N';
    EXPECT_TRUE(test_capture(board,2,1,'N'));
}*/

TEST(Capture,pioncapture){
    char board[MSIZE][MSIZE];
    for (int i = 0; i<MSIZE; i++){
        for (int j = 0; j < MSIZE; j++){
            board[i][j] = '+';
        }
    }
    board[0][2] = 'N';
    board[1][1] = 'N';
    board[1][3] = 'N';
    board[3][2] = 'N';
    board[1][2] = 'B';
    board[2][2] = 'B';
    board[2][3] = 'B';
    EXPECT_FALSE(pion_capture(board,1,1,'N'));
    EXPECT_FALSE(pion_capture(board,2,2,'N'));
    board[2][4] = 'N';
    board[3][3] = 'N';
    board[2][1] = 'N';
    EXPECT_TRUE(pion_capture(board,2,2,'N'));
}

int main (int argc, char** argv)
{
  cout << "hello" << endl;
  ::testing::InitGoogleTest (&argc, argv);
  return RUN_ALL_TESTS();
}

