#!/usr/bin/env python3
# coding: utf-8
fjcmakedir="/Users/ploskon/devel/fjcmake/"
import sys
sys.path.append("{}/test/build/python/build/lib/CMakeSwig/fastjet".format(fjcmakedir))
sys.path.append("{}/test/build/python/build/lib/CMakeSwig/recursivetools".format(fjcmakedir))
sys.path.append("{}/test/pythia8235inst/lib".format(fjcmakedir))
sys.path.append("{}/test/build/python/build/lib/CMakeSwig/pythiafjtools".format(fjcmakedir))

import pyfastjet as fj
import pyrecursivetools as rectools
import pythia8
import pypythiafjtools as pyfj

def print_jets(jets):
    print("{0:>5s} {1:>10s} {2:>10s} {3:>10s} {4:>12s}".format(
        "jet #", "pt", "rap", "phi", "N particles"))

    for ijet in range(len(jets)):
        jet = jets[ijet]
        constituents = jet.constituents()
        print("{0:5d} {1:10.3f} {2:10.4f} {3:10.4f} {4:10.3f}".format(
            ijet, jet.pt(), jet.rap(), jet.phi(), len(constituents)))

pythia = pythia8.Pythia()
pythia.readString("Beams:eCM = 8000.")
pythia.readString("HardQCD:all = on")
pythia.readString("PhaseSpace:pTHatMin = 20.")
pythia.readString("Next:numberShowEvent = 0")
pythia.readString("Next:numberShowInfo = 0")
pythia.readString("Next:numberShowProcess = 0")
pythia.init()
# set up our jet definition and a jet selector
jet_def = fj.JetDefinition(fj.antikt_algorithm, 0.4)
selector = fj.SelectorPtMin(1.0) & fj.SelectorAbsRapMax(1)

for iEvent in range(0, 1000):
    # print ("iEvent: ", iEvent)
    if not pythia.next(): continue
    parts = pyfj.vectorize(pythia, True, -1, 1)
    # print(len(parts))
    jets = selector(jet_def(parts))
    # print_jets(jets)
print("done.")
pythia.stat();




