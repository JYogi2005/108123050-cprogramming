/*multiplication table of given n*/
#include <stdio.h>
int main()
{
int n,i,s;
printf("enter n");
scanf("%d",&n);
for(i=1;i<=10;i++){
	s=n*i;
	printf("%d * %d = %d\n",n,i,s);
}
}
