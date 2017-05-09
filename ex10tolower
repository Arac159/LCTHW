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

            switch (toletter) {

                case 'a':
                   printf("%d: 'A' is a vowel\n", i);
                   break;   

                case 'e':
                  printf("%d: 'E' is a vowel\n", i);
                  break;
                
                case 'i':
                  printf("%d: 'I' is a vowel\n", i);
                  break;

               case 'o':
                 printf("%d: 'O' is a vowel\n", i);
                 break;

               case 'u':
                 printf("%d: 'U' is a vowel\n", i);
                 break;

               case 'y':
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

        return 0;
}
