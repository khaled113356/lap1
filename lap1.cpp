#include <iostream>
using namespace std;
void k()
{
 int size;
    cin>>size;
	int *arr=new int[size];
	cout<<"enter the size element: "<<endl;
	
	for(int i=0 ; i<size ; i++)
	{
		arr[i]=i+1;
		cout<<arr[i]<<" ";
	}
	for(int i=0 ; i<size ; i++)
	{
		cout<<arr[i]<<" ";
		
	}
	delete [] arr;	
}
void k1()
{
	int rows,colums;
	cin>>rows>>colums;
	int* arr = new int [rows];
	for(int i=0 ; i<rows ; i++)
	{
		arr[i] = new int [colums];
	}
	
	for(int i=0;i<rows;i++)
	{
		for(int j=0 ; j<colums;j++)
		{
			arr[i][j]=10;
			cout<<arr[i][j]<<" " ;
		}
	}
	for( int i=0; i<rows;i++)
	{
		delete []arr[i];
	}
	delete []arr;
}
int main()
{
   k();
   k1();
	return 0;
}
