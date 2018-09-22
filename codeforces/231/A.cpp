#include<stdio.h>
int main()
{
    int i,n,a,b,c,count=0;
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
    scanf("%d%d%d",&a,&b,&c);
    if(a>0&&b>0||b>0&&c>0||c>0&&a>0){
        count++;
    }
    }
    printf("%d\n",count);

    return 0;

}