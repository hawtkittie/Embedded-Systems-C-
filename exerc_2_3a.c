#include <stdio.h>
#include <string.h>

/* ====================================
File name: exerc_2_3a.c (or cpp) Date: 2017-1-25
Group Number:
Members that contributed: Yu Jet Hua
Aseel Naji
Johan Johansson
Demonstration code: [<Ass code 1-4> <abc>] 
====================================== */

int main()
{
	char a[100], b [100];
	
	printf("Input first string\n");
	gets(a);
 
	printf("Input second string\n");
	gets(b);
 	
 	    if (a[0 || b[0]] == '\0') {
    	printf("String not found!");
    	return 0;
	}
 	/* Using strcmp to compare each and every character in strings a and b 
 	   strcmp returns the integer 0 if they are identical
	*/
	if (strcmp(a,b) == 0)
      printf("Entered strings are equal.\n");
	else
      printf("Entered strings are not equal.\n");
      
    
	return 0;
	 }
