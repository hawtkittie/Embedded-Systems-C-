#include <stdio.h>
#include <string.h>

/* ====================================
File name: exerc_2_1a.c (or cpp) Date: 2017-1-25
Group Number:
Members that contributed: Yu Jet Hua
Aseel Naji
Johan Johansson
Demonstration code: [<Ass code 1-4> <abc>] 
====================================== */

int main()
{
	/* Limit the string to 20 */
	char text1[20], text2[20];

	/* Reads the first string that gets copied */
	printf("Enter a string: ");
	gets(text1);


	/*
	* Copies all characters in text1 to text2 using strcpy()
	* The first parameter of the function is the destination string
	* And second is the source string inputted by the user
	*/
	strcpy(text2, text1);

	printf("First string = %s\n", text1);
	printf("Second string = %s\n", text2);



	return 0;
}
