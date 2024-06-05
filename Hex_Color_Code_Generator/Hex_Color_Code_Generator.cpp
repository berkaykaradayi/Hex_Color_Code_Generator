#include <iostream>
#include <string>
#include <cstring>

#define bosluk endl

using namespace std;


void hex_code(int red, int green, int blue);

int main()
{
	int r, g, b;
	cout << "Please enter 3 integer: ";
	cin >> r;
	cin >> g;
	cin >> b;

	hex_code(r,g,b);


	return 0;
}

void hex_code(int red, int green, int blue)
{
	const int numbers[10] = { 0,1,2,3,4,5,6,7,8,9 };
	const char alhpa[6] = {'a','b','c','d','e','f'};
	int i = 0;
	int div[20], reminder[20];

	/*while (div[i] != 0) 
	{
		div[i] = red / 16;
		reminder[i]=red % 16;
		i++;
		
	}*/
		

	 

	cout<<
}