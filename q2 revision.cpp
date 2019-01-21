#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
	int num=0,x[10],i=0,count=0,ans=0;
	ifstream fin("C:\\Users\\Lab\\Desktop\\data.txt");
	while(!fin.eof())
	{
		fin>>x[i];
		i++;
		count = i;
	}
		num = x[0];
		int m=1;
		for(int k=0;k<num;k++)
		{
			ans = pow(x[0+m],x[1+m]);
			cout<<ans<<endl;
				m=m+2;
		}
		getch();
}
