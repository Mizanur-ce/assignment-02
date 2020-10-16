//Subtraction of two matrices
#include<stdio.h>
int main()
{
    int M[8][8],N[8][8],i,j,r1,r2,c1,c2;
    printf("Enter the number of rows and columns for matrix M:");
    scanf("%d %d",&r1,&c1);
    printf("Enter the value of M matrix:\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("M[%d][%d]=%",i,j);
            scanf("%d",&M[i][j]);
        }
    }
    printf("\n\nMatrix M:\n\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("%3d ",M[i][j]);

        }
        printf("\n");
    }
    printf("\n\nEnter the number of rows and columns for matrix N:");
    scanf("%d %d",&r2,&c2);
    printf("\n\nEnter the value of N matrix:\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("N[%d][%d]=%",i,j);
            scanf("%d",&N[i][j]);
        }
    }
    printf("\n\nMatrix N:\n\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%3d ",N[i][j]);

        }
        printf("\n");
    }
    if(r1==r2&&c1==c2)
    {
        printf("\n\nSubtration two matrices result(M+N):\n\n");
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c1; j++)
            {
                printf("%3d ",(M[i][j]-N[i][j]));
            }
            printf("\n");
        }
    }
    else
    {
        printf("\n\n\"The rules of subtraction is break!!!!\"\n\n\n");
    }

    return 0;
}
