#ifndef PYTHIA_FASTJET_TOOLS_HH
#define PYTHIA_FASTJET_TOOLS_HH

#include <fastjet/PseudoJet.hh>
#include <Pythia8/Pythia.h>

namespace pythiafjtools{
	std::vector<fastjet::PseudoJet> vectorize(const Pythia8::Pythia &p, bool only_final, double eta_min, double eta_max);
	double angularity(const fastjet::PseudoJet &j, double alpha, double scaleR0 = 1.);
};

#endif
