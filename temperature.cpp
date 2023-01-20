#include <iostream> 
using namespace std;

int main()
{

double temperature;
char unit = 'a';
cout << "Please enter a temperature and what to convert it too (c = Celsius) & (f = Fahrenheit) \n";
cin >> temperature >> unit;

if (unit == 'c')
{
	cout << temperature << " F is " << (((temperature - 32) * 5) / 9) << " Celsius. \n";
}

else if (unit == 'f')
{
	cout << temperature << " C is " << ((temperature * 1.8) + 32) << " Fahrenheit. \n";
}

else
{
	cout << "Sorry wrong input! \n";
}

return 0;
}
