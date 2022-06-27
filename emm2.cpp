#include<iostream>

using namespace std;

int main()
{
	enum Days {Sun, Mon, Tue, Wed, Fri, sat};

	enum Days obj;
	
	obj = Tue;
	
	cout<<obj<<"\n";
	cout<<sizeof(obj)<<"\n";
	
	enum Gender{female = 1, Male= 2};
	
	cout<<"Enter your gender\n";
	cout<<"1:Female\n";
	cout<<"2:Male\n";
	
	cin>>Input;
	
	
	switch(Input)
	{
		case female:
		cout<<"Tax free  limit is 3,000000\n";
		break;
		
		case Male:
		cout<<"Tax free limit is 2,50,000\n";
		break;
		
		defoult:
		cout<<"Invalid gender\n";
		break;
	}
	
	
	return 0;
}