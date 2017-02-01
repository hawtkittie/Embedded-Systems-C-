/* ====================================
File name: exerc_2_8.c (or cpp) Date: 2017-01-31
Group Number: 5
Members that contributed: Aseel Naji
YU Jet Hua 
Johan Johansson
 * Demonstration code: 
====================================== */
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>     


#define MAX_COINS 13

const int HUMAN = 0;
const int COMPUTER = 1;

/* ------------- IO --------------- */

/*
 * human_choice
 * Get human choce as an int from stdin.
 * Clears stdin.
 * in: pile
 * out: int-value in range 1-3 (and also less than pile)
 */
int human_choice(int pile);

/*
 * write_winner
 * Write winner as a string on stdout.
 * in: Values HUMAN or COMPUTER.
 * out:
 */
void write_winner( int player );

/*
 * play_again
 * Ask human if he/she wants to play
 * another round. If 'n' or 'N' selected
 * (single char) return false else true.
 * Clears stdin.
 * in: 
 * out: true or false
 */
int play_again();

/* ---------------- Logic ----------------*/

/*
 * computer_choice 
 * Get computers choice (including some AI,
 * if 4 coins or less left, function makes a 
 * smart choice else random).
 * in: pile
 * out: int-value in range 1-3 (and also less than pile)
 */
int computer_choice(int pile);

/*
 * toggle
 * Switches player, if HUMAN in COMPUTER out
 * etc.
 * in:  actual player
 * out: next player
 */
int toggle( int player );

/* --------------------- Utilities -------------*/
void clear_stdin();

/***************************************************
 *
 *    MAIN
 *
 ***************************************************/
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
  /*
   * end main loop
   */
   
  write_winner( player );   
    if(play_again()==true)
  {
    return main();
  }
  return 0;
}

/******************************************************
 *
 *  DEFINITIONS
 * 
 ******************************************************/


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
    puts("please enter a number between 1-3");
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
