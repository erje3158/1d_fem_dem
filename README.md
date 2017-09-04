# 1D Uniaxial Finite Strain, FEM-DEM Heirarchical Multiscale Modeling Code
* MPI/OpenMP Formulation
* DEM - ellip3D, 600 particle assembly from Colorado Mason sand

## Boundary Conditions:
---> +----+----+----+----+----|  
&nbsp;d(t) &emsp;&emsp;&emsp;&ensp; el &emsp; <--dof &emsp;&emsp;&ensp; 0  
1. Applied strain rate from Split Hopkinson Pressure Bar Experiments (Dr. Hongbing Lu, UT Dallas).
2. Other side fixed in space.

## Initial Conditions:
d(0) = v(0) = a(0) for all degrees of freedom

## Code Overview:
./bin - contains pre-compiled programs required for ellip3D  
./include - hooks for armadillo library required for FEM  
./inputs - input files for FEM and DEM  
./lib - aramdillo library files  
./outputs - simulation outputs populated from PBS submissions  
./source - source code

## Input Files:
Four input files are required to run the code all found in ./inputs:
* dem_input - input parameters for the ellip3D  
* fem_input - input parameters for the FEM code  
* input_particle_file - provides the initial assembly of DEM particles  
* input_boundary_file - provides the initial location of the DEM assembly boundarys

### _dem_input_: Template and Variable Definitions
$Particle Overlap  
Maximum Overlap - overlap over which the force-displacement relationship is allowed to increase during particle-to-particle contact

$DEM Constitutive  
Young's Modulus - elasticity parameter for the DEM particles  
Poisson's Ratio - elasticity parameter for the DEM particles

$Time Paramters  
dt - DEM timestep

$Particle Contact  
Damping - Interparticle damping ratio

### _fem_input_: Template and Variable Definitions
$FEM Constitutive  
lambda - elasticity paramter for the FEM (not used)  
mu - elasticity parameter for the FEM (not used)  
rho - density of the FEM (not used)  

$Gravity  
gravity - acceleration due to gravity  

$FEM Geometry  
diameter - Diameter of the specimen  
L/D - Ratio of the length to the diameter of the specimen  

$DEM Geometry  
length - length of the DEM assembly  
width - width of the DEM assembly  
height - height of the DEM assembly  

$FEM Constants  
numips - number of integration points per element  
nstress - number of saved stress and strain values  
nisv - number of internal state variables  
ndof - number of global degrees of freedom  
nel - number of elements  
neldof - number of element degrees of freedom  

$Time Parameters  
t0 - start time of the simulation  
dt - global timestep  
iterations - number of DEM timesteps per global timestep  
print - number of DEM snapshots per global timestep  
time total - end time of the simlation  

$Strain Rate
rate - strain rate of the split Hopkinson pressure bar experiment  

$Mass Damping
alpha - mass proportional damping value  

## Output Files:

## Code Compilation:

## Code Submission:

