#include <stdio.h>
#include <stdlib.h>

int main()
{
 int t[8];
 int n,i,j,tmp;
 printf("enter the array number");
 for(i=0;i<8;i++){
    printf("enter numbert[%d]",i+1);
    scanf("%d",&n);
 }
 for(i=0;i<8;i++){
    for(j=i+1;j<8;j++){
        if(t[i]<t[j]){
            tmp=t[i];
            t[i]=t[j];
            t[j]=tmp;
        }
    }
 }
 printf("the arrays number");
 for(i=0;i<8;i++)
    printf("%d",t[i]);
    return 0;
}
