#include "hdr.h"

int main(void)
{
    puts("[ main ]");

    chess_board();
    checker_board();
    random_walk();

    struct Node *head = node();

    insert(&head, 500); // &head - pass the address of a pointer to a pointer.
    insert(&head, 1500); // &head - pass the address of a pointer to a pointer.
    insert(&head, 2500); // &head - pass the address of a pointer to a pointer.
    insert(&head, 3500); // &head - pass the address of a pointer to a pointer.
    insert(&head, 4500); // &head - pass the address of a pointer to a pointer.
    insert(&head, 5500); // &head - pass the address of a pointer to a pointer.

    display(head);

    return 0;
}

