#include<iostream>
#include<math.h>
using namespace std; 
int main()
{
	int a=0,b=0;
	cin>>a;
	cin>>b;
	int sum;
	sum=a+b;	
	if(sum<0)
	cout<<"-";
	sum=abs(sum);
	int mil,tho;
	if(sum>=1000000||sum<=-1000000)
	{
		mil=sum/1000000;
		int sum1=sum-mil*1000000;
		tho=sum1/1000;
		sum=sum%1000;
		cout<<mil;
		cout<<",";
		if(tho>=10&&tho<100)
		cout<<"0";
		if(tho<10)
		cout<<"00";
		cout<<tho;
		cout<<",";
		if(sum>=10&&sum<100)
		cout<<"0";
		if(sum<10)
		cout<<"00";
		cout<<sum;
	}
	else if(sum>=1000||sum<=-1000)
	{
		mil=sum/1000000;
		int sum2=sum-mil*1000000;
		tho=sum2/1000;
		sum=sum%1000;
		cout<<tho;
		cout<<",";
		if(sum>=10&&sum<100)
		cout<<"0";
		if(sum<10)
		cout<<"00";
		cout<<sum;
	}
	else
	{
		cout<<sum;
	 } 
	 return 0;
	
}
