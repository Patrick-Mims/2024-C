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
    The user will enter the message to be encrypted and the shift amount 
    (the number of positions by which letter should be shifted):

    Notice that the program can decrypt a message if the user enters 26 minus 
    the origin key:

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
