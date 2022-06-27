#include<iostream>

using namespace std;

class demo
{
	public:
	int x;
	int y;
	
	demo(int a = 10, int b = 20)
	{
		x = a;
		y = b;
		
		//static void gun();
		
	}	
	
	void fun(int no)
	{
		cout<<"Inside fun\n";
	}
	
	
	static void gun (int value)
	{
		cout<<"Inside static gun\n";
		
		
	}
};


int main()
{
	demo::gun(11);
	
	return 0;
}
	
	