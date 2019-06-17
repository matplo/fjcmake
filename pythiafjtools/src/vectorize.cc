#include <PythiaFJTools/vectorize.hh>

namespace pythiafjtools{

std::vector<fastjet::PseudoJet> vectorize(const Pythia8::Pythia &pythia, bool only_final, double eta_min, double eta_max)
{
	std::vector<fastjet::PseudoJet> v;
	for (int ip = 0; ip < pythia.event.size(); ip++)
	{
		if (pythia.event[ip].isFinal() || only_final == false)
		{
			if (pythia.event[ip].eta() > eta_min && pythia.event[ip].eta() < eta_max)
			{
				fastjet::PseudoJet psj(pythia.event[ip].px(), pythia.event[ip].py(), pythia.event[ip].pz(), pythia.event[ip].e());
				psj.set_user_index(ip);
				v.push_back(psj);
			}
		}
	}
	return v;
}

}
