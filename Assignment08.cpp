#include<iostream>
using namespace std;

/*********************************************************************************************
* Function name: findsubstr()
* Parameter:
*  str: const char* [I]
*  sub: char* [I]
* Return: Returns the position of the first occurrence of a substring in string
*********************************************************************************************/
int findsubstr(const char* str, char* sub)
{
	if (strstr(str, sub))
		return strlen(str) - strlen(strstr(str, sub));	
	else return -1;
}
int main()
{
	const char* str = "Hello world! This is the best day of my life! :D";
	char sub[50];
	cout << "================ Main string ===================\n";
	cout << "Hello world! This is the best day of my life! :D\n";
	cout << "================================================\n\n";
	cout << "Input Sub string: ";	
	cin >> sub;
	cout << "\nThe position of this Sub string in Main string is: " << findsubstr(str, sub);
	
	return 0;
}