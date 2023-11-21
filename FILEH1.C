//reading character from file
#include<stdio.h>
#include<conio.h>
void main()
{
	int k;
	FILE *fptr;
	clrscr();
	fptr=fopen("abc.dat","r");
	if(fptr==NULL)
	{
		printf("File cant be opened");
		exit(1);
	}
	k=getw(fptr);
	printf("Number is %d",k);
	fclose(fptr);
}