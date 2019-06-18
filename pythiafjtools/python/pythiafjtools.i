%module pythiafjtools

%include "std_string.i"
%include "std_vector.i"
// %include "fastjet.i"

// Add necessary symbols to generated header
%{
#include <fastjet/PseudoJet.hh>
#include <Pythia8/Pythia.h>
#include <PythiaFJTools/pyfjtools.hh>
%}

// Process symbols in header

%include "PythiaFJTools/pyfjtools.hh"
