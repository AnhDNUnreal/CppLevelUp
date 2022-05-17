#include<iostream> 
using namespace std;

float Plus(float a, float b)
{
	return a + b;
}

float Minus(float a, float b)
{
	return a - b;
}

float Multiply(float a, float b)
{
	return a * b;
}

float Divide(float a, float b)
{
	return a / b;
}

void operation(float a, float b, float (*p2Func)(float, float))
{
	cout << p2Func(a, b);
}

int main()
{
	float a, b;	
	
	cout << "Input 2 numbers: \n";
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "===========================";
	cout << "\na + b = "; 
	operation(a, b, Plus);
	cout << "\na - b = ";
	operation(a, b, Minus);
	cout << "\na * b = ";
	operation(a, b, Multiply);
	cout << "\na / b = ";
	operation(a, b, Divide);
	
	return 0;
}