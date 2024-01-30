#include <iostream>

using namespace std;
int main()
{
  bool p[4] = {true, true, false, false};
  bool q[4] = {true, false, true, false};
  cout << "Truth Table for P ∧ Q" << endl;
  cout << "P\t\tQ\t\tP ∧ Q" << endl;
  int i=0;
  while (i<4)
  {
    cout << p[i] << "\t\t" << q[i] << "\t\t" << (p[i]&&q[i]) << endl;
    i++;
  }
}