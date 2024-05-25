
#include <stdio.h>

int main(int argc, char* argv[]){
/*
 * int - 4 bytes (i.e., 32 bits)
 * short int or short - 2 bytes
 * char - 1 byte
 * float - 4 bytes (has a unique format)
 * double - 8 bytes (has a unique format)
 */

/* char* argv[] - this is an array of pointers to character "strings"*/
printf("argc = %d, argv[0] = %s",argc, argv[0]); /* %d is for decimal, %s is for string */

for(int i = 1; i < argc; i++){
 printf("argv[%d] = %s\n", i, argv[i]);
}
return 0;
}
i

