#ifndef _HDR_H
#define _HDR_H

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node 
{
    int *data;
    struct Node *next;
};

void chess_board();
void checker_board();
void random_walk();
void insert(struct Node **, int);
struct Node *node();
void display(struct Node *);
void caesar_cipher();

#endif
