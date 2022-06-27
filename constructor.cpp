#include<iostream>
using namespace std;

class demo
{
	public:
		int x,y;
		
		demo()
		{
			cout<<" Inside default constructor \n ";
			x = 10;
			y = 20;
		}
		
		~demo()
		{
			cout<<" Inside default destructor \n ";
		}
};

int main()
{
	demo obj;
	
	cout<<" Inside main function \n ";
	cout<<obj.x<< "\n";
	cout<<obj.y<< "\n";
	
	return 0;
}