#include "hdr.h";
/*
    One of the oldest known encryption techniques is the Caesar cipher, 
    attributted to Julius Caesar.

    It involves replacing each letter in the message with another letter 
    that is a fixed number of positions later in the alphabet.

    (If the replacement would go past the letter Z, the cipher 
     "wraps around" to the beginning of the alphabet.

      For example, if each letter is replaced by the letter 
      two positions after it, then Y would be replaced by A, 
      and Z would be replaced by B.)

    - - -

    Challenge
    Write a program that encrypts a message using a Caesar cipher. 

    1.  The user will enter the message to be encrypted and the shift amount 
        (the number of positions by which letter should be shifted):

        MODIFIED - 2024-07-06 (July 6th, 2024)

        [ The message will be read from a file and encrypted to a new file. ]

        Enter message to be encrypted: Go ahead, make my day.
        Enter shift amount (1-25): 3
        Encryped message: Jr dkhdg, pdnh pb gbd.

        Notice that the program can decrypt a message if the user enters 26 minus 
        the origin key:

        Enter message to be encrypted: Jr dkhdg, pdnh pb gbd.
        Enter shift amount (1-25): 23
        Encryped message: Go ahead, make my day.

    You man assume that th e message does not exceeed 80 characters. 
    Characters other than letters should be left unchanged. 
    Lower-case letters remain lower-case when encrypted, and upper-case letters 
    remain upper-case. 

    Hint: 
    To handle the wrap-around problem, use the expression 
    ((ch -'A') + n) % 26 + 'A' to calculate the encrypted version of 
    an uppercase letter, where ch stores the letter and n stores the shift amount. 
    (You'll need a similar expression for lower-case letters).
*/



static void encrypt_message(FILE *ptr, char *file)
{
    int shift_amount = 0;

    if((ptr = fopen("temp.txt", "r")) == NULL)
    {
        exit(EXIT_FAILURE);
    }

    char ch;

    while((ch = fgetc(ptr)) != EOF)
        put(ch);

    close(ptr);
    // 1. open 
    // 2. read
    // 3. encrypt
}

void caesar_cipher()
{
    char str[50] = {0};
    char *file = "temp.txt";
    FILE *filePtr;

    puts("");
    puts("* * * * * * * * * ");
    puts("Caesar Cipher");
    puts("* * * * * * * * * ");

    // create a temp file and add a phrase, which we will be encrypted.
    if((filePtr = fopen(file, "w")) == NULL)
    {
        fprintf("Error: \n", filePtr);
        exit(EXIT_FAILURE);
    }

    // phrase to encrypt 
    fputs("white women\n", filePtr);

    encrypt_message(filePtr, file);

    // 1. read file => temp.txt
    // 2. encrypt message
    // 3. 
}














