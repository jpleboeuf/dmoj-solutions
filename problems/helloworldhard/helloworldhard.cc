#include <iostream>

using namespace std;

int main() {

  string hw = "Hello, World!";
  cout << hw << "\n";    // 1. Unix systems
  cout << hw << "\r\n";  // 2. Windows
  cout << hw << "\r";    // 3. old Mac-s

  return 0;
}
