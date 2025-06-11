#include <iostream>

using namespace std;

int main()
{
  // must end with newline or will get error "streams had content in them that was not flushed"
  cout << "Hello, Emscripten!" << endl;
  printf("Hello, Emscripten bro!\n");

  // do not "return 0;"
  // ref: https://emscripten.org/docs/getting_started/FAQ.html#what-does-exiting-the-runtime-mean-why-don-t-atexit-s-run
}
