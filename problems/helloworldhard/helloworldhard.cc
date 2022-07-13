#include <iostream>

using namespace std;

int main() {

  string hw = "Hello, World!";
  cout << hw << "\n";    // 1. Unix systems
  cout << hw << "\r";    // 2. old Mac-s
  cout << hw << "\r\n";  // 3. Windows

  return 0;
}
