/*to find factorial of a number*/
#include <stdio.h>
int main()
{
int i,n,f;
printf("enter n:");
scanf("%d",&n);
f=n;
for(i=n-1;i>0;i--){
	f=f*i;
}
printf("factorial:%d",f);
}
