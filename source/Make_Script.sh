#!/bin/bash

# Currently can only be run from ./source

echo "Compiling Hierarchical Upscaling Code....."
#module swap mpi mpi/intelmpi/16.0.0
module unload compiler/intel/16.0.0
module load compiler/gcc/6.1.0
module list

cd ../lib
MKLA=/p/home/apps/intel/parallel_studio_2017_u1/compilers_and_libraries_2017.1.132/linux/compiler/lib/intel64_lin/
MKLB=/p/home/apps/intel/parallel_studio_2016/compilers_and_libraries_2016.0.109/linux/mkl/lib/intel64_lin/
export LD_LIBRARY_PATH="$(pwd):$MKLA:$MKLB:$LD_LIBRARY_PATH"
echo $LD_LIBRARY_PATH
cd ../source

rm *.o *~ EJ_code

make

echo "Done!"
