#include <iostream>
#include <complex>

using namespace std;


complex<double> func(double y){

	complex<double> ii = complex<double>(0, 1);
	complex<double> z = tan(y*(1.0+ii));

	return z;

}

int main(){

	int N = 100;
	double phi = -3;
	complex<double> x;
	complex<double> p[N];
	double dphi = 6.0/(N-1);


	for(int k = 0; k<=N; k++){
//		x = complex<double>(0, phi);
//		p[k] = exp(x);
		p[k] = func(phi);
		phi = k*dphi - 3;
	}

	for(int k = 0; k<=N; k++)
		cout << k*dphi - 3 <<
		"\t" << real(p[k]) <<
		"\t" << imag(p[k]) <<
		"\t" << abs(p[k]) << endl;

	return 0;
}
