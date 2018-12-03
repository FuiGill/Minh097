#include<iostream>
using namespace std;
class employee
{
	public:
		int ID,times;
		float dev;
		employee();
		void nhap();
		void xuat(); 
};
employee::employee()
{
	ID=0;times=0;dev=3000;
}
void employee::nhap()
{
	cout<<" ID and times :";
	cin>>ID;cin>>times;
}
void employee::xuat()
{
	cout<<"ID :"<<ID <<"  times :"<<times <<"  compensation :"<<dev<<endl; 
}
int main()
{
	employee e1,e2,e3;
	e1.nhap();
	for(int i=1;i<=e1.times;i++)
		e1.dev=e1.dev+(e1.dev*0.055);
	e1.xuat();
	e2.nhap();
	for (int i=1;i<=e2.times;i++)
		e2.dev=e2.dev+(e2.dev*0.055);
	e2.xuat();
	e3.nhap();
	for(int i=1;i<=e3.times;i++)
		e3.dev=e3.dev+(e3.dev*0.055);
	e3.xuat();
	return 0;
}
