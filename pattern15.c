/*
Accept number of rows and number of columns from user and display below pattern.
Input :  iRow=5  ,iCol=5

Output:  1   2   3   4  
         2   3   4   5
         3   4   5   6
         4   5   6   7
*/

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
  int i=0,j=0;
  
  if(iRow < 0)
    {
        iRow=-iRow;
    }
  if(iCol < 0)
    {
       iCol=-iCol;
    }
         
  for(i=1;i<=iRow;i++)
  {
     for(j=1;j<=iRow;j++)
     {
        printf("%d\t",i+j-1);
     }
     printf("\n");
  }
}
////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter number of rows and Columns");
    scanf("%d",&iValue1);

    printf("Enter number of rows and Columns");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);
    
    return 0;
}
