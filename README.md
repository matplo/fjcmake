# FJCMake

## Synopsis

- this is put together using the excellent https://github.com/Mizux/cmake-swig (a complete example of how to create a Modern [CMake](https://cmake.org/) C++ Project with the [SWIG](http://www.swig.org) code generator - wrappers for Python, .Net and Java.) - note, some doc left on purpose
- still needs work but main idea of having things in python is working (FastJet with CMake + python (SWIG) bindings)

- contains *unmodified* [FastJet ver. 3.3.2](http://www.fastjet.fr/)
- and parts of code from [FastJet Contrib ver. 1.041](https://fastjet.hepforge.org/contrib/) - work on the python bindings ongoing (RecursiveTools for the moment)

## Building

- tested with SWIG 4.0
- cmake 3.14.4
- CGAL 13.0.3 + BOOST 1.69.00 (also tested with cgal (and boost) installed with brew `brew install cgal`)
- ought to work with any 2.7> python - (see cmake/python.cmake)
- this is in development so installation needs improvement - see below for a local install

## Handy quick start

```
git clone git@github.com:matplo/fjcmake.git
cd fjcmake/test
./build_here.sh
./05-user-info.py
```

### Notes

The above needs `pythia8-config` in $PATH to compile `pythiafjtools`. Note, the example `pythia_gen_fj_plot.ipynb` needs PYTHIA.

For a quick install of PYTHIA8 source `local_pythia_install.sh` (source everytime before `build_here.sh`).
