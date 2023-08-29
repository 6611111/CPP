#include<bits/stdc++.h>
using namespace std;
class Names{
    public:
    string name;
    void display()
    	{
    		cout<<name<<endl;
		}
};
int main()
{
	Names *anu= new Names();
    anu->name="Anusha";	
	anu->display();
	//Anu.name="Anusha";
	//Anu.display();
}
