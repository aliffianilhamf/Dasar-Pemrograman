#include <iostream>

using namespace std;

int main()
{
    int input, min, max;
    cin >> input;

    for (int i = 1; i < 1000; i++)
    {

        if (input == -99)
        {
            break;
        }
        if (i == 1)
        {
            min = input;
            max = input;
        }
        else
        {

            if (input > max)
            {
                max = input;
            }
            if (input < min)
            {

                min = input;
            }
        }
        cin >> input;
    }
    cout << "Max = " << max << endl;
    cout << "Min = " << min << endl;

    return 0;
}
