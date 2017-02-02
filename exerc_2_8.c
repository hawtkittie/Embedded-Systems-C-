/* ====================================
File name: exerc_2_8.c (or cpp) Date: 2017-01-31
Group Number: 5
Members that contributed: Aseel Naji
YU Jet Hua 
Johan Johansson
 * Demonstration code: 33968
====================================== */
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>     

#define MAX_COINS 13

const int HUMAN = 0;
const int COMPUTER = 1;
int human_choice(int pile);
void write_winner( int player );
int play_again();
int computer_choice(int pile);
int toggle( int player );
void clear_stdin();

int main()
{
  int pile,			/* This is how many coins we have */
    player,			/* Who is playing? */
    n_coins;			/* Number of coins taken */
  
  srand( time(0) );		/* Setup random */

  printf("Välkommen till NIM by Group 5\n");
  
  pile = MAX_COINS;		/* Set start values (= init) */
  player = HUMAN;

  /* 
   *  Program main loop 
   */
  while( true ) {	

    printf("Det ligger %d  mynt i högen\n", pile );
    
    if( player == HUMAN ){
      n_coins = human_choice(pile);      
    }else{
      n_coins = computer_choice(pile);
      printf("- Jag tog %d\n", n_coins);      
    }
    pile -= n_coins;      
    if( pile <= 1 ){
      break;
    }
    player = toggle(player);

  }
   
  write_winner( player );   
    if(play_again()==true)
  {
    return main();
  }
  return 0;
}

void clear_stdin()
{
  while( getchar()!='\n');
}

int human_choice(int pile)
{
  puts("Please take between 1-3 coins");
  char input[2];
  fgets(input, 2, stdin);
  clear_stdin();
  if((input[0] - '0') > 3 || (input[0] - '0') < 0) {
    return human_choice(pile);
  }
  else
  return input[0] - '0';

}

int computer_choice(int pile)
{
    int choice = rand() % 3;
    if(choice == 0 ) choice = 1;
    if(pile<=4 && pile != 1) return pile-1;
    return choice;
}

void write_winner(int player )
{
  if(player==1)
  {
    printf("Sorry! Better luck next time.\n");
  }
  else
  {
    printf("You won! Congratulations\n");
  }

}

int play_again()
{
  puts("Please enter n/N to stop the game or any key to play again.");
  char input[2];
  fgets(input,2,stdin);
  clear_stdin();
  if(input[0]=='n' || input[0]=='N') return false;
  return true;

}

int toggle( int player )
{
  if(player==1) return 0;
  return 1;
}
