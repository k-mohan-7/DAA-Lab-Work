#include<stdio.h>
int main()
{
  int n,i,j,k,m,t;
  int a[100];
  printf("enter the size of the continer")
  ;
  scanf("%d",&n)
  ;
  printf("enter the no.of elements present");
  scanf("%d",&k);
  for(i=0;i<k;i++)
  {
  
      printf("Enter the %d number",i);
      scanf("%d",&a[i]);
  }
  for(i=0;i<k-1;i++)
  {
    m=i;
    for(j=i+1;j<k;j++)
    {
      if(a[j]<a[m])
      {
        m=j;
      }
      }
      t=a[i];
      a[i]=a[m];
      a[m]=t;
  }
  for(i=0;i<=k;i++)
  {
    if((n-a[i])>0)
    {
      n=n-a[i];

      printf("The Element %d has been inserted \n",a[i]);
      printf("The Size of Container is %d\n",n);
      
    }
    else{
     printf("The Container Limit Exists\n");
     printf("The Remaining size of  Container %d",n);
      break;
    }
  }
}
