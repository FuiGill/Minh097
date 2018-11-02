#include<iostream>
using namespace std;
double sum(float amount,float n, float t);
int main()
{
	float amount,n,t;
	cout<<"Enter initial amount :";
	cin>>amount;
	cout<<"Enter number of year :";
	cin>>n;
	cout<<"Enter interest rate :";
	cin>>t;
	cout<<"At the end of "<<n<<" years,you will have "<<sum(amount,n,t)<<" dollars";
	return 0;
}
double sum(float amount,float n, float t)
{
	for(int i=1;i<=n;i++)
	{
		amount=amount+(amount*(t/100));
	}
	return amount;
}
