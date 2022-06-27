#include<iostream>

using namespace std;

class Demo
{
	public:
	int x;
	int y;
	
	Demo(int i = 0, int j = 0)
	{
		x = i;
		y = j;
		
	}
};

Demo operator ++(Demo &op)
{
	cout<<"Inside first\n";
	return op;
}

Demo operator ++(Demo &op, int)
{
	cout<<"Inside second\n";
	return op;
}

int main()
{
	Demo obj1(11, 20);
	Demo obj2(11, 20);
	
	Demo robj1(0, 0);
	Demo robj2(0, 0);
	
	robj1 = ++obj1;
	robj2 = obj2++;
	
	return 0;
}
	