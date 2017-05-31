
#include<iostream>
#include<string>
class input
{

private:

	string userans;//用户输入的答案 

	int quesnum;//题目数量 

public:

	void setuserans(int a);

	void setuserans(string a);

	void setquesnum(int a);

	int getquesnum();

	string getuserans();

};

