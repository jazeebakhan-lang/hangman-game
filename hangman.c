#include <stdio.h>
#include <string.h>

int main (){

    char word [] = "hello";
    int length = strlen (word);
    char guessed [10];
    int i;
    int wrong = 0;
    char guess;

      for (i = 0; i < length; i++){
    guessed[i]= '_';
  }

    while (wrong < 6){


  for (i = 0; i < length; i++){
    printf ("%c ",guessed[i]);
    
  }

printf("\n");

printf("Enter a letter: \n");
scanf(" %c",&guess);

}
    return 0;
}
