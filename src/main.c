#include "hdr.h"

int main(void)
{
    puts("[ main ]");

    chess_board();
    checker_board();
    random_walk();

    struct Node *head = node();

    int i = 0;

    do 
    {
        insert(&head, (i * 40)); 
        i = i + 1;
    } while(i <= 4);

    display(head);

    // Caesar Cipher 
    caesar_cipher();

    return 0;

}
