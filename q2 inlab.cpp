#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int size=0,temp=0;
	cout<<"enter size of array : ";
	cin>>size;
	int *p = new int[size];
	cout<<"enter numbers of array : \n";
	for(int i=0;i<size;i++)
		cin>>p[i];
	for(int i=0;i<size;i++)
	{
	  for(int j=i+1;j<size;j++)
	  {
		if(p[i]>p[j])
		{
			temp = p[j];
			p[j] = p[i];
			p[i] = temp;
		}
	  }
	}
	for(int i=0;i<size;i++)
		cout<<p[i];
	
	_getch();
}



