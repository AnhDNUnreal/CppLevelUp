// FPTSoDoiXung.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// Ham kiem tra so doi xung Palindrome
bool checkPalindrome(int num)
{
    int numOrigin = num;            // giu lai gia tri so ban dau de kiem tra
    int mun = 0;                    // bien luu lai so co trien vong la Panlindrome
    int munChild;                   // bien luu lai so cuoi cua so ban dau (sau moi vong lap)
    while (num != 0)
    {
        munChild = num % 10;        // chia lay phan du: lay so cuoi
        mun = mun * 10 + munChild;
        num /= 10;                  // chia lay phan nguyen: bo di so cuoi            
    }
    if (numOrigin == mun)
    {
        return true;
    }
    else
    {
        return false;
    }    
}

int main()
{    
    int numb;
    cout << "====== [Check Palindrome numbeR] ======\n\n";
    cout << "Input number: ";
    cin >> numb;
    if (checkPalindrome(numb))
    {
        cout << "Result: YES !";
    }
    else
    {
        cout << "Result: NO :(";
    } 
    
    return 0;
}



