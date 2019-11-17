// bubble sort for sorting numbers

#include <iostream>

using namespace std;

int main()
{
	//Variables that will be used
	int n, i, j, t, *array;
	char choice;

	do
	{
       system("cls");
       cout << "\t\t\t\t Bubble Sort \n";
       
       cout << "\n How many values do you want to sort ? ";
       cin >> n;

       array = new int[n];

       if (array == NULL)
       	 cout << "Sorry, not enough memory.";
       else
       {
       	   cout << "\n Now, enter the values : \n";

       	   for (i = 0; i < n; i++)
       	   {
       	   	  cout << "\n Enter value " << (i + 1) <<" : ";
       	   	  cin >> array[i];
       	   }

           
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


           cout << "\n The list of numbers after sorting : \n";

           for (i = 0; i < n; i++)
           {
           	 cout << array[i] << "  ";           
           }

       }

       cout << "\n Do you want to sort another set of numbers? [y/n] : ";
       cin >> choice;
	}while(choice == 'y' or choice == 'Y');

}