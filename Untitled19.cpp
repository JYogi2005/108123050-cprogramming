/*sum of first n natural numbers*/
#include <stdio.h>
int main()
{
int i,n,s;
printf("enter n:");

scanf("%d",&n);
s=0;

for(i=1;i<=n;i++){
	s=s+i;
}
printf("the sum is:%d",s);
}
