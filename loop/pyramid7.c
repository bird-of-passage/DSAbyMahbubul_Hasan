#include<stdio.h>

int main()
{
    int i,j,rows;
    printf("Enter number of rows: ");
    scanf("%d",&rows);

    for(i=1; i<=rows; i++){
        for(j=1; j<=i; j++){
            printf("%d",i);
        }
        printf("\n");
    }

    return 0;
}

/*
Enter number of rows: 5
1
22
333
4444
55555
*/
