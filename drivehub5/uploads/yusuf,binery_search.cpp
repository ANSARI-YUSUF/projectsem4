#include<iostream>
using namespace std;

int main ()
{
int size;
int a[4];
//cout<<"enter no of data:";
//cin>>size;

		for(int i=0;i<4;i++)
		{
			cout<<"array:";
			cin>>a[i];
			cout<<endl;
		}
		
		
		for(int i=0;i<4;i++)
		{
			cout<<"array:"<<a[i];
			cout<<"\n";
		}
		
					
			
			
				for(int i=0;i<4;i++)
				{
					for(int j=4 ; i<j ;j--)
						{
							if(a[j]<a[j-1])
								{
									swap(a[j],a[j-1]);
									}
						}
				}
				cout<<"sorted array:\n\n";
			for(int i=0;i<4;i++)
		{
			cout<<"array:"<<a[i];
			cout<<"\n";
		}
		
		//binery serch
		
		int start =0;
		int mid=0;
		int end;
		int len;
		len=sizeof(a)/4;
		end=len;
		int element;
		cout<<"\n\nenter element:";
		cin>>element;
		
		while(start<len)
		{
			mid=(start+end)/2;
			
			if(a[mid]==element)
			{
				cout<<"\n\nelement found at:"<<mid+1<<"position";
				break;
				
			}
			else if(a[mid]>element)
			{
				end=mid-1;
				
			}
					else if(a[mid]<element)
			{
				start=mid+1;
				
			}
		
		}
		if(mid>len)
		{
			cout<<"\nnot found in this array";
		}
		
	return 0;
}
