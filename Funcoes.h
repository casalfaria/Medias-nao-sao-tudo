#pragma once
#include <math.h>

//Funcao de probabilidade Normal

double normal_distribution_pdf(double x, double mu, double std_dev) {
	double fx;
	const double pi = 3.14159;
	const double e = 2.182818;
	
	fx = (1 / sqrt(2 * pi * std_dev * std_dev)) * exp(-0.5 * (((x - mu) / std_dev) * ((x - mu) / std_dev)));

	return fx;

}



//Funcao de distribuicao de probabilidade normal
double normal_distribution_std(double x) {

	double px = normal_distribution_pdf(x, 0, 1);

	return px;

}