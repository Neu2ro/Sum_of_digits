/* C Program to find Sum of Digits of a Number using Recursion */

#include <stdio.h>

int main()
{

    //Declaring variables
    int num, result;

    //Function declaration
    int sum (int a);

    //Asking user to enter a number and storing it in 'num'
    printf("Enter the number: ");
    scanf("%d", &num);

    //calling the defined function sum
    result = sum(num);

    //Printing the value of sum of the digits
    printf("Sum of digits in %d is %d\n", num, result);
    return 0;

}

//Function to add the digits of number
int sum (int num)
{

    //Using if else to separate the digits and then add them individually
    if (num != 0)
    {
        return (num % 10 + sum (num / 10));
    }
    else
    {
       return 0;
    }

}
