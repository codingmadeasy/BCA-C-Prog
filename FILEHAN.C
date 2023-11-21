#include<stdio.h>
#include<conio.h>
void main()
{
	int k;
	FILE *fptr;
	clrscr();
	fptr=fopen("abc.dat","w");
	if(fptr==NULL)
	{
		printf("File cant be opened");
		exit(1);
	}
	printf("Enter a integer number");
	scanf("%d",&k);
	putw(k,fptr);
	fclose(fptr);
}