﻿#include <iostream>
#include <string>
#include <cstring>
//#include <new>

#define bosluk endl

const int MAX = 50;

using namespace std;
const int numbers[10] = { 0,1,2,3,4,5,6,7,8,9 };
const char alhpa[6] = {'a','b','c','d','e','f'};

void convert(int red, int green, int blue);
void generate_hexcode(int division[],int remain[], int rm_size);

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
	int div[MAX], remainder[MAX];

	int RGB[3] = { red,green,blue }; //to store our passed integer values.
	int temp_div,temp_rem;

	int s = 0, sayac = 0; int remain_size;
	for (int i = 0; i < 3; i++)
	{  
		cout <<"---------------------------------" << " for i= " << i <<" And its value inside: "<<RGB[i] << "---------------------------------"<<bosluk;
		

		do
		{
			
			

			temp_div = RGB[i]/16; //to get division op.
				temp_rem = RGB[i] % 16;
			div[j] = temp_div;

			  //div[j + 1] = '\0'; //new added

			    remainder[j] = temp_rem;  // to get reminder op.

			  //remainder[j + 1] = '\0'; //new added, to see if it will fix heap corrpt. error.

			RGB[i]=temp_div;


		
			cout << "div[" << j << "]: " <<div[j]<<" ";
			cout << "rem[" << j << "]: " << remainder[j] << " "<<bosluk;
			cout << bosluk << "----------------------------------------" << bosluk;
		} while (div[j++] != 0 );
	     
		
		cout <<bosluk<< "----------------------------------------"<<bosluk;
	}	
	
	  //// -----  >>>>>   remain_size = sizeof(remainder) / sizeof(remainder[0]); // if we do like this, it will return fix sized of array, which is 50;
			
	while (remainder[s] >= 0) //To find array lenght of array
	{
		sayac++;
		s++;
	}
	remain_size = sayac;


	generate_hexcode(div, remainder, remain_size); // if i use sizeof(...)/ sizeof(...[0]),  remain_size = 50, but thats total. Im trying to get only filled cells??? 
																									//so i back to count using while.



}

void generate_hexcode(int division[], int remain[], int rm_size) //  This function will generate hexa color code,
{
	int i = 0, j=0,count=0, k=0,z=0 , div_count=0,z2=0;
	int len;  int div_len; int temp_rem_len; int y = 0;
		int div_sayac = 0;
	int div_temp;

					

	int *temp_rem= new int [rm_size]; 
	
	 
	
	len = rm_size; 
		


	  while ((division[j] >= 0 ))
		{
			//cout << "remain[" << j << "]: " << remain[j] << "  ";
		  while (division[y]>=0)
		  {
			  if (division[y]!=0)
			  {
				  div_count++;
				  y++;
				  div_sayac++;
				 
			  }
			  else
			  {     
				  div_count++;
				  y++;
				  div_sayac++;
					break;
			  }
		  }

		  div_temp = div_count;
		  div_count = div_count - 1;
		  
		  while (div_count >=0 && div_sayac>0) //div_sayac ???? >0 || >=0
		  {

			temp_rem[k] = remain[div_count];
			cout << "TEMPPPP :::::[ "<<k<<"] " << temp_rem[k] <<"  JJJJJ: " <<j<< " "<<bosluk;/////
			div_count--;
			div_sayac--;
			k++;
			j++;

					
		  }

          //len--;
		  div_count=div_temp;
		  div_sayac = 0; /// last addeddd -> div_sayac


		}
	  

delete [] temp_rem;
}