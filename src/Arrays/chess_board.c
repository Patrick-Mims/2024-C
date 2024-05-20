#include "hdr.h"
#define CHESS_BOARD 8

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
 * 1. Write a program that declares an 8 x 8 char array named checker_board
 * 2. And then uses a loop to store the following data into the array 
 *   (one character at a time).
 */

void checker_board()
{
    int c, r, board = 10;

    char checker_board[10][10] = {
        {'k', 'r', 'i', 'e', 'n', 's', 'e', 'z', 'o', 'l' },
        {'a', 'r', 'i', 'i', 'n', 'i', 'p', 's', 'm', 'l' },
        {'t', 'r', 'z', 'o', 'q', 's', 'w', 'z', 'o', 'x' },
        {'t', 'r', 'z', 'o', 'q', 's', 'w', 'z', 'o', 'x' },
        {'a', 't', 'g', 'h', 'n', 's', 'e', 'd', 'o', 'l' },
        {'a', 'y', 'i', 'l', 'v', 's', 'a', 'z', 'k', 'l' },
        {'p', 'o', 'i', 'm', 'n', 'u', 'u', 'z', 'o', 'h' },
        {'t', 'r', 'z', 'o', 'q', 's', 'w', 'z', 'o', 'x' },
        {'w', 'b', 'i', 'n', 'w', 's', 'c', 'r', 'b', 't' },
        {'v', 'd', 'i', 'v', 'i', 's', 'x', 'z', 'o', 'l' }
    };

    puts("\nChecker Board");

    for(r = 0; r < board; r++) 
    {
        for(c = 0; c < board; c++)
        {
            printf(" %c", checker_board[r][c]);
        }
        printf("\n");
    }
}

