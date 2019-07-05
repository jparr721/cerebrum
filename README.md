# Cerebrum
C++ Neural Networking library.

## Getting Started
### Requirements
- Boost >= 1.69
- Eigen >= 3.3
- cmake >= 3.9
- Ninja
- Boost Unit Test Framework

### Compiling
You can get the dependencies on arch linux via:
```
yay -S boost eigen ninja cmake clang
```
This project can be cloned anywhere on your system.

CMake supports out of source builds, so we can make a build directory you may also see a warning if you do an in source build because it's gross to do that. Inside of the project directory, do the following:
```
mkdir build
cd build
cmake -GNinja ..
make
```

If you want to install (not recommended until release is ready)
```
make install
```

To run the tests:
```
cd build/bin
./executable_name
```

### Using this library
The lib is currently still very much in the ironing phase, but it now works which is super cool. Please follow the example in the unit test [Here](https://github.com/jparr721/cerebrum/blob/master/test/network_test.cc) to get your very own neural network started. 
