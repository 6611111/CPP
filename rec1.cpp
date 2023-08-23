#include<iostream>
using namespace std;
void numbers(int n)
{
	if(n>1)
	{
	   numbers(n-1);	
	}
	cout<<n<<" ";

}
int main()
{
	int res;
	numbers(10);
}
