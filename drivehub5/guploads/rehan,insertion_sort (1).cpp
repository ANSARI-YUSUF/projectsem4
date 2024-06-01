#include<iostream>
using namespace std;
int main()
{
	int arr[4] = {5,2,7,4};
	for(int i=0;i<4;i++)
	{
		cout<<arr[i]<<endl;
	}
	cout<<endl<<"_____________"<<endl;
	for(int i=0;i<4;i++)
	{
		int temp = arr[i];
		int j = i - 1;
		while(temp < arr[j] && j >= 0)
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
	}
	for(int i=0;i<4;i++)
	{
		cout<<endl<<arr[i]<<endl;
	}
	
}
