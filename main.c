/*AIM  : TO DISPLAY THE MATIX IN R*C TYPE AND DISPLAY THE SUM OF  EACH COLUMNS*/



#include <stdio.h>
int main() {
  int a[10][10],r, c,sum,i,j;    /* The allocated size for the array of [i][j]is [10][10]*/
  printf("Enter rows and columns: ");
  scanf("%d %d", &r, &c);

// asssigning elements to the matrix


  printf("\nEnter matrix elements:\n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {    /*we are using incremenrt operator &looping method to build an matrix using the array */
    printf("Enter element a%d%d: ", i + 1, j + 1);   /* To display it in as each element  in array we are using i+1,j+1 */
    scanf("%d", &a[i][j]);
  }

  // printing the matrix a[][]
  
  
  
  printf("\nEntered matrix: \n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {      /*The displayed matix will be in r*c matrix type based on the size which we are allocating*/
    printf("%d  ", a[i][j]);
    if (j == c - 1)
    printf("\n");
  }
 
        sum = 0;
        for (j = 0; j < c; ++j)
        {
            for (i = 0; i < r; ++i)
            {
                sum = sum + a[i][j];    /*Take the value stored in a[i][j],add 0 to it ,then put the result in sum.*/
            }
 
            printf("Sum of the %d column is = %d\n", j, sum);
            sum = 0;
        }


  return 0;
}


/* INFERENCE : THUS THE MATRIX IS SHOWN IN R*C TYPE AND THUS THE SUM OF EACH C OLUMN IS DERIVED ON OUTPUT*/

