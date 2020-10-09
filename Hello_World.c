#include<stdio.h>

int main(){

printf("Heloo World");

char hungry_flag;
printf("Are you hungry");
scanf("%c",&hungry_flag);

if(hungry_flag=='Y'){
	prinf("eat some food");
}
else{
	printf("Chill out");
}

return 0;
}