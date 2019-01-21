#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int x=0,y=0,z=0;
	int *p,*q,*r;
	cout<<" x = ";
	cin>>x;
	cout<<" y = ";
	cin>>y;
	p = &x;
	q = &y;
cout<<"x = "<<x<<endl;
cout<<"y = "<<y<<endl;
cout<<"p = "<<p<<endl;
cout<<"q = "<<q<<endl;
cout<<"*p = "<<*p<<endl;
cout<<"*q = "<<*q<<endl;
cout <<"\n SWAPPING OF NUMBERS \n ";
     z = x;
	 x = y;
	 y = z;
cout<<"x = "<<x<<endl;
cout<<"y = "<<y<<endl;
cout<<"p = "<<p<<endl;
cout<<"q = "<<q<<endl;
cout<<"*p = "<<*p<<endl;
cout<<"*q = "<<*q<<endl;
cout <<"\n SWAPPING OF POINTERS \n ";
	r = p;
	p = q;
	p = r;
cout<<"x = "<<x<<endl;
cout<<"y = "<<y<<endl;
cout<<"p = "<<p<<endl;
cout<<"q = "<<q<<endl;
cout<<"*p = "<<*p<<endl;
cout<<"*q = "<<*q<<endl;
getch ();
}


