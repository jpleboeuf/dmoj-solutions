#include <iostream>

using namespace std;

int main() {

  string hw = "Hello, World!";
  int l = hw.length();
  cout                       << hw << endl;
  cout << string(    l, ' ') << hw << endl;
  cout << string(2 * l, ' ') << hw << endl;

  return 0;
}
