#include<iostream>
using namespace std;
int main()
{
	int n,i,m=0,flag=0;
	cout<<"ENTER THE NUMBER TO CHECK PRIME:";
	cin>>n;
	m=n/2;
	for(i=2;i<=m;i++)
	{
		if(n%i==0)
		{
		 cout<<"NUMBEER IS NOT PRIME."<<endl;
         flag=1;
         break;
		}
	}
	if(flag==0)
	  cout<< "NUMBER IS PRIME."<<endl;
	  return 0;
}
