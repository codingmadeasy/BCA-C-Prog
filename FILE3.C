#include<stdio.h>
void main()
{
	FILE *fptr;
	int k;
	char l;
	double m;
	clrscr();
	fptr=fopen("one.dat","r");
	if(fptr==NULL)
	{
		printf("Cant open file");
		exit(1);
	}
	fscanf(fptr,"%c%d%lf",&l,&k,&m);
	printf("Character is %c\n",l);
	printf("Integer is %d\n",k);
	printf("Double is %lf",m);
	fclose(fptr);
}