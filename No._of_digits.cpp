#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter number:  ";
    cin >> num;
     int counter = 0;
    while(num>0)
    {
        counter++;
        num = num/10;

    }
    cout << "it contains "<< counter << " digits";

    return 0;
}
