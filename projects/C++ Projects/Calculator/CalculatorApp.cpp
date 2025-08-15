#include <iostream>
#include ".\Core\Calculator.h"
#include ".\Simple\Simple.cpp"

using namespace std;

int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    cout << "Calculator Console Application" << endl
         << endl;
    cout << "Please enter the operation to perform. Format: a+b ¦ a-b ¦ a*b ¦ a/b" << endl;

    Calculator c;
    while (true)
    {
        cin >> x >> oper >> y;
        if (cin.fail())
        {
            cerr << "Sorry I can't read that. Please try again." << endl;
            cin.clear();
            cin.ignore(999, '\n');
            x = 0.0;
            y = 0.0;
            continue;
        }
        else if (y == 0 && oper == '/')
        {
            cout << "Math error: Attempted to divide by zero!" << endl;
            continue;
        }
        else
        {
            result = c.Calculate(x, oper, y);
        }
        cout << "Result of " << x << " " << oper << " " << y << " is: " << result << endl;
    }

    return 0;
}