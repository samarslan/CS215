#include "iostream"
#include "iomanip"
using namespace std;

double ConvertToCelsius(double fahrenheit);

int main(){
    double fahrenheit;

    cout << "Please enter the temperature" << endl;
    cin >> fahrenheit;
    cout << setprecision(3) << ConvertToCelsius(fahrenheit)<<endl;

    return 0;
}

double ConvertToCelsius(double fahrenheit){
    return (fahrenheit - 32) * 5/9;
}