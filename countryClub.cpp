#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double fee = 3000.00;

    cout << fixed << setprecision(2);
    cout << "----------Projected Rates----------" << endl;

    for(int i = 1; i <= 5; i++)
    {
        fee = fee + ( fee * 0.03);

        cout << "Year " << i << ": " << fee << endl;
    }

    cout << "-----------------------------------" << endl;

    return 0;
}