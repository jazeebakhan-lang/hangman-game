#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

char *words[] = {"hello", "cards", "python", "coding", "flowers", "headphone", "keyboard", "games", "dublin", "college"};
int main (){

    char guessed [10];
    int i;
    int wrong = 0;
    char guess;
    char playAgain = 'x';

    srand(time(NULL));


    while (playAgain != 'n'){

    int randomIndex = rand() % 10;
    char *word = words[randomIndex];
    int length = strlen (word);

      wrong = 0;

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

  if (wrong == 1) {
    printf("  |\n");
    printf("  |\n");
    printf("  |\n");
}
else if (wrong == 2) {
    printf(" _____\n");
    printf("  |\n");
    printf("  |\n");
    printf("  |\n");
}

else if (wrong == 3) {
    printf(" _____\n");
    printf("    |\n");
    printf("    O\n");
    printf("    |\n");
    printf("    |\n");
}
else if (wrong == 4) {
    printf(" _____\n");
    printf("    |\n");
    printf("    O\n");
    printf("   /|\n");
    printf("    |\n");
}
else if (wrong == 5) {
    printf(" _____\n");
    printf("    |\n");
    printf("    O\n");
    printf("   /|\\\n");
    printf("    |\n");
}
else if (wrong == 6) {
    printf(" _____\n");
    printf("    |\n");
    printf("    O\n");
    printf("   /|\\\n");
    printf("    |\n");
    printf("   / \\\n");
}

}

int won = 1;

 for (i = 0; i < length; i++){
  if (guessed[i] == '_'){
  won = 0 ;
}

 }
 if (won == 1) {
    printf("You win!! the word was %s\n", word);
    printf("play again? y/n: \n");
    scanf(" %c", &playAgain);
    break;
}

}


printf("You lose! the word was %s\n", word);

printf("play again? y/n: \n");
scanf(" %c", &playAgain);

    }
return 0;
}