﻿#include <iostream>
#include <string>
#include <cstring>

#define bosluk endl

using namespace std;
const int numbers[10] = { 0,1,2,3,4,5,6,7,8,9 };
const char alhpa[6] = {'a','b','c','d','e','f'};

void convert(int red, int green, int blue);
void generate_hexcode(int division[],int remain[]);

int main()
{
	int r, g, b;
	cout << "Please enter 3 integer: ";
	cin >> r;
	cin >> g;
	cin >> b;

	convert(r,g,b);


	return 0;
}

void convert(int red, int green, int blue)
{
	
	int j = 0;
	int div[20], remainder[20];

	int RGB[3] = { red,green,blue }; //to store our passed integer values.
	int temp_div,temp_rem;

	for (int i = 0; i < 3; i++)
	{  
		cout <<"---------------------------------" << " for i= " << i <<" And its value inside: "<<RGB[i] << "---------------------------------"<<bosluk;
		do
		{
			
			

			temp_div = RGB[i]/16; //to get division op.
				temp_rem = RGB[i] % 16;
			div[j] = temp_div;  
			    remainder[j] = temp_rem;  // to get reminder op.
			RGB[i]=temp_div;

			
			

			//temp_div = RGB[i] / 16;
			//div[j] = temp_div;   //to get division op.
			//RGB[i] = temp_div;

			//temp_rem = RGB[i] % 16;
			//reminder[j] = temp_rem;  // to get reminder op.
			//RGB[i] = temp_rem;


		
			cout << "div[" << j << "]: " <<div[j]<<" ";
			cout << "rem[" << j << "]: " << remainder[j] << " "<<bosluk;
			cout << bosluk << "----------------------------------------" << bosluk;
		} while (div[j] != 0 && div[j++]!= '/0');
	   
		cout <<bosluk<< "----------------------------------------"<<bosluk;
	}	
	
	generate_hexcode(div, remainder);



}

void generate_hexcode(int division[], int remain[]) //  This function will generate hexa color code,
{
	



}