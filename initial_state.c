#include "initial_state.h"



//The t = 0 density of the system
double init_dens(double x) {


	double rho = 1.;

	return rho;
	/*
	if (x < 0.5) {

		return 0.5*rho;

	}
	else {

		return rho;

	}
	*/


}//end init_density




double init_strain(double x) {


	return 0.;


}//end init_strain




//The t = 0 velocity of the system
//	Initially at rest!
double init_xvel(double x) {


	//return 0;
	//return -M_PI * 0.01 * std::sin( M_PI * x );
	return 0.;


}//end init_xvel





//The Young's Modulus of the system
//Kind of just hardcoded in here
//	It's a function here so that we can make the initial state
//	Have multiple moduli if necessary, although that may make the physics weird
//	since it implies different materials ==> reflection, etc
//	But at the very least it's easy to modify as a constant here!
double init_ymodulus() {


	return 1.;


}//end init_ymodulus




//The t = 0 stress tensor of the system (1D: only one entry)
/*
double init_stress(double x) {


	return init_ymodulus() * init_strain(x);


}//end init_stress
*/
