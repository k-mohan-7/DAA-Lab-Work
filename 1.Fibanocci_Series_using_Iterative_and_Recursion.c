#include<stdio.h>
int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    else{
        return (fib(n-1)+fib(n-2));
    }
}
int main()
{
    int n,i,j,k,ch;
    printf("Enter The N value to calcute the Fibanocci series ");
    scanf("%d",&n);
    printf("Enter 1 for doing the Iterative method 2 for Recursion Method ");
    scanf("%d",&ch);
    int a=0,b=1,c=0;
    if(ch==1)
    {
        for(i=1;i<=n;i++)
        {
            c=a+b;
            printf("%d ",a);
            a=b;
            b=c;
        }
    }
    if(ch==2)
    {
        for(i=0;i<n;i++)
        {
            printf("%d",fib(i));
        }
    }
}
