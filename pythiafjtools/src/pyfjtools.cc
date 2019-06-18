#include <PythiaFJTools/pyfjtools.hh>
#include <cmath>

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

double angularity(const fastjet::PseudoJet &j, double alpha, double scaleR0)
{
	double _ang = 0;
	const std::vector<fastjet::PseudoJet> &_cs = j.constituents();
	for (unsigned int i = 0; i < _cs.size(); i++)
	{
		const fastjet::PseudoJet &_p = _cs[i];
		_ang += _p.perp() * pow(_p.delta_R(j) / scaleR0 , 2. - alpha);
	}
	_ang /= j.perp();
	return _ang;
}

}
