# include <stdio.h>
void main()
{
    int arr1[3][3],i,j;


    printf("Input elements in the matrix :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("element - [%d],[%d] :",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("\nThe matrix is : \n");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
            printf("%d\t",arr1[i][j]);
    }
    printf("\n\n");
{
    int i,j,rows,columns,a[10][10], Sum = 0;
    printf("\n Enter number of rows and columns :");
    scanf("%d %d", &i, &j);

    printf("\n Enter the matrix of rows and columns :");
    for(rows = 0; rows<i; rows++)
    {
        for(columns = 0; columns<j;columns++)
        {
            scanf("%d",&a[rows][columns]);
        }
    }

for(rows = 0; rows<i; rows++)

{
    Sum = Sum + a[rows][rows];
}
printf("\n The Sum of diagonal elements of a matrix = %d",Sum);
return 0;
}

}

