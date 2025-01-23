#/bin/bash
wget https://raw.githubusercontent.com/QLight-dev/muh-pkg/refs/heads/main/packages/SFML/SFML-3.0.0.tar.gz
tar -xvzf SFML-3.0.0.tar.gz
cd SFML-3.0.0
mv include /usr/include/SFML
mv lib/*.a* /usr/lib64
mv lib*.so* /usr/bin
cd ..
rm -rf SFML-3.0.0