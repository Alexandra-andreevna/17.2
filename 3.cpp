#include <iostream>;
using namespace std;
int main(void)
{
	int a,b,c,i;
	cout<<"Enter sides of the triangle"<<endl;
	cin>>a>>b>>c;
	 if (cin.fail())
     {
		 cin.clear();
     }
	if ((a+b)>c)
	{
		cout<<"yes"<<endl;
		if (a==b && a==c) 
			cout<<"equilateral"<<endl;
		else if (a==c || b==c || a==c) 
			cout<<"isosceles"<<endl;
	}
	else cout<<"no"<<endl;
	cin>>i;
	return 0;
}
