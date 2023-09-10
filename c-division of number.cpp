#include <stdio.h>
int main()
{
int number1, number2, divison;
printf("Enter the two integers:");
scanf("%d %d", &number1, &number2, &divison);
divison = number1 / number2;
printf("The divison of two integers are: %d / %d = %d", number1, number2, divison);
return 0;
}
