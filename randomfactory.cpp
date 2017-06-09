#include<iostream>
#include<string>
#include <stdlib.h> 
#include <ctime>
using namespace std;


class random
{
public:
	virtual char getrandom()=0 ;

};

class rnum :public random
{

public:virtual char getrandom()
	{
		int n;
		n = rand() % 10;
		return n + '0';
	}
};

class rope :public random
{

public:virtual char getrandom()
	{
		int n;
		n = rand() % 4;
		switch (n)
		{
		case 0:return '+';
		case 1:return '-';
		case 2:return '*';
		case 3:return '/';
		}
	}
};

class randomfactory
{

	
public:char randomsign(int n)
	{
		char sign;
		random *r=NULL;
		if(n%2==0)
		{
			r=new rnum;
			sign=r->getrandom();
		}
		else
		{
			r=new rope;
			sign=r->getrandom();
		}
		return sign;
		
	}
	

};

int main()
{
	for(int i=0;i<7;i++)
	{
		randomfactory r;
		cout<<r.randomsign(i);
	}
	return 0;
}
