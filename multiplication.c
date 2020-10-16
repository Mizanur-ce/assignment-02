//multiplication of two matrices
#include<stdio.h>
int main()
{
    int M[8][8],N[8][8],P[8][8],r1,r2,c1,c2,i,j,k;
    printf("Enter the number of rows and columns for matrix M:");
    scanf("%d %d",&r1,&c1);
    printf("Enter the value of M matrix:\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("M[%d][%d]=",i,j);
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
    printf("\nEnter the value of N matrix:\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("N[%d][%d]=",i,j);
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
    printf("\n\nMultiplication two matrices result(M*N):\n\n");
    if(r2==c1)
    {
        for(i=0; i<r1; i++)
        {

            for(j=0; j<c2; j++)
            {
                P[i][j]=0;
                for(k=0; k<c1; k++)
                {
                    P[i][j]=P[i][j]+(M[i][k]*N[k][j]);
                }
            }

        }

        for(i=0; i<r1; i++)
        {
            for(j=0; j<c2; j++)
            {
                printf("%3d ",P[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("\n\"The rules of multiplication is break!!!!Please correct in your input.\"\n\n\n");
    }

    return 0;
}

