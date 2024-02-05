#include "iostream"

using namespace std;

int main(){
    int a,b;

    cout << "Please enter the first number" << endl;
    cin >> a;
    cout << "Please enter the second number" << endl;
    cin >> b;

    if(a>b)
        cout << a << '>' << b << endl;
    else if(b>a)
        cout << a << '<' << b << endl;
    else
        cout << a << '=' << b << endl;

    return 0;
}