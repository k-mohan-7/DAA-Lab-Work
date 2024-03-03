#include<stdio.h>
#include<stdbool.h>
bool prime(int n,int i)
{
    int f=0;
    if(n==2)
    {
        return true;
        
    }
    if(i>n)
    {
        return false;
    }
    if(n%i==0)
    {
        return false;
    }
    else{
        return true;
    }

    return prime( n,i++);
    
}
int main()
{
    int n,i,j;
    printf("Enter the last number upto where u require the prime numbers")
    ;
    scanf("%d",&n)
    ;
    for(j=2;j<=n;j++)
    {
   if(prime(j,2)){
   printf("%d",j) ;
   }
   
    }
}
