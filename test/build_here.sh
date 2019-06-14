#!/bin/bash

cmake -S.. -Bbuild -DBUILD_PYTHON=ON -DCMAKE_INSTALL_PREFIX=$PWD/install -DCMAKE_BUILD_TYPE=Release \
&& cmake --build build --target all -- -j \
&& cmake --build build --target install
