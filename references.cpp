#include <iostream>

int main() {
  
  int soda = 99;
  
  int &pop =soda;
  
  pop=pop+1;

  std::cout << soda << "\n";
  std::cout << pop<< "\n";
}
