/*triangle type*/
#include <stdio.h>
int main()
{
int a,b,c;
printf("enter the sides");
scanf("%d%d%d",&a,&b,&c);
if(a=b=c){
	printf("equilateral");
}
else if(a=b){
	if(b!=c){
	
	printf("isosceles");}
	
}
else if(b=c){
	if(a!=b){
	printf("isoscelws");
	
}}
else if(a=c){
	if(b!=c){
	

	printf("isosceles");}}

else{
	printf("scalene");
	
	
}
return 0;

}

