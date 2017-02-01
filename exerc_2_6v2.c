/* ====================================
File name: exerc_2_6.c (or cpp)
Date: 2017-01-30
        Group Number:
        Members that contributed:
Johan Johansson

Demonstration code: [<Ass code 1-4> <abc>] Important , No code no bonus !
====================================== */
#include <stdio.h>
#define MAX 5

void initQueue(int list[], int max);
int input(int list[], int number, int max);
int output(int list[], int max);

int main() {

    int queue[MAX];

    initQueue(queue,MAX);
    for (int i = 0; i < MAX; ++i) {
        printf("%i ",queue[i]);
    }
    printf("\n");

    input(queue,3,MAX);
    for (int i = 0; i < MAX; ++i) {
        printf("%i ",queue[i]);
    }

    printf("\n");
    input(queue,4,MAX);
    for (int i = 0; i < MAX; ++i) {
        printf("%i ",queue[i]);
    }

    printf("\n");
    input(queue,7,MAX);
    for (int i = 0; i < MAX; ++i) {
        printf("%i ",queue[i]);
    }

    printf("\n");
    input(queue,8,MAX);
    for (int i = 0; i < MAX; ++i) {
        printf("%i ",queue[i]);
    }

    printf("\n");
    input(queue,5,MAX);
    for (int i = 0; i < MAX; ++i) {
        printf("%i ",queue[i]);
    }
    printf("\n");
    input(queue,8,MAX);
    for (int i = 0; i < MAX; ++i) {
        printf("%i ",queue[i]);
    }

    printf("\n");

    output(queue,MAX);
    for (int i = 0; i < MAX; ++i) {
        printf("%i ",queue[i]);
    }
    printf("\n");

    output(queue,MAX);
    for (int i = 0; i < MAX; ++i) {
        printf("%i ",queue[i]);
    }
    printf("\n");

    return 0;
}

int output(int list[], int max) {

    int ret = 0;
        if(list[0]!= -1){
            ret =  list[0];
            list[0] = list[1];
            list[1] = list[2];
            list[2] = list[3];
            list[3] = list[4];
            list[4] = -1;
                }

    return ret;
}

int input(int list[], int number, int max) {
    for (int i = 0; i < max; ++i) {
        if(list[i]==-1){
            list[i]=number;
            return 1;
        }
    }
    return 0;
}

void initQueue(int list[], int max) {
    for (int i = 0; i < max; ++i) {
        list[i] = -1;
    }
}
