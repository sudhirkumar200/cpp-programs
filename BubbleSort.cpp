#include<iostream>
#include<stdlib.h>
using namespace::std;
const int size=40;
int array[size],n;
void bubble_sort()
{    
    int t;
    for (int i=n-1;i>0;i--)
     {
		for(int j=0;j<i;j++)
			{
				if(array[j]<array[j+1])
					{
						t=array[j];
						array[j]=array[j+1];
						array[j+1]=t;
					}
			}
	 }

}
int main()
{
	system("cls");
	cout<<"A program to Sort a 1-D array in Descending order\n";
	cout<<"Enter number of elements of the array(max 40):\t";
	cin>>n;
	cout<<"Enter Array Elements:\n";
	for(int i=0;i<n;i++)
    cin>>array[i];
    bubble_sort();
    cout<<"Sorted array:\n";
    for(int j=0;j<n;j++)
    cout<<array[j]<<" ";
    system("PAUSE");
    return 0;
}

