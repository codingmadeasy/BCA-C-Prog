#include<stdio.h>
struct abc
{
	int a,b;
};
void main()
{
	FILE *fptr;
	struct abc k={10,20};
	clrscr();
	fptr=fopen("one.dat","w");//"w"
	if(fptr==NULL)
	{
		printf("Cant open file");
		exit(1);
	}
	fwrite(&k,sizeof(k),1,fptr);
	fclose(fptr);
}