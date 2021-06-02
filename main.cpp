#include <iostream>

void result(int number){
  if (number%2==0) {
    std::cout << "Your number is even." << std::endl;
  }
  else {
    std::cout << "Your number is odd." << std::endl;
  }
}

int main() {
  int num;
  
  std::cout << "Enter a number: ";
  
  std::cin >> num;
  
  result(num);
  return 0;
}