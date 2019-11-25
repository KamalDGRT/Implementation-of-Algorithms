// bubble sort for sorting numbers in Ascendig order with various user-defined functions

#include <iostream>

using namespace std;

//Function Prototypes
void accept ( int* , int);
void display ( int* , int );
void swap(int *a , int *b);
void bubbleSort ( int* , int );               


int main()
{
	   //Variables that will be used
	   int n, i, j, t, *array;

       cout<< "\t\t\t\t Bubble Sort \n" ;
       
       cout<< "\n How many values do you want to sort ? " ;
       cin >> n;

       array = new int[n]; 

       if (array == NULL)
       	 cout<< "Sorry, not enough memory." ;
	   else
       {
       	   cout<< "\n Now, enter the values : \n" ;
           
           accept(array, n);

           bubbleSort(array, n);
           
           cout<< "\n The list of numbers after sorting : \n" ;
           display (array, n);
           
           delete[]array;
       }//else block
           
  return 0;
}

//Function Definitions:
void accept ( int *a , int n )
{
    int i;
    
    for (i = 0; i < n; i++)
      {
       	  cout<< "\n Enter value " << (i + 1) << " : ";
       	  cin >> a[i];
      }
 }

void display ( int *a, int n )
{
   int i;

   for (i = 0; i < n; i++)
     {
         if( i < (n - 2) )     
           	 cout<< a[i] << ", ";
         else if ( i == (n-2) )
             cout << a[i] << " and ";
         else if ( i == (n -1) )
             cout<< a[i] << ". ";
         
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
