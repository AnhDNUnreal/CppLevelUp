// FPTInHinhThoi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>	// _getch()
using namespace std;

int main()
{
    
	int a, b, i = 1;
	int c, j = 4;

	// In ra tam giac can phia tren
	for (a = 1; a < 6; a++)	
	{
		// In ra dau cach
		c = 1;
		while (c != a + j)
		{
			cout << " ";
			c++;
		}
		j -= 2;

		// In ra dau sao
		b = 1;
		while (b != a + i)
		{
			cout << "*";			
			b++;
		}
		i++;

		// Het 1 dong
		cout << "\n";		
	}

	// In ra tam giac can phia duoi
	i = 7;
	for (a = 1; a < 5; a++)	
	{
		// In ra dau cach
		c = 0;
		while (c != a)
		{
			cout << " ";
			c++;
		}
		
		// In ra dau sao
		b = 1;
		while (b != a + i)
		{
			cout << "*";
			b++;
		}
		i -= 3;
		
		// Het 1 dong
		cout << "\n";
	}
	_getch();
	return 0;	
}

