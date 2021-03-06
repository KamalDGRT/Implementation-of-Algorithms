// bubble sort for sorting numbers with various user-defined functions

#include <stdio.h>
#include <stdlib.h>

//Function Prototypes
void accept ( int* , int);
void display ( int* , int );
void swap(int *a , int *b);
void bubbleSort ( int* , int );               


int main()
{
	//Variables that will be used
	int n, i, j, t, *array;

       printf( "\t\t\t\t Bubble Sort \n");
       
       printf( "\n How many values do you want to sort ? ");
       scanf("%d",&n);

       array = (int*)malloc(n * sizeof(int)); 

       if (array == NULL)
       	 printf( "Sorry, not enough memory.");
       else
       {
       	   printf( "\n Now, enter the values : \n");
           
           accept(array,n);

           bubbleSort(array,n);
           
           printf( "\n The list of numbers after sorting : \n");
           display (array,n);

       }//else block
           
  return 0;
}

//Function Definitions:
void accept ( int *a , int n )
{
    int i;
    
    for (i = 0; i < n; i++)
      {
       	  printf( "\n Enter value %d : ", (i+1));
       	  scanf("%d",&a[i]);
      }
 }

void display ( int *a, int n )
{
   int i;

   for (i = 0; i < n; i++)
     {
         if( i < (n - 2) )     
           	 printf("%d,  ",a[i]);
         else if ( i == (n-2) )
             printf("%d and  ",a[i]);
         else if ( i == (n -1) )
             printf("%d.  ",a[i]);
         
     }
}


void swap (int *a , int *b )
{
 	 int t = *a;
	 *a = *b;
 	 *b = t;
}

void bubbleSort ( int *a , int n)
{
    int i, j; 
   
    for (i = 0; i < ( n - 1 ); i++) // for passes
     {
      	  for (j = 0; j < (n - i - 1); j++) // for comparisons
        	  {
         	  	 if (a[j] > a[j+1])
                   swap(&a[j], &a[j+1]);
         	  }
     }
}
