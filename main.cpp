#include <iostream>
#include <cstdlib>
#include <stdexcept>
#include <cstring>  // for strcmp

int main(int argc, char* argv[]) {
    if (argc == 1 || strcmp(argv[1], "install") != 0) {
        std::cerr << "muh: no input files!" << std::endl;
        std::cerr << "Usage: muh install <package>" << std::endl;
    } else if (argc == 3 && strcmp(argv[1], "install") == 0) {
        #if defined(__linux__)
            std::string command = "/bin/bash -c \"$(curl -fsSL https://raw.githubusercontent.com/QLight-dev/muh-pkg/refs/heads/main/packages/" + std::string(argv[2]) + "linux/install.sh)\"";
            system(command.c_str());
        #endif
    }
}
