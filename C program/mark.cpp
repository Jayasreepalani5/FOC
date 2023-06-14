#include<iostream>
using namespace std;
int main()
{
	int  a,b,c,d,e,sum,avg;
	{
	cout<<"enter the tamil mark"<<endl;
	cin>>a;
	cout<<"enter the english mark"<<endl;
	cin>>b;
	cout<<"enter the maths mark"<<endl;
	cin>>c;
	cout<<"enter the history mark"<<endl;
	cin>>d;
	cout<<"enter the epigraphy mark"<<endl;
	cin>>e;
	}
	sum=a+b+c+d+e;
	cout<<"the total mark:"<<endl<<sum;
	avg=sum/5;	
	cout<<"\n the average of the total mark is:"<<endl<<avg;
}
