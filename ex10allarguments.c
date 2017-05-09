#include <stdio.h>

int main (int argc, char *argv[])
{

        int i = 0;
        int j = 0;
   for (j = 1; j < argc; j++) {
         
       	for (i = 0; argv[j][i] != '\0'; i++) {
            char letter = argv[j][i];

            switch (letter) {

                case 'a':
                case 'A':
                   printf("%d: 'A' is a vowel\n", i);
                   break;

                case 'e':
                case 'E':
                  printf("%d: 'E' is a vowel\n", i);
                  break;
                
                case 'i':
                case 'I':
                  printf("%d: 'I' is a vowel\n", i);
                  break;

               case 'o':
               case 'O':
                 printf("%d: 'O' is a vowel\n", i);
                 break;

               case 'u':
               case 'U':
                 printf("%d: 'U' is a vowel\n", i);
                 break;

               case 'y':
               case 'Y':
                    //why i>2? is this a bug?
                    if (i> 2) {
                       // it's only sometimes 2
                       printf("%d: 'Y'\n", i);
                    }
	            break;

               default:
                 printf("%d: %c is not a vowel\n", i, letter);
            }
        }
    }

        return 0;
}
