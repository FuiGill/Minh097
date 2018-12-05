#include <iostream>
using namespace std;
class serial
{
	public:
	static int serialnumber;
	serial();
	void count();
};
serial::serial()
{
	serialnumber=1;
}
void count()
{
	static int serialnumber = 0;
    serialnumber += 1;
    cout<<"current value of num: "<<serialnumber;
}
int main()
{
	serial s1,s2,s3;
	count();count();count();
	return 1;
}
