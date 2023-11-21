#include<stdio.h>
struct abc
{
	int a,b;
};
void main()
{
	FILE *fptr;
	struct abc l;
	clrscr();
	fptr=fopen("one.dat","r");
	if(fptr==NULL)
	{
		printf("Cant open file");
		exit(1);
	}
	fread(&l,sizeof(l),1,fptr);
	printf("a = %d\nb = %d",l.a,l.b);
	fclose(fptr);
}