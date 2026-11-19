#include <stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    if(n==1)
    {
    printf("neither prime nor composite number");
    return 0;
    }
    for(i=2;i<=n/2;i++)
    {
        if(n%2==0)
        {c++;
        printf("not a prime number");
        break;
        }
    }
    if(c==0)
    printf("prime number");
}