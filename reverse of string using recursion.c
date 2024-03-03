#include<stdio.h>
#include<string.h>
void rev(char s[10],char r[10],int l,int i )
{
    
   if(l<0)
   {
    return;
   }
   r[i]=s[l];
   return rev(s,r,l-1,i+1);
}
int main()
{
    char s[10]="happy";
    char r[10];
    int l=strlen(s);
    rev(s,r,l-1,0);
    r[l]='\0';
    printf("The reversed string is %s ",r);
}
