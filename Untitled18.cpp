/*to print all even numbers till n*/
#include <stdio.h>
int main()
{
int i,n;
printf("enter n:");
scanf("%d",&n);
for(i=2;i<=n;i+=2){
	printf("%d\n",i);
}
return 0;

}
