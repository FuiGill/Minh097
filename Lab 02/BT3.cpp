#include<iostream>
using namespace std;
double kq(float a,char b,float c)
{
	float rs=0.0;
	if (b=='+')
	{
		rs=(a+c);
	}
	if (b=='-')
	{
		rs=(a-c);
	}
	if (b=='*')
	{
		rs=(a*c);
	}
	if (b=='/')
	{
		rs=(a/c);
	}
	return rs;
}
int main()
{
	float a,c;
	char b,d;
	do
	{
		cout<<"Enter first number,operator,second number :";
		cin>>a;cin>>b;cin>>c;
		cout<<"Answer ="<<kq(a,b,c)<<endl;
		cout<<"Do another(y/n)?";
		cin>>d;
	}
	while(d=='y');
	return 0;
}
