/* ====================================
File name: exerc_2_7.c (or cpp)
Date: 2017-01-30
        Group Number:
        Members that contributed:
Johan Johansson
 Yu Jet Hua
Aseel Naji
Demonstration code: [35013] 
====================================== */

#include <stdio.h>
#include <memory.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 10

int checkDay(int anInt);
int checkMonth(int anInt);
int controlDigit(char digits[10]);
char radPersonNr(char person[]);

int main() {
    char person[MAX];
    int monthInt;
    int dayInt;
    while(true) {
        printf("Please enter your birthday. (YYMMDDXXXX), press q if you want to quit \n");
        radPersonNr(person);
        char year[2];
        char month[2];
        char day[2];
        char lastNums[2];
        memcpy(year, person, 2);
        memcpy(month, person + 2, 2);
        monthInt = atoi(month);
        memcpy(day, person + 4, 2);
        dayInt = atoi(day);
        memcpy(lastNums, person + 6, 3);
        if(person[0]=='q'){
            break;
        }else if(checkMonth(monthInt) == 1){
            continue;
        } else if(checkDay(dayInt)==1){
            continue;
        }
        char controlDigits[9];
        memcpy(controlDigits,person,9);
        controlDigit(controlDigits);
    }
        return 0;
}

char radPersonNr(char person[]) {
    fgets(person,MAX+2,stdin);
}

int controlDigit(char pnr[]) {
    int even = 1;
    int sum =0;
    for (int i = 0; i < strlen(pnr); ++i) {
        int tmp = pnr[i]-'0';
        if(even==0){
                sum=sum+tmp;
            even=1;
        }else{
            tmp = tmp*2;
            if(tmp >= 9){
                int tmp1 = tmp/10;
                int tmp2 = tmp%10;
                int tmp3 = tmp1+tmp2;
                sum=sum+tmp3;
            }else{
                sum=sum+tmp;
            }
            even=0;
        }
    }
    int lastChar = sum % 10;
    int checksum = 10 - lastChar;
    if(checksum==10){
        checksum=0;
    }
    printf("Control digit: %i \n",checksum);
    return 0;
}

int checkMonth(int month) {
    if(month<1 || month>12){
        printf("Month is incorrect. \n");
        return  1;
    }else{
        return 0;
    }
}

int checkDay(int day) {
    if(day<1 || day>31) {
        printf("Day is incorrect. \n");
        return 1;
    } else{
        return 0;
    }
}
