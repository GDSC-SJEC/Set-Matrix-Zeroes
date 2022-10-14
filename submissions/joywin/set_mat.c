/*Written by Joywin*/
#include<stdio.h>
#include<stdlib.h>
main()
{
    int a[100][100],m,n,i,j,row[100],col[100];
    printf("Enter the number of rows and columns:");
    scanf("%d%d",&m,&n);
    if(m<1||n<1)
    exit(0);
    printf("Enter the elements of a %dx%d matrix\n",m,n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("ORIGINAL MATRIX\n");    
    for(i=0;i<m;i++) 
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
            row[i]=0;col[j]=0;
        }
        printf("\n");
    }  
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==0)
            {
                row[i]=1;
                col[j]=1;
            }
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
                if(row[i]==1 || col[j]==1)
	                    a[i][j]=0;
        }
    }
    printf("ALTERED MATRIX\n");    
    for(i=0;i<m;i++) 
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}