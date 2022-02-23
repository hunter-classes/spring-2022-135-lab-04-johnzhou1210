#include <iostream>

#include "shapes.h"

std::string box(int width, int height);
std::string checkerboard(int width, int height);
std::string cross(int size);
std::string lower(int size);
std::string upper(int size);
std::string trapezoid(int width, int height);

int main()
{
  std::cout << "===================start box tests==================\n";
  std::cout << "Test 1: box(8,5) returns: \n\n" << box(8,5) << std::endl;
  std::cout << "=================================================\n";
  std::cout << "Test 2: box(1,3) returns: \n\n" << box(1,3) << std::endl;
  std::cout << "=================================================\n";
  std::cout << "Test 3: box(2,9) returns: \n\n" << box(2,9) << std::endl;
  std::cout << "=================================================\n";
  std::cout << "Test 4: box(4,6) returns: \n\n" << box(4,6) << std::endl;
  std::cout << "===================end of box tests====================\n\n";

  std::cout << "================start checkerboard tests===============\n";
  std::cout << "Test 1: checkerboard(3,3) returns: \n\n" << checkerboard(3,3) << std::endl;
  std::cout << "=================================================\n";
  std::cout << "Test 2: checkerboard(4,5) returns: \n\n" << checkerboard(4,5) << std::endl;
  std::cout << "=================================================\n";
  std::cout << "Test 3: checkerboard(11,6) returns: \n\n" << checkerboard(11,6) << std::endl;
  std::cout << "=================================================\n";
  std::cout << "Test 4: checkerboard(8,8) returns: \n\n" << checkerboard(8,8) << std::endl;
  std::cout << "================end of checkerboard tests================\n\n";

  std::cout << "================start cross tests===============\n";
  std::cout << "Test 1: cross(3) returns: \n\n" << cross(3) << std::endl;
  std::cout << "=================================================\n";
  std::cout << "Test 2: cross(8) returns: \n\n" << cross(8) << std::endl;
  std::cout << "=================================================\n";
  std::cout << "Test 3: cross(14) returns: \n\n" << cross(14) << std::endl;
  std::cout << "=================================================\n";
  std::cout << "Test 4: cross(5) returns: \n\n" << cross(5) << std::endl;
  std::cout << "==============end of cross tests=====================\n\n";

  std::cout << "================start lower tests===============\n";
  std::cout << "Test 1: lower(4) returns: \n\n" << lower(4) << std::endl;
  std::cout << "=================================================\n";
  std::cout << "Test 2: lower(7) returns: \n\n" << lower(7) << std::endl;
  std::cout << "=================================================\n";
  std::cout << "Test 3: lower(11) returns: \n\n" << lower(11) << std::endl;
  std::cout << "=================================================\n";
  std::cout << "Test 4: lower(2) returns: \n\n" << lower(2) << std::endl;
  std::cout << "==============end of lower tests=====================\n\n";

  std::cout << "================start upper tests===============\n";
  std::cout << "Test 1: upper(4) returns: \n\n" << upper(4) << std::endl;
  std::cout << "=================================================\n";
  std::cout << "Test 2: upper(3) returns: \n\n" << upper(3) << std::endl;
  std::cout << "=================================================\n";
  std::cout << "Test 3: upper(6) returns: \n\n" << upper(6) << std::endl;
  std::cout << "=================================================\n";
  std::cout << "Test 4: upper(10) returns: \n\n" << upper(10) << std::endl;
  std::cout << "==============end of upper tests=====================\n\n";

  std::cout << "================start trapezoid tests===============\n";
  std::cout << "Test 1: trapezoid(4,3) returns: \n\n" << trapezoid(4,3) << std::endl;
  std::cout << "=================================================\n";
  std::cout << "Test 2: trapezoid(12,4) returns: \n\n" << trapezoid(12,4) << std::endl;
  std::cout << "=================================================\n";
  std::cout << "Test 3: trapezoid(12,7) returns: \n\n" << trapezoid(12,7) << std::endl;
  std::cout << "=================================================\n";
  std::cout << "Test 4: trapezoid(9,3) returns: \n\n" << trapezoid(9,3) << std::endl;
  std::cout << "==============end of trapezoid tests=====================\n\n";

  std::cout << "================start checkerboard3x3 tests===============\n";
  std::cout << "Test 1: checkerboard3x3(27,27) returns: \n\n" << checkerboard3x3(27,27) << std::endl;
  std::cout << "=================================================\n";
  std::cout << "Test 2: checkerboard3x3(14,17) returns: \n\n" << checkerboard3x3(14,17) << std::endl;
  std::cout << "=================================================\n";
  std::cout << "Test 3: checkerboard3x3(16,11) returns: \n\n" << checkerboard3x3(16,11) << std::endl;
  std::cout << "=================================================\n";
  std::cout << "Test 4: checkerboard3x3(4,5) returns: \n\n" << checkerboard3x3(4,5) << std::endl;
  std::cout << "==============end of checkerboard3x3 tests=====================\n\n";



  return 0;
}
