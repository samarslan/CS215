#include "iostream"

using namespace std;

int main(){
    int grade;

    cout << "Pleas enter grade:" << endl;
    cin >> grade;
    grade = grade / 10;

    switch (grade) {
        case 10:
        case 9:
            cout << "Letter Grade: A\n";
            break;
        case 8:
            cout << "Letter Grade: B\n";
            break;
        case 7:
            cout << "Letter Grade: C\n";
            break;
        case 6:
            cout << "Letter Grade: D\n";
            break;
        default:
            cout << "Letter Grade: F\n";
            break;
    }

    return 0;
}