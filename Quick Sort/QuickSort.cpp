//A program to sort numbers in ascending order using quick sort algorithm

#include<iostream>

using namespace std;

//Function Prototypes
void accept(int*, int);
void display(int*, int);
void swap(int*, int*);
void Quick_Sort(int*, int, int);


int main()
{
    int *a, n;
 
    cout<< "\t\t\t\t Quick Sort \n" ;
       
    cout<< "\n How many values do you want to sort ? " ;
    cin >> n;
   
    a = new int[n];   //allocating memory
   
    if (a == NULL)
      cout <<  "Sorry, not enough memory.";
    else
    {
      cout << "\n\n Now, Enter the Array Elements :  ";
      accept(a, n);
   
      cout << "\n\nThe Array Status Before Sorting : \n";
      display(a,n);

      Quick_Sort(a,0,n-1);

      cout << "\n\n The Array Status After Sorting : \n";
      display(a,n);
      
      delete[]a;   //releasing the allocated memory
    }
    
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
