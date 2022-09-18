#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],m,n,i,j;
    printf("Enter number of rows and columns: ");
    scanf("%d%d",&m,&n);
    printf("enter elemnets of array: ");
    for(i=0;i<m;++i)
    {
        for ( j = 0; j<n ; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("array before transposing: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    //transposing array//
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            b[j][i]=a[i][j];
        }
    }
   printf("array after transposing");
   for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("\t%d",b[i][j]);
        }
        printf("\n");
    }
   
   
}