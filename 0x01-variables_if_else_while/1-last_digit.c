#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main -Entry point
*
*Description: a
*
*Return:Always 0 (Success)
*/
int main(void)
{
	int n, digit;

srand(time(0));
n = rand() - RAND_MAX / 2;
digit = n % 10;
if (digit > 5)
printf("Last digit of %i and %i is greater than 5", n, digit);
else if (digit == 0)
printf("Last digit of %i is %i  and is less than 6 and not 0", n, digit);
else if (digit < 6 && digit != 0)
printf("Last digit of %i and %i and is less than 6 and not 0", n, digit);
	return (0);
}
