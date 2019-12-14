// Insertion sort for sorting numbers in Ascendig order with various user-defined functions

#include <iostream>


using namespace std;

//Function Prototypes
void accept ( int* , int);
void display ( int* , int );
void insertionSort ( int* , int );               


int main()
{
	   //Variables that will be used
	   int n, *array;

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

           insertionSort(array, n);
           
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
