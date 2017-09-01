#!/bin/bash

# Currently can only be run from ./source

echo "Compiling Hierarchical Upscaling Code....."
module swap PrgEnv-intel PrgEnv-gnu
module list

cd ../lib
export LD_LIBRARY_PATH="$(pwd):$LD_LIBRARY_PATH"
echo $LD_LIBRARY_PATH
cd ../source

rm *.o *~ hu_code

make

echo "Done!"
