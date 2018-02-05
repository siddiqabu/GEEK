#include <stdio.h>
#include <math.h>
int checkArmstrongNumber(int n);
int main()
int checkArmstrongNumber(int number)
{
    int originalNumber, remainder, result = 0, n = 0, flag;

    originalNumber = number;

    while (originalNumber != 0)
    {
        originalNumber /= 10;
        ++n;
    }

    originalNumber = number;

    while (originalNumber != 0)
    {
        remainder = originalNumber%10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

    // condition for Armstrong number
    if(result == number)
        flag = 1;
    else
        flag = 0;

    return flag;
}
