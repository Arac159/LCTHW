#include <stdio.h>
#include <ctype.h>

int main (int argc, char *argv[])
{
	if (argc != 2) {
           printf("ERROR: You neeed an argument \n");
           
           return 1;
        }

       int i = 0;
       for (i = 0; argv[1][i] != '\0'; i++) {
           char letter = argv[1][i];
           char lowletter = tolower(letter);

           if (lowletter == 'a') {
              printf("%d: %c is a vowel\n", i, letter);
           }
           else if (lowletter == 'e') {
              printf("%d: %c is a vowel\n", i, letter);
           }
           else if (lowletter == 'i') {
              printf("%d: %c is a vowel\n", i, letter);
           }
           else if (lowletter == 'o') {
              printf("%d: %c is a vowel\n", i, letter);
           }
           else if (lowletter == 'u') {
              printf("%d: %c is a vowel\n", i, letter);
           }
           else if (lowletter == 'y') {
                if (i > 2) {
                   printf("%d: 'Y'\n", i);
                }
           }
           else {
              printf("%d: %c is not a vowel\n", i, letter);
           }
        }
        return 0;
}
