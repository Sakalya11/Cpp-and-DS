#include <iostream>
using namespace std;
int main() {
    int a,b;
	cout<<"Enter the value of a and b"<<endl;
	cin>>a;
	cin>>b;
    int sum = a + b;
    cout << "Sum of " << a << " and " << b << " is: " << sum << endl;
    int difference = a - b;
    cout << "Difference of " << a << " and " << b << " is: " << difference << endl;
    int product = a * b;
    cout << "Product of " << a << " and " << b << " is: " << product << endl;
    int quotient = a / b;
    cout << "Quotient of " << a << " divided by " << b << " is: " << quotient << endl;
    return 0;

}
