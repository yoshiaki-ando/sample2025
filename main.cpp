#include <iostream>

int func2(int x, int y){
  return x*x + y*y + 2*x*y;
  //+ 2*x*y 追加　by Mikoshiba
}

int function(int x){
  return x*(x-1);
}

int main(void){

  std::cout << "git" << std::endl;
  std::cout << "GIT" << std::endl;

  for(int i = 0; i < 10; i++){
    std::cout << i << std::endl;
  }

  std::cout << function(3) << std::endl;
  std::cout << func2(3, 2) << std::endl;

  std::cout << "complete" << std::endl; /* shirasaki */

  return 0;
}
