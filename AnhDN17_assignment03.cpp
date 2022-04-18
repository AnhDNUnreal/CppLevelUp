// FPTLichVanNien.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>
using namespace std;

void Menu() {
	cout << "\n=================MENU=================\n";
	cout << "1. Find the number of month\n";
	cout << "2. Show next day (dd/mm/yyyy)\n";
	cout << "3. Show previous next day (dd/mm/yyyy)\n";	
	cout << "4. Quit\n";
}

int MenuChoice()
{
	int n = 0;
	cout << "\n\nYour choice: ";
	cin >> n;
	if (n > 0 || n < 5)	
		return n;
	else return MenuChoice();
}

int checkLeapYear(int y) // kiem tra nam nhuan (theo quy tac cua lich Gregorius)
{
	return ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0);
}

int FindNumMon(int m, int y)	// tim so ngay trong thang
{
	switch (m)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		return 31;
	case 4:
	case 6:
	case 9:
	case 11:
		return 30;
	case 2:		
		if (checkLeapYear(y))
			return 29;		
		else
			return 28;	
	}	
}

void NextDay(int d, int m, int y)
{
	int numMon = FindNumMon(m, y);	// kiem tra so ngay cua thang nhap vao
	switch (numMon)	
	{
	case 31:	// neu thang nhap vao co 31 ngay
		if (numMon)
		
		
		if (d == 31 && m == 12)		// neu ngay nhap vao la ngay cuoi nam (31/12)
		{
			cout << 1 << "/" << 1 << "/" << y + 1;			
		}
		else 
			if (d == 31) // neu khong phai la ngay cuoi nam, chi la ngay cuoi thang
			{
				cout << 1 << "/" << m + 1 << "/" << y;
			}  
			else
			{
				cout << d + 1 << "/" << m << "/" << y;
			}
		break;
	case 30:
		if (d > 30)
		{
			cout << "The input day is not exist in this month";
		}
		else
			if (d == 30)	// neu ngay nhap vao la ngay cuoi thang		
			{
				cout << 1 << "/" << m + 1 << "/" << y;
			}
			else   
			{
				cout << d + 1 << "/" << m << "/" << y;
			}
		break;
	case 29:
		if (d > 29)
		{
			cout << "The input day is not exist in this month";
		}
		else
			if (d == 29)	// neu ngay nhap vao la ngay cuoi thang		
			{
				cout << 1 << "/" << m + 1 << "/" << y;
			}
			else
			{
				cout << d + 1 << "/" << m << "/" << y;
			}		
		break;
	case 28:
		if (d > 28)
		{
			cout << "The input day is not exist in this month";
		}
		else
			if (d == 28)	// neu ngay nhap vao la ngay cuoi thang		
			{
				cout << 1 << "/" << m + 1 << "/" << y;
			}
			else
			{
				cout << d + 1 << "/" << m << "/" << y;
			}
		break;
	}	
}

void PreviousDay(int d, int m, int y)
{
	switch (m)
	{
	case 1:
		if (d == 1)	// neu la ngay dau nam
		{
			cout << 31 << "/" << 12 << "/" << y - 1;
		}
		else
		{
			cout << d - 1 << "/" << m << "/" << y;
		}
		break;
	case 3:
		if (checkLeapYear(y))	// neu la nam nhuan 
		{
			cout << 29 << "/" << 2 << "/" << y;
		}
		else
		{
			cout << 28 << "/" << 2 << "/" << y;
		}
		break;
	case 5:
	case 7:
	case 10:
	case 12:
		if (d == 1)	// neu la ngay dau thang 5, 7, 10, 12
		{
			cout << 30 << "/" << m - 1 << "/" << y;
		}
		else
		{
			cout << d - 1 << "/" << m << "/" << y;
		}
		break;
	case 2:
	case 4:
	case 6:
	case 8:
	case 9:
	case 11:
		if (d == 1)	// neu la ngay dau thang 2, 4, 6, 8, 9, 11
		{
			cout << 31 << "/" << m - 1 << "/" << y;
		}
		else
		{
			cout << d - 1 << "/" << m << "/" << y;
		}
		break;
	}
}

void MenuHandle(int d, int m, int y)
{
	int choice = MenuChoice();	
	switch (choice)
	{
	case 1:
		cout << "The number of month: " << FindNumMon(m,y);
		break;
	case 2:
		cout << "The next day: "; 
		NextDay(d,m,y);
		break;
	case 3:
		cout << "The previous day: ";
		PreviousDay(d, m, y);
		break;
	case 4:
		exit(1);
		break;
	default:
		cout << "Your choice is not valid!";
	}
}

int main()
{
	int date, month, year;
    cout << "CALENDAR\n\n";
	cout << "Input dd/mm/yyyy\n";

	do
	{
		cout << "\nDate: ";
		cin >> date;
		cout << "Month: ";
		cin >> month;
		cout << "Year: ";
		cin >> year;
	} while (year < 0 || month < 1 || month >12 || date < 1 || date > 31);
		
	Menu();
	while (true)
	{
		MenuHandle(date, month, year);
	}
    _getch();
}


