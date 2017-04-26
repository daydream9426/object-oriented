#include<iostream>
#include"circle.h"
using namespace std;

void cir::print()//打印面积值 
{
	cout<<sum<<endl;
}

void cir::calculate(double r)//计算面积 
{
		sum=r*r*3.14;
}

