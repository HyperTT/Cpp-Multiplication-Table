#include <iostream>
using namespace std;

int main ()
{
    int num, multiply=1, product;
    cout << "Multiplication Table Generator\n" <<"Enter an integer\n";
    cin >> num;
    while (multiply < 11)
    {
        product = num * multiply;
        cout<< num << " * "<< multiply<< " = "<<product<<endl;
        multiply++;
    }
    return 0;
}
