#include <iostream>
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
	
	 remain_size = sizeof(remainder) / sizeof(remainder[0]); // if we do like this, it will return fix sized of array, which is 50+1;
	//		
	//while (/*remainder[s] != '\0' &&*/ remainder[s] != 0) //To find array lenght of array
	//{
	//	sayac++;
	//	s++;
	//}
	//remain_size = sayac+1;


	generate_hexcode(div, remainder, remain_size);



}

void generate_hexcode(int division[], int remain[], int rm_size) //  This function will generate hexa color code,
{
	int i = 0, j=0,count=0, k=0,z=0 , div_count=0,z2=0;
	int len;  int div_len; int temp_rem_len;

						//temp_rem_len = ((sizeof(remain) / sizeof(remain[0])) + 2);   /// ->>> does not give the right result??

	int *temp_rem= new int [rm_size]; 

																	//while (/*remain[z]!= '\0' &&*/ remain[z]!=0) //To find array lenght of array
																	//{
																	//	count++;
																	//	z++;
																	//}
	 
	
	len = count-1;

	         
	 //while (division[z2] != '\0' && division[z2] >= 0) //To find array lenght of array
	 //{
		// div_count++;
		// z2++;
	 //}
	 //div_len = div_count - 1;
		

	 //for (int i = 0; i < 3; i++) //// bu for olduğu için fazla dönüyor galiba????
	 //{
	 //}
		while ((division[j] != 0 /*&& division[j] != '\0'*/)  && (len >=0 && remain[len]!=0  /*'\0'*/))
		{
			//cout << "remain[" << j << "]: " << remain[j] << "  ";
			  
			temp_rem[k] = remain[len];
			cout << "TEMPPPP :::::[ "<<k<<"] " << temp_rem[k] <<"  JJJJJ: " <<j<< " "<<bosluk;/////
			len--;
			k++;
			j++;
          
			 //temp_rem[k] = '\0';

		}
		 ////
		
		//////7
		/* for (int z = j - 1; z >= 0; z--)
		{
			temp_rem[k] = remain[z];
			cout << "temp_rem: ["<<k<<"] : " << temp_rem[k] <<" ";
			k++;
		}*/
		
		
	// for closing tag }
	  
		
  
	//division[j] = '\0';*/
	
	
	
	
	
	
	
	/*while (division[i] != 0 && division[i] != '/0' && count < 3)
	{
		while (division[j]!=0)
		{
			cout << "remain["<< j<<"]" << remain[j++] << "  ";
		
		}
		
		//count++;
		i++;
	}*/


delete [] temp_rem;
}