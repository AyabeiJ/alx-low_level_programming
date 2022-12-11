#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -main blcok
 * Description: get a random number and print the number and if it is positive, negative, or zero
 * Return:0
 */
int main(void)
{
	int n;
	srand(time(0));
	if (n>0)
		printf("%i is positive\n", n);
	else if (n<0)
		printf("%i is neative\n", n);
	else 
		printf("%i is zero\n", n);
	return (0);
}
