#include<bits/stdc++.h>
using namespace std;
int n_digits(int n)
{
	if(n==0){
		return 0;
	}
	return 1+n_digits(n/10);
}
int main()
{
	int r;
	r=n_digits(12345);
	cout<<r;
}
