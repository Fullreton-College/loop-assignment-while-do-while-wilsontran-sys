#include <iostream>

using namespace std;

int main()
{
    int num;
    int largest;
    int smallest;

    cout << "Enter an integer (-99 to stop): ";
    cin >> num;

    if(num == -99)
    {
        cout << "No numbers were entered." << endl;
        return 0;
    }

    largest = num;
    smallest = num;

    do
    {
        if(num > largest)
        {
            largest = num;
        }

        if(num < smallest)
        {
            smallest = num;
        }

        cout << "Enter an integer (-99 to stop): ";
        cin >> num;
    }while(num != -99);

    cout << endl;
    cout << "The largest number is: " << largest << endl;
    cout << "The smallest number is: " << smallest << endl;

    return 0;
}