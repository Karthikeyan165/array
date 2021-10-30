#include<stdio.h>
#include<conio.h>

void main()
{

   int i, j, matrix[10][10], row, col;
   int sum = 0;


   printf("\nEnter the number of Rows : ");
   scanf("%d", &row);
 
   printf("\nEnter the number of Columns : ");
   scanf("%d", &col);
 
   
   for (i = 0; i < row; i++) 
   {
      for (j = 0; j < col; j++) 
	  {
         printf("\nEnter the Element a[%d][%d] : ", i, j);
         scanf("%d", &matrix[i][j]);
      }
   }
   printf("The matrix is:\n");
   
   for(i=0;i<row;i++)
   {
   	  for(j=0;j<col;j++)
   	  {
   		printf("%d\t",matrix[i][j]);
	  } 
	  printf("\n");
   }
   
  for (i = 0; i < row; i++) 
  {
   for (j = 0; j < col; j++) 
    {
     if (i == j)
     sum = sum + matrix[i][j];
    }
   }
   printf("\nSum of Diagonal Elements in Matrix is: %d", sum);
}