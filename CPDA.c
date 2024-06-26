#include <stdio.h>
void dPa(int n)
{
    int j = 1, t = 0, s = 0, m = 2*n;
    while (j <= n)
    {
        t++;
        for (j = t; j <= n; j++)
        {
            if (n%j == 0)
            {
                t=j;
                s+=t;
                break;
            }
        }
    }
    if (s == m)
        printf("%d is a perfect number",n);
    else if (s > m)
        printf("%d is an abundant number",n);
    else
        printf("%d is a deficient number",n);
}
int main ()
{
    int n;
    printf("enter a positive integer: ");
    scanf("%d", &n);
    dPa(n);
}

Or a bit simpler formula:
#include <stdio.h>
void dPa(int n)
{
    int j = 1, t = 0, s = 0;
    while (j < n)
    {
        t++;
        for (j = t; j < n; j++)
        {
            if (n%j == 0)
            {
                t=j;
                s+=t;
                break;
            }
        }
    }
    if (s == n)
        printf("%d is a perfect number",n);
    else if (s > n)
        printf("%d is an abundant number",n);
    else
        printf("%d is a deficient number",n);
}
int main ()
{
    int n;
    printf("enter a positive integer: ");
    scanf("%d", &n);
    dPa(n);
}