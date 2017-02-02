#include <stdio.h>
#include <string.h>

/* ====================================
File name: exerc_2_3b.c (or cpp) Date: 2017-1-25
Group Number:
Members that contributed: Yu Jet Hua
Aseel Naji
Johan Johansson
Demonstration code: [30665] 
====================================== */

int nostrcmp (char [], char[]);

//void testString () {
//	if (a && b[0]= '\0')
//	printf("Nothing was inputted\n");
//	return 0;
//	else
//	return -1;
//}

int main()
{
	char a[100], b [100];
	int stringcheck;
	
	printf("Input the first string\n");
	gets(a);
 
	printf("Input the second string\n");
	gets(b);
	
    if (a[0 || b[0]] == '\0') {
    	printf("String not found!");
    	return 0;
	}
    	
		/* nostrcmp functions as strcmp by checking if the characters are identical
		in the same positions of the strings
	*/
	
	stringcheck = nostrcmp (a, b);
	
	
	if (stringcheck == 0)
      printf("Entered strings are equal\n");
	else
      printf("Entered strings are not equal\n");
    
    
    
	return 0;
	 }
	 
	int nostrcmp (char a[], char b[]) 
	{
		int i = 0;
		
		/* While string a in the position i is the same as string b in position i
			if it's not the end of a or b strings, break the loop and move to the next character in their respective string
		*/
		while (a[i] == b[i]) {
			if (a[i] == '\0' || b[i] == '\0')
			break;
			i++;
		}
		/* If the strings have both reached the end, return they are equal 
			else return they are not equal
		*/
		if (a[i] == '\0' && b[i] == '\0')
		return 0;
		else
		return -1;
	}
