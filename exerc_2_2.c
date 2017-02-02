/* ====================================
File name: exerc_2_2.c (or cpp) Date: 2017-01-31
Group Number: 5
Members that contributed: Aseel Naji
YU Jet Hua 
Johan Johansson
 * Demonstration code: [37825] 
====================================== */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10

int main(int argc, char **argv)
{
    srand(time(NULL));  //generator for random numbers
    int array[MAX];
    int i;
    int size = sizeof(array) / sizeof(array[0]); //getting the length of the array 
    int *pointer;
    int integerType;
    pointer = &array;
    for (i=0; i<size; i++) 
    {    
        array[i] = rand() %100; //range to 100
    }
    
	printf("The value of the label array (address) is: %p\n", pointer);
    printf("First integer in the array is: %d\n", array[0]);
    printf("The size of an integer (number of bytes) is: %d\n",sizeof(integerType));
    printf("The size of the whole array is : %d\n", sizeof(array));
    for (i=0; i<size; i++) 
    {    
        printf("Elements: %d\n", array[i]);
    }
    pointer=array;
    for (i=0; i<size; i++){
        printf("Double the elements: %d\n", *pointer *2 );
        pointer++;
    }
    
	return 0;
}
