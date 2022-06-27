#include<iostream>

using namespace std;

int main()
{
	struct Demo
	{
		int no1;
		int no2;
		
	};

	//struct Demo obj;
	//struct Demo *p = &obj;
	//struct Demo **q = &p;
	
	typedef struct Demo DEMO;
	typedef struct Demo *PDEMO;
	typedef struct Demo **PPDEMO;
	
	DEMO obj;
	PDEMO p = &obj;
	PPDEMO q = &p;
	
	
	return 0;


}