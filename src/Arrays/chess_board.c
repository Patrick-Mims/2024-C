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
            printf(" %c", chess_board[row][col]);
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

/**
 * Write a program that generates a "random walk" across a 10 x 10 aray, 
 * the array will contain characters (all '.' initially). 
 *
 * The program must randomaly "walk" from element to element, always going up, 
 * down, left or right by one element.
 *
 * The element visited by the program will be labeled with the letters A through Z,
 * in the order visited. 
 *
 * Here's an example of the desired output:
 *
 * A . . . . . . . 
 * B C D . . . . .
 * . F G . . . . . 
 * H J . . . . . .
 * . . . 
 */

//void test_me(char board[], 10)
void create_grid(char board[10][10])
{
    puts("test_me()");
}

void random_walk()
{
    bool visited[10][10] = {false};
    int col;
    int column_break = 7;
    int grid_size = 100;
    int gs;
    int k;
    int row;
    int size_of_array = 0;

    char grid[10][10] = {0};

    const char label[] = {
            'A','B','C','D','E','F','G',
            'H','I','J','K','L','M','N',
            'O','P','Q','R','S','T','U',
            'V','W','X','Y','Z'
    };

    printf("\nRandom Walk\n");

    // Grid
    for(row = 0; row < 10; row++)
    {
        for(col = 0; col < 10; col++)
        {
            grid[row][col] = '.';
            printf(" %c", grid[row][col]);
        }
        printf("\n");
    }

    size_of_array = sizeof(label) / sizeof(label[0]);

    for(k = 1; k <= size_of_array; k++)
    {
        printf("[ %d ]", k);
        if(k % column_break == 0) {
            printf("\n");
        }
    }

    printf("\n");

    int number_of_squares = 10;
    int i = 1;
    int random_row;
    int random_col;

    while(number_of_squares > 0)
    {
        random_row = rand() % 10;
        random_col = rand() % 10;
        printf("random_row -> %d\n", random_row );
        printf("random_col -> %d\n", random_col);

        for(row = 0; row < 10; row++)
        {
            for(col = 0; col < 10; col++)
            {
                grid[row][col] = '.';
                printf(" %c", grid[row][col]);
            }
            printf("\n");
        }

        grid[random_row][random_col] = label[i];
        printf(" %c\n", grid[random_row][random_col]);

        number_of_squares--;
        i++;
    }

    /*
    while(number_of_squares > 0)
    {
        grid[random_col][random_row] = label[i];
        printf(" %c\n", grid[random_row][random_col]);
        number_of_squares--;
    }
    */
}