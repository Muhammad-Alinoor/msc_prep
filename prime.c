#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, rooted;
    printf("Enter a number: ");
    scanf("%d", &n);
    rooted = sqrt(n);
    int isPrime = 1;
    if (n == 0 || n == 1)
    {
        printf("%d is not a prime", n);
        return 0;
    }
    for (i = rooted; i > 1; i--)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 0)
    {
        printf("%d is not a prime!", n);
    }
    else
    {
        printf("%d is a prime!", n);
    }
}