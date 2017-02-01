/* ====================================
File name: exerc_2_5.c (or cpp)
Date: 2017-01-30
        Group Number:
        Members that contributed:
Johan Johansson
 Yu Jet Hua
Aseel Naji

Demonstration code: [<Ass code 1-4> <abc>] Important , No code no bonus !
====================================== */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100
#define MAXNUMBER 20


void create_random( int tab[] );
void count_frequency(int tab[], int freq[] );
void draw_histogram(int freq[] );

int main() {
    int tab[MAX],n;
    int freq[MAXNUMBER];


    create_random(tab);

    count_frequency(tab,freq);

    draw_histogram(freq);
}

void create_random(int tab[]){
    srand(time(NULL));
    for (int i = 0; i < MAX; i++) {
        int random = rand() % MAXNUMBER;
        tab[i] = random;
        //printf("%i %i \n",i,tab[i]);
    }
}

void count_frequency(int tab[], int freq[] ){
    for (int j = 0; j < MAXNUMBER ; ++j) {
        freq[j]=0;
    }
    for (int i = 0; i < MAX; i++) {
        //printf("%i ",tab[i]);
        freq[tab[i]]++;
    }
}

void draw_histogram(int freq[] ){
    for (int i = 0; i < MAXNUMBER; i++) {
        if(freq[i] != 0){
            printf("\n %i ",i);
            while(freq[i] != 0){
                printf("x");
                freq[i]--;
            }
        }
    }
}


