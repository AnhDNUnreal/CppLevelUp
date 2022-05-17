#include <iostream>
using namespace std;

/*******************************
* Function name: importData()
* Parameter:
*  pArr:  int** [O]
*  szRow: int [I]
*  szCol: int [I]
*******************************/
bool importData(int** pArr, int szRow, int szCol)
{
	if (pArr)
	{
		for (int i = 0; i < szRow; i++)
			for (int j = 0; j < szCol; j++)
			{
				cout << "\nA[" << i + 1 << "]" << "[" << j + 1 << "] = ";
				cin >> pArr[i][j];
			}
		return true;
	}
	return false;
}

/*******************************
* Function name: add2Matrix()
* Parameter:
*  pArr1:  int** [I]
*  pArr2:  int** [I]
*  szRow: int [I]
*  szCol: int [I]
*  Return: Sum of 2 Matrix
*******************************/
int** add2Matrix(int** pArr1, int** pArr2, int szRow, int szCol)
{
	for (int i = 0; i < szRow; i++)
	{
		for (int j = 0; j < szCol; j++)
		{
			pArr1[i][j] = pArr1[i][j] + pArr2[i][j];
		}
	}
	return pArr1;	
}

/*******************************
* Function name: printMatrix()
* Parameter:
*  pArr:  int** [I]
*  szRow: int [I]
*  szCol: int [I]
*******************************/
void printMatrix(int** pArr, int szRow, int szCol)
{
	cout << "Matrix Sum[" << szRow << "][" << szCol << "]: \n";
	for (int i = 0; i < szRow; i++)
	{
		for (int j = 0; j < szCol; j++)
		{
			cout << pArr[i][j] << "   ";
		}
		cout << "\n";
	}
}

/*******************************
* Function: freeMem()
* Parameter
*  pArr:  int** [I]
*  szRow: int [I]
*  szCol: int [I]
*******************************/
void freeMem(int** pArr, int szRow, int szCol)
{
	for (int i = 0; i < szRow; i++)
		delete[] pArr[i];

	delete[] pArr;
}

int main()
{
	int** pArr1, ** pArr2;
	int n, m;

	cout << "Please input Matrix size NxM: \n";
	cout << "N = ";
	cin >> n;
	cout << "M = ";
	cin >> m;
		
	pArr1 = new int* [n];	// Allocate memory for matrix
	for (int i = 0; i < n; i++)
	{
		pArr1[i] = new int[m];
	}

	cout << "\nInput value of Matrix 1:\n";
	importData(pArr1, n, m);

	pArr2 = new int* [n];	// Allocate memory for matrix
	for (int i = 0; i < n; i++)
	{
		pArr2[i] = new int[m];
	}

	cout << "\nInput value of Matrix 2:\n";
	importData(pArr2, n, m);

	cout << "\n===============================\n";
	add2Matrix(pArr1, pArr2, n, m);
	cout << "Sum of 2 Matrix:\n";
	printMatrix(pArr1, n, m);

	freeMem(pArr1, n, m);
	freeMem(pArr2, n, m);
	
	return 0;
}