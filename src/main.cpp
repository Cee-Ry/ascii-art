#include <cstring>
#include <iostream>
#include <print>                                         

using namespace std;

int main(int argc, char *argv[]) {
  if (argc == 1) {
    println(cerr, "Usage: ascii-art <STRING>");
    println(cerr, "Try 'ascii-art -h' for more detail");
    return 1;
  }

  for (int i {1}; i < argc; i++) {
    if (strchr(argv[i]), ' ') {

    }
  }

  // if (strchr(argv[1], ' ')) print("{}", argv[1]);

  return 0;
}
