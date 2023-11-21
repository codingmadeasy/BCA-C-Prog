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
    int i,j,n,k;
    clrscr();
    printf("Enter Number of Rows\n");
    scanf("%d",&n);
    k=n-1;
    for(i=1;i<=n;i++)
    {
	for(j=i;j<=n-k;j++,k--)
	{
	    printf("%d\t",j);
	}
	printf("\n");
    }
    getch();
}