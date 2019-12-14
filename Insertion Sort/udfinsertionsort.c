// Insertion sort for sorting numbers in Ascendig order with various user-defined functions

#include <stdio.h>
#include<stdlib.h>

//Function Prototypes
void accept ( int* , int);
void display ( int* , int );
void insertionSort ( int* , int );               


int main()
{
   int *a, n;

   printf(" Enter the Size of The Array : ");
   scanf("%d",&n);
   
   a = (int*)malloc(n * sizeof(int)); 
   
   if (a == NULL)
      printf( "Sorry, not enough memory.");
   else
    {
      printf("\n\n Now, Enter the Array Elements :  ");
      accept(a, n);

      system ("cls");
   
      printf("\n\nThe Array Status Before Sorting : \n");
      display(a,n);

      insertionSort(a,n);

      printf("\n\n The Array Status After Sorting : \n");
      display(a,n);
    }
    
           
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
	
void display(int *a, int n)
{
   int i;

   for(i=0;i<n;i++)
   {
	if(i<(n-2))
	printf("%d , ",a[i]);
	else if (i<(n-1))
	printf("%d and ",a[i]);
	else if(i==(n-1))
	printf("%d .",a[i]);
   }
}

void insertionSort ( int *a , int n)
{
    int i, j, t; 
   
    for (i = 1; i < n; i++) 
    {
     	t = a[i];
      	for (j = i - 1; ( t < a[j] ) && ( j >= 0 ) ; j--) // for comparisons
        {
           a[j+1] = a[j]; 	  	 
        }
        a[j+1] = t;
    }
}
