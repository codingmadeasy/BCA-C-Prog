//Print following pattern
/*
1 1 1 1 1
2 2 2 2
3 2 2
4 4
5
.
.
.
*/
#include<stdio.h>
void main()
{
    int i,j,n;
    clrscr();
    printf("Enter Number of Rows\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
	for(j=i;j<=n;j++)
	{
	    printf("%d\t",i);
	}
	printf("\n");
    }
    getch();
}