#include <iostream>
#include "vector.h"


int main(int argc, char** argv){


  double s = 4.0;

  vector a(1.23875,2.438210);

  vector b(4,5);

  vector c = a + b;

  

  std::cout << "a = \n" << a << std::endl;
  std::cout << "b = \n" << b << std::endl;
  std::cout << "a+b = \n" << a+b << std::endl;
  std::cout << "a-b = \n" << a-b << std::endl;
  std::cout << "a^b = \n" << (a^b) << std::endl;

  a.setComponents(12.1234,1523.51236);
  
  a.x = 4;

  std::cout << "\na.setComponents(12.1234,1523.51236) = \n" << a << std::endl;

  std:: cout << "a.getComponentx() = \n" << a.getComponentx() << std::endl;
  std:: cout << "a.getComponenty() = \n" << a.getComponenty() << std::endl;


 // Works without parentheses around product. 
  std::cout << "a*s = \n" << a*s << std::endl;
  std::cout << "s*a = \n" << s*a << std::endl;

  a.setComponentx(3.14159);
  a.setComponenty(2.71828);

  std::cout << "a.setComponentx(3.14159): " << a.getComponentx() << std::endl;
  std::cout << "a.setComponenty(2.71828): " << a.getComponenty() << std::endl;




  return 0;


}
