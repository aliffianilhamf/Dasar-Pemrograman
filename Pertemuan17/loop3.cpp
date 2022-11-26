#include <iostream>

using namespace std;

int main()
{
    for (int i = 100; i >= 1; i--)
    {
        if (i == 54)
        {
            break;
        }
        else
        {
            cout << i << endl;
        }
    }
    cout << "Berhenti karena Break" << endl;

    return 0;
}