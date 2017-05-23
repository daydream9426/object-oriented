#include<iostream>
#include <stdlib.h> 
#include <ctime>
#include<stack>
#include"operation.h"

void scan()//�ú����������û���������ȡ��������
{
	cout<<"������Ŀ������"<<endl;
	cout<< "��e����ֹ����"<<endl; 
 } 
 
 
char randomNumber()//���������������
	{
		return rand() % 10+48;
	}
    char randomOperation()//����������������
	{
		int ope;
			ope=rand() % 3;
			if(ope==0)
			{
				return '+';
			}
			else if(ope==1)
			{
				return '-';
			}
			else if(ope==2)
			{
				return '*';
			}
			else if(ope==3)
			{
				return '/';
			}	
	} 
	
	
	int com(int a,int b)//������󹫱�������Լ�� 
	{
		return a==0?b:com(b%a,a);
	}
	
	
	int calculateResult(char *a)//���ڼ������ɵ�����ʽ�Ľ��
	{
		int up=0,down=1,i,count=0,left,right;

		char bolan[30];
		stack<int>s1;
		stack<char>line;
		for(i=0;i<7;i++)
		{
			if(a[i]>='0'&&a[i]<='9')
			{
				bolan[count]=a[i];
				count++;
			}
			else if(a[i]=='+'||a[i]=='-')
			{
				if(line.empty()==true)
				line.push(a[i]);
				else
				{
					while(line.empty()==false)
					{
						bolan[count]=line.top();
						count++;
						line.pop(); 
					}
					line.push(a[i]);
				}
			}
			else if(a[i]=='*'||a[i]=='/')
			{
				if(line.empty()==true)
				line.push(a[i]);
				else
				{
					while(line.empty()==false&&(line.top()=='/'||line.top()=='*'))
					{
						bolan[count]=line.top();
						count++;
						line.pop(); 
					}
					line.push(a[i]);
				}
			}
		}
		while(line.empty()==false)
		{
			bolan[count]=line.top();
			count++;
			line.pop(); 
		}//�����沨�����ʽ 
		
		
		int l,r;

		for(i=0;i<7;i++)
		{
			if(bolan[i]>='0'&&bolan[i]<='9')
			{
				s1.push(bolan[i]-'0');
			}
			else 
			{
				r=s1.top();
				s1.pop();
				l=s1.top();
				s1.pop();
				if(bolan[i]=='+')
				s1.push(l+r);
				else if(bolan[i]=='-')
				s1.push(l-r);
				else if(bolan[i]=='*')
				s1.push(l*r);
			}
		}
		return s1.top();
	}
	
	
	char * generateExpression()//������������ʽ
	{
		int answer,i;
			char expression[7];
			for(i=0;i<7;i++)
			{
				if(i%2==0)
				{
					expression[i]=randomNumber();
				}
				else
				{
					expression[i]=randomOperation();
				}
				cout<<expression[i];
			}	
			cout<<"=?"	;	
		return expression ;
	}
   

	void print(int s,int c,int w)//��ͳ�ƽ��������û�
    {
    	cout<<"----------------------------------------------"<<endl;
    	cout<<"������" <<s<<endl;
		cout<<"��ȷ������"<<c<<endl;
		cout<<"����������"<<w<<endl; 
	}
	
	
	void writeFile_que(char *s, char * q, int correctans, int userans)
	{
		ofstream outfile;
   	 	outfile.open(s,ios::app);
  	  	outfile<< "��Ŀ��" ;
  	  	for(int i=0;i<7;i++)
  	  	outfile<<q[i];
  	  	outfile<<endl;
  	 	outfile<< "��ȷ�𰸣�" << correctans << endl;
  		outfile<< "�û��𰸣�" << userans << endl<<endl;
  		outfile.close();
	}

	void writeFile_acc(char *s,int quesnum,int correctnum,int wrongnum)
	{
		ofstream outfile;
    	outfile.open(s,ios::app);
    	outfile<<"------------------------------"<<endl;
    	outfile<<"����: "<<quesnum<<endl;
   	 	outfile<<"��ȷ��"<<correctnum<<endl;
   	 	outfile<<"����"<< wrongnum<<endl;
   	 	outfile.close();
	}

	int readFile(char * s)
	{
		fstream infile;
    	infile.open(s,ios::in);
    	int num;
    	infile>>num;
    	infile.close();
    	return num;
	}

