#include <stdio.h>
#include <string.h>
 /* ====================================
File name: exerc_2_1b.c (or cpp) Date: 2017-1-26
Group Number:
Members that contributed: Yu Jet Hua
Aseel Naji
Johan Johansson
Demonstration code: [<38940] 
====================================== */

int main()
{
	/* Limit the string to 20 and initialise i for looping*/
    char text1[20], text2[20];
    int i = 0;
     
    /* Reads the first string that gets copied */
    printf("Enter a string: ");
    gets(text1);
     
    /* While text1 is not empty, copy a character from i and go to the next character to copy */
    while(text1[i]!='\0')
    {
        text2[i] = text1[i];
        i++;
    }
 
    /* Makes sure that it is at the end of the string (often called a null-terminated string) */
    text2[i] = '\0';
 
    printf("First string = %s\n", text1);
    printf("Second string = %s\n", text2);

 
    return 0;
}

