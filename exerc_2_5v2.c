/* ====================================
File name: exerc_2_5.c (or cpp)
Date: 2017-01-30
        Group Number:
        Members that contributed:
Johan Johansson

Demonstration code: [<Ass code 1-4> <abc>] Important , No code no bonus !
====================================== */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10
#define MAXNUMBER 20


void create_random( int *tab );
void count_frequency(int *tab, int *freq );
void draw_histogram(int *freq );

int main() {
    int tab[MAX],n;
    int freq[MAXNUMBER]={0};
    int *tabP = tab;
    int *freqP = freq;


    create_random(tabP);
    count_frequency(tabP,freqP);
    draw_histogram(freqP); 
}

void create_random(int *tab){
    srand(time(NULL));
    for (int i = 0; i < MAX; i++) {
        int random = rand() % MAXNUMBER;
        *tab = random;
        printf("%i ",*tab);
        tab++;
    }
}

void count_frequency(int *tab, int *freq ){
    for (int i = 0; i < MAX; i++) {
        freq=freq+*tab;
        *freq=*freq+1;
        freq=freq-*tab;
        tab++;
    }
}

void draw_histogram(int *freq ){
    for (int i = 0; i < MAXNUMBER; i++) {
        if(*freq != 0){
            printf("\n %i ",i);
            while(*freq!= 0){
                printf("x");
                *freq=*freq-1;
            }
        }
        freq++;
    }
}


