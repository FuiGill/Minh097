#include<iostream>
using namespace std;
struct phanSo
{
	float tuSo;
	float mauSo;
};
struct phanSo a,b;
void kq(phanSo a,phanSo b,char c)
{
	if(c=='+')
	{
		cout<<"Answer ="<<(a.tuSo*b.mauSo+a.mauSo*b.tuSo)<<"/"<<(a.mauSo*b.mauSo)<<endl;
	}
	if (c=='-')
	{
		cout<<"Answer ="<<(a.tuSo*b.mauSo-a.mauSo*b.tuSo)<<"/"<<(a.mauSo*b.mauSo)<<endl; 
	}
	if (c=='*')
	{
		cout<<"Answer ="<<(a.tuSo*b.tuSo)<<"/"<<(a.mauSo*b.mauSo)<<endl;
	}
	if (c=='/')
	{
		cout<<"Answer ="<<(a.tuSo*b.mauSo)<<"/"<<(a.mauSo*b.tuSo)<<endl;
	}
}
int main()
{
	char c,d;
	do
	{
		do
		{
			cout<<"phan so a :";cin>>a.tuSo>>a.mauSo;
			cout<<"phan so b :";cin>>b.tuSo>>b.mauSo;
		}
		while (a.mauSo==0 || b.mauSo==0);
		cout<<"So a :"<<a.tuSo<<"/"<<a.mauSo<<endl;
		cout<<"So b :"<<b.tuSo<<"/"<<b.mauSo<<endl;
		cout<<"operator :";
		cin>>c;
		kq(a,b,c);
		cout<<"Do another(y/n)?";
		cin>>d;
	}
	while (d=='y');
	return 0;
}
