//Print following pattern
/*
1
2 2
3 3 3
.
.
.
n n n . . . n
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
	for(j=1;j<=i;j++)
	{
	    printf("%d\t",i);
	}
	printf("\n");
    }
    getch();
}