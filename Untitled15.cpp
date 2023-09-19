/* percentage and grade*/
#include <stdio.h>
int main()
{
float a,b,c,d,e,f,g;
printf("enter 5 subject marks");

scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
f=a+b+c+d+e;
g=f/5;
if(g>=90){
	printf("grade a");
}
else if(g>=80 && g<90){
    printf("grade b");
}
else if(g>=70 && g<80){
    printf("grade c");
}
else{
	printf("low score");
	
}
return 0;

}



