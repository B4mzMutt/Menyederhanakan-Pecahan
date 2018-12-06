#include <stdio.h>
#include <iostream>

void pecahan();
int main(){
	pecahan();
} 
    void pecahan(){
	int a,b,l,t;
	printf("Masukan pembilang : ");
	scanf("%d",&a);
	printf("Masukan penyebut : ");
	scanf("%d",&b);
	t=a/b;
	l=a%b;
	if(a%b==0)
		printf("Bilangan (%d/%d)\n di sederhanakan menjadi %d",a,b,t);
	else if(a%b!=0)
		printf("Bilangan (%d/%d)\n di sederhanakan menjadi (%d %d/%d)",a,b,t,l,b);

	getchar();

}