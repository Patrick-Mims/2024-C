#include "hdr.h"
#define CHESS_BOARD 8

void chess_board()
{
    int col, row;

    char chess_board[8][8] = {
        { 'r', 'n', 'b', 't', 'k', 'b', 'n', 'g' },
        { 'a', 'h', 'p', 'k', 'p', 'f', 'b', 'p' },
        { 'n', 'i', 'e', 'g', 'k', 'b', 't', 'r' },
        { 't', 'p', 'v', 'n', 'l', 'a', 'c', 'p' },
        { 'r', 'm', 'o', 'q', 'h', 'b', 'n', 'b' },
        { 'q', 'p', 'f', 's', 'a', 'x', 'b', 'u' },
        { 'x', 'z', 'b', 'q', 'k', 'b', 'w', 'r' },
        { 'p', 'p', 'g', 'p', 'a', 'l', 'z', 'p' }
    };

    for(row = 0; row < CHESS_BOARD; row++) 
    {
        for(col = 0; col < CHESS_BOARD; col++) 
        {
            printf(" %c", chess_board[row][col]);
        }
        printf("\n");
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
 *
 * I use an 8 x 8 grid and just used random characters to print a grid.
 */
