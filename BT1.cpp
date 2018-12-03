#include<iostream>
using namespace std;
class time
{
public:
	int hours,minutes,seconds;
	time();
	void nhap();
	void xuat();
};
time::time()
{
	hours=0;
	minutes=0;
	seconds=0;
}
void time::nhap()
{
	do
	{
	cout<<"Nhap thoi gian :";
	cin>>hours;cin>>minutes;cin>>seconds;
	}
	while((hours>=12)||(minutes>=60)||(seconds>=60));
}
void time::xuat()
{
	cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
}
int main()
{
	time t1,t2,t3;
	t1.nhap();
	cout<<"thoi gian 1 ";
	t1.xuat();
	t2.nhap();
	cout<<"thoi gian 2 ";
	t2.xuat();
	t3.seconds=t1.seconds+t2.seconds;
	if (t3.seconds>60)
	{
		t3.seconds=t3.seconds-60;
		t3.minutes=t1.minutes+t2.minutes+1;
	}
	else t3.minutes=t1.minutes+t2.minutes;
	if (t3.minutes>60)
	{
		t3.minutes=t3.minutes-60;
		t3.hours=t1.hours+t2.hours+1;
	}
	else t3.hours=t1.hours+t2.hours;
	if (t3.hours>12)
	{
		t3.hours=t3.hours-12;
	}
	cout<<"thoi gian 3 ";
	t3.xuat();
	return 0;
}
