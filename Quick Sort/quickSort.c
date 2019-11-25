#include<stdio.h>
#include<stdlib.h>

//Function Prototypes
void accept(int*, int);
void display(int*, int);
void swap(int*, int*);
void Quick_Sort(int*, int, int);


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

      Quick_Sort(a,0,n-1);

      printf("\n\n The Array Status After Sorting : \n");
      display(a,n);
    }
    
   return 0;
}

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

void swap(int*a,int*b)
{
   int t;
   t=*a;
   *a=*b;
   *b=t;
}


void Quick_Sort(int *a,int first, int last)
{

    int i = first;
    int j = last;
    int pivot = (i + j) / 2;    //index of mid element   

    while (i <= j)
    {
        while (a[i] < a[pivot])
            i++;
        while (a[j] > a[pivot])
            j--;
            
        if (i <= j)
          swap (&a[i++], &a[j--]);        
    }
    
	if (j > first)
        Quick_Sort(a, first, j);
    
	if (i < last)
        Quick_Sort(a, i, last);
        
}
