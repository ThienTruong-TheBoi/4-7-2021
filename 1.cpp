#include <iostream>
using namespace std;

int main()
{
	int16_t num = 0;
	int  thap = 0, cao = 0;
	cin >> num;
	cao = num / 100;
	thap = num % 100;
	cout << cao << "\n";
	cout << thap << "\n";
	return 0;
}