#include<iostream> 
#include"circle.h"
using namespace std;
int main()
{
	double r;
	cin>>r;
	cir circle;
	circle.calculate(r);
	
	circle.print();
	
	return 0;
}
