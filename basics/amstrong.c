#include <stdio.h>
main()
{
int num, S, remainder, result = 0;
printf("Enter a three-digit integer: ");
scanf("%d", &num);
S = num;
while (S != 0)
{
remainder = S % 10;
result += remainder * remainder * remainder;
S /= 10;
}
if (result == num)
printf("%d is an Armstrong number.",
num); else
printf("%d is not an Armstrong number.", num);
} 
