#include <iostream>

using std::endl; using std::cout; using std::cin;

int main()
{
  double a,x = 0,temp = 0.5;
	cout << "Enter Number :" << endl;
	cin >> a;
	if(a < 0)
	{
	 cout << "Invalid input" << endl;
	 return 0;
	}
	while(temp!= x)
	{
	 x = temp;
   temp = x - ((x*x) - a)/(a*x); 
	 }
   cout <<"Square root is : " <<  temp << endl;
	return 0;
	}
