#!/bin/bash

version=8235
pydirsrc=pythia${version}
pydirinst=$PWD/pythia${version}inst

if [ ! -d ${pydirsrc} ]; then
	wget http://home.thep.lu.se/~torbjorn/pythia8/${pydirsrc}.tgz
	tar zxvf ${pydirsrc}.tgz
fi

if [ ! -d ${pydirinst} ]; then
	if [ -d ${pydirsrc} ]; then
		cd ${pydirsrc}
	    python_inc_dir=$(python3-config --includes | cut -d' ' -f 1 | cut -dI -f 2)
	    python_exec=$(which python3)
	    python_bin_dir=$(dirname ${python_exec})
	    echo "python exec: ${python_exec}"
	    echo "python include: ${python_inc_dir}"
	    echo "python bin dir: ${python_bin_dir}"
		./configure --prefix=${pydirinst} \
			--with-python-include=${python_inc_dir} \
			--with-python-bin=${python_bin_dir}
		make -j && make install
		cd -
	fi
fi

if [ -d ${pydirinst} ]; then
	export PYTHIA_DIR=${pydirinst}
	export PATH=$PATH:${pydirinst}/bin
fi

# ./configure --prefix=/Users/ploskon/software/hepsoft/pythia8/8235 \
# 	--with-root=/Users/ploskon/software/hepsoft/root/v6-16-00 \
# 	--with-root-lib=/Users/ploskon/software/hepsoft/root/v6-16-00/lib \
# 	--with-root-include=/Users/ploskon/software/hepsoft/root/v6-16-00/include \
# 	--with-hepmc2=/Users/ploskon/software/hepsoft/hepmc/2.06.09 \
# 	--with-lhapdf5=/Users/ploskon/software/hepsoft/lhapdf/5.9.1 \
# 	--with-python-include=/Users/ploskon/anaconda2/include/python2.7 \
# 	--with-python-bin=/Users/ploskon/anaconda2/bin
