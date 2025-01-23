#include <iostream>
#include <stdexcept>

int main(int argc, char* argv[]) {
    if (argc == 1 && argv[1] == "install") {
        std::cerr << "muh: no input files!";
        std::cerr << "usage: muh install <package>";
    }
}