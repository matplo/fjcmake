# FJCMake

## Synopsis

- this is put together using the excellent https://github.com/Mizux/cmake-swig (a complete example of how to create a Modern [CMake](https://cmake.org/) C++ Project with the [SWIG](http://www.swig.org) code generator to generate wrapper and package for Python, .Net and Java.) - note, some doc left on purpose
- still needs work but main idea of having things in python is working (FastJet with CMake + python (SWIG) bindings)

- contains *unmodified* FastJet ver. 3.3.2 (http://www.fastjet.fr/)
- and parts of code from FastJet Contrib ver. 1.041(https://fastjet.hepforge.org/contrib/) - work on the python bindings ongoing...

## Build

- tested with SWIG 4.0
- cmake 3.14.4
- CGAL 13.0.3 + BOOST 1.69.00

### handy quick start
```
git clone git@github.com:matplo/fjcmake.git
mkdir test
cd test
cmake -S../fjcmake -Bbuild -DBUILD_PYTHON=ON -DCMAKE_INSTALL_PREFIX=$PWD/fjcmake-install -DCMAKE_BUILD_TYPE=Release \
&& cmake --build build --target all -- -j \
&& cmake --build build --target install
```

### test python

