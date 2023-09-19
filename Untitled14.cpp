/*electricity bill*/
#include <stdio.h>
int main()
{
int a=40;
int b=80;
int c=100;
int d=5;
int e;
int n;
int T;
printf("no of units:");
scanf("%d",&n);
if(n<=50){
	T=5*n +40;
	printf("%d",T);
}
else if(n>50 && n<=100){
	T=5*n +80;
	printf("%d",T);
	
}
else{
	T=5*n +100;
	printf("%d",T);
}
return 0;

}
