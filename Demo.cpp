#include<iostream>

using namespace std;

class Demo
{
	public:
	void sun(int*p)
	{
		cout<<"First Defination"<<"\n";
	}
	
	void sun(float *p)
	{
		cout<<"Second Defination"<<"\n";
	}
	
	void sun(int no)
	{
		cout<<"Third Defination"<<"\n";
	}
};

int main()
{
	int no = 11;
	float f = 3.14;
	
	Demo obj;
	
	obj.sun(no);
	obj.sun(&no);
	obj.sun(&f);
	return 0;
}