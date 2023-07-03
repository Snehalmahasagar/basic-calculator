#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
using namespace std;
class operation
{
public:
    float num1, num2;
    char choice;

    int calculate()
    {

        cout << "enter the num1 : ";
        cin >> num1;
        cout << "enter the num2 : ";
        cin >> num2;
        cout << "enter the choice:";
        cin >> choice;
        ofstream outputfile("result.txt",ios::app);

        switch (choice)
        {
        case '1':
            cout << "So, the result for add operation is : " << num1 + num2 << endl;
            outputfile<<"So, the result for add operation is : " << num1 + num2 << endl;
            break;
        case '2':
            cout << "So, the result for subtraction operation is : " << num1 - num2 << endl;
            outputfile<<"So, the result for subtraction operation is : " << num1 - num2 << endl;
            break;

        case '3':
            cout << "So, the result for division operation is : " << num1 / num2 << endl;
            outputfile<<"So, the result for division operation is : " << num1 / num2 << endl;
            break;
        case '4':
            cout << "So, the result for multiplication operation is : " << num1 * num2 << endl;
            outputfile<<"So, the result for multiplication operation is : " << num1 * num2 << endl;

            break;

        default:
            cout << "the entered opretion is not available" << endl;
            break;
        }
    }

    
};
int main()
{
    operation o1;
    o1.calculate();
    return 0;
}