#include <iostream>
using namespace std;

int main()
{
    int row, columns;
    cout << "Enter number of rows:" << endl;
    cin >> row;
    cout << "Enter number of colums:" << endl;
    cin >> columns;
    for (int i = 1; i <= row; i++)
    {
        if (i%2==0)
        {
           cout << " ";
        }
        
        for (int j = 1; j <= columns; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}