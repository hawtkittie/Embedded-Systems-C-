/* ====================================
File name: exerc_2_4.c (or cpp) Date: 2017-01-31
Group Number: 5
Members that contributed: Aseel Naji
YU Jet Hua 
Johan Johansson
 * Demonstration code: [<Ass code 1-4> <abc>] 
====================================== */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    char string[100];
    int leftLetter, rightLetter, length = 0;
    printf("Enter a word\n");
    scanf("%s", string);
    /* Find length of input string */
    while(string[length] != '\0')
        length++;
    /* If length of string is less than 1, ERROR */
    if(length < 1) 
        return 1;
         
    /* Initialize leftLetter and rightLetter to first and 
     last character of input string */
    leftLetter = 0;
    rightLetter = length -1;
    /* Compare left and right characters, If equal then 
     continue otherwise not a palindrome */
    while(leftLetter < rightLetter){
        if(string[leftLetter] != string[rightLetter]){
            printf("%s is not a Palindrome \n", string);
            return 0;
        }
        leftLetter++;
        rightLetter--;
    }
    printf("%s is a Palindrome \n", string);
    return 0;
}

