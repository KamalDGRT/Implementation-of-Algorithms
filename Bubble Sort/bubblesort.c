// bubble sort for sorting numbers without a user-defined function

#include <stdio.h>
#include <stdlib.h>

int main()
{
	//Variables that will be used
	int n, i, j, t, *array;
	char choice;

       printf( "\t\t\t\t Bubble Sort \n");
       
       printf( "\n How many values do you want to sort ? ");
       scanf("%d",&n);

       array = (int*)malloc(n * sizeof(int)); 

       if (array == NULL)
       	 printf( "Sorry, not enough memory.");
       else
       {
       	   printf( "\n Now, enter the values : \n");

       	   for (i = 0; i < n; i++)
       	   {
       	   	  printf( "\n Enter value %d : ", (i+1));
       	   	  scanf("%d",&array[i]);
       	   }

           //bubble sort logic
           for (i = 0; i < ( n - 1 ); i++) // for passes
           {
           	  for (j = 0; j < (n - i - 1); j++) // for comparisons
           	  {
           	  	 if (array[j] > array[j+1])
           	  	 {
           	  	 	t = array[j];
           	  	 	array[j] = array[j+1];
           	  	 	array[j+1] = t;
           	  	 }
           	  }
           }


           printf( "\n The list of numbers after sorting : \n");

           for (i = 0; i < n; i++)
           {
           	 printf("%d  ",array[i]);           
           }

       }//else block
           
  return 0;
}
