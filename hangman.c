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

    


int found = 0;

 for (i = 0; i < length; i++){
  if (word[i] == guess){
  guessed[i] = guess;
  found = 1;
}
}

if (found == 0) {
  wrong++;

  printf ("wrong");

   printf("\n");

}

int won = 1;

 for (i = 0; i < length; i++){
  if (guessed[i] == '_'){
  won = 0 ;
}

 }
 if (won == 1) {
    printf("You win!!");
    return 0;
}
}


printf("You lose! the word was %s\n", word);
return 0;

}