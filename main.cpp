#include <iostream>
//#include <stdio.h>//
#include <gsl/gsl_sf_bessel.h>

int main( ) {
    double x=8.0;
    double y= gsl_sf_bessel_J0(x);
    printf("J0(%g)=%.18e\n",x,y);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
