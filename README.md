**1D Uniaxial Finite Strain, FEM-DEM Heirarchical Multiscale Modeling Code**
* MPI/OpenMP Formulation
* DEM - ellip3D, 600 particle assembly from Colorado Mason sand

*Boundary Conditions:*  
---> +----+----+----+----+----|  
d(t) &emsp;&emsp; el &emsp; <--dof &emsp; 0  
1. Applied strain rate from Split Hopkinson Pressure Bar Experiments (Dr. Hongbing Lu, UT Dallas).
2. Other side fixed in space.

*Initial Conditions:*  
d(0) = v(0) = a(0) for all degrees of freedom

*Code Overview:*  
./bin     - contains pre-compiled programs required for ellip3D  
./include - hooks for armadillo library required for FEM  
./inputs  - input files for FEM and DEM  
./lib     - aramdillo library files  
./outputs - simulation outputs populated from PBS submissions  
./source  - source code

*Input Files:*

*Output Files:*

*Code Compilation:*

*Code Submission:*

