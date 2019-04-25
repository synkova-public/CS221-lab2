#include <iostream>
int main () {
  int x = 5, y = 15;
  int *p1, *p2;
		// value of x -> 5; y -> 15; p1 -> uninit; p2 -> uninit

  p1 = &x;
  std::cout << "address of x: " << p1 << '\n';
    // value of x -> 5; y -> 15; p1 -> 0x7fff535b2b88; p2 -> uninit

  p2 = &y;
  std::cout << "address of y:" << p2 << '\n';
    // value of x -> 5; y -> 15; p1 -> 0x7fff535b2b88; p2 -> 0x7fff535b2b84

  *p1 = 6;
    // value of x -> 6; y -> 15; p1 -> 0x7fff535b2b88; p2 -> 0x7fff535b2b84

  *p1 = *p2;
    // x -> 15; y -> 15; p1 -> 0x7fff535b2b88; p2 -> 0x7fff535b2b84

  p2 = p1;
  std::cout << "address of x: " << p1 << '\n';
  std::cout << "address of y: " << p2 << '\n';
    // value of x -> 15; y -> 15; p1 -> 0x7fff535b2b88; p2 -> 0x7fff535b2b88

  *p1 = *p2+10;  // *p2 gets the value in x
    // value of x -> 25; y -> 15; p1 -> 0x7fff535b2b88; p2 -> 0x7fff535b2b88
  return 0;
}
