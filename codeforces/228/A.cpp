#include<stdio.h>
int main()
{
         int a[5],c=0,i,j;
         for(i=0;i<4;i++)
         {
             scanf("%d",&a[i]);
         }
         for(i=0;i<4;i++)
         {
             for(j=i+1;j<4;j++)
             {
                 if(a[i]==a[j])
                 {
                     c++;
                     break;
                 }
             }
         }
 
          printf("%d\n",c);
 
     return 0;
 
 
}