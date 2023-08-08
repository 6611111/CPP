/*#include<iostream>
using namespace std;
int main()
{
	int a,n;
	//cin>>n; //taking input value
	//cin>>a>>n;  // multiple values taking
	//cout<<n;     // printing the value
	//cout<<a<<" "<<n;   // printing multiple value
	for(int i=0;i<10;i++)
	{
		cout<<"hai"<<endl;
	}
	return 0;
}*/
#include<iostream>
using namespace std;
int binary(int n)
{
	int r;
	while(n!=0)
	{
		r=n%10;
		if(r!=1 && r!=0)
		{
			return 1;
		}
		n=n/10;
	}
}
int main()
{
	int n,r;
	cin>>n;
	r=binary(n);
	if(r==1)
	{
		cout<<" not Binary Number";
	}
	else
	{
		cout<<"Binary Number";
	}
}
