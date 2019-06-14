#ifndef __FASTJET_CONTRIB_UTIL_HH__
#define __FASTJET_CONTRIB_UTIL_HH__

#include <fastjet/PseudoJet.hh>
#include <RecursiveTools/SoftDrop.hh>

FASTJET_BEGIN_NAMESPACE      // defined in fastjet/internal/base.hh

namespace contrib {
	class SDinfo
	{
	public:
		SDinfo() : z(0), dR(0), mu(0) {;}
		~SDinfo() {;}
		double z;
		double dR;
		double mu;
	};

	SDinfo get_SD_jet_info(const fastjet::PseudoJet &j)
	{
		SDinfo ifo;
		if (j.has_structure_of<fastjet::contrib::SoftDrop>())
		{
			ifo.dR = j.structure_of<fastjet::contrib::SoftDrop>().delta_R();
			ifo.z = j.structure_of<fastjet::contrib::SoftDrop>().symmetry();
			ifo.mu = j.structure_of<fastjet::contrib::SoftDrop>().mu();
		}
		return ifo;
	}
};

FASTJET_END_NAMESPACE

#endif
