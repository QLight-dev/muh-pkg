#include <iostream>
#include <cstdlib>
#include <stdexcept>

std::string command;
int main(int argc,char* argv[]) {
    if (argc == 1 && argv[1] == "install") {
        std::cerr << "muh: no input files!";
        std::cerr << "usage: muh install <package>";
    } else if (argv[1] == "install" && argc == 2) {
        #if (defined(__linux__))
            system(("/bin/bash -c \"$(curl -fsSL https://raw.githubusercontent.com/QLight-dev/muh-pkg/refs/heads/main/packages/" + std::string(argv[2]) + "linux/install.sh)\"").c_str());
        #endif
    }
}