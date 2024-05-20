#include "hdr.h"
#define CHESS_BOARD 8

void chess_board()
{
    int COL, ROW;

    char chess_board[8][8] = {
        { 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r' },
        { 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p' }
    };

    for(ROW = 0; ROW < CHESS_BOARD; ROW++) 
    {
        for(COL = 0; COL < CHESS_BOARD; COL++) 
        {

        }
    }

}

/**
 * 1. Write a declaration of an 8 x 8 char array named chess_board. 
 *
 * 2. Include an initializer that puts the following data into the array 
 *    (one character per array element).
 *
 * r n b q k b n r
 * p p p p p p p p
 *
 * P P P P P P P P
 * R N B Q K B N R 
 */
