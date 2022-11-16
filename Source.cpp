#include <iostream>
#include <ctime>
using namespace std;
/*double powerA3(double a) {
	//double res = a*a*a;
	//return res;
	return a*a*a;
}*/
/*double powerA2(double a) {
	return a*a;
}
double powerA4(double a) {
	return a*a*a*a;
}*/
/*double aMean(double x, double y) {
	return(x + y) / 2;
}
double gMean(double x, double y) {
	return sqrt(x*y);
}*/
/*double triagleP(double a) {
	return a * 3;
}
double triagleS(double a) {
	return a * a * sqrt(3) / 4;
}*/
double rectP(double x1, double x2, double y1, double y2) {
	return 2 * (abs(x2 - x1) + abs(y2 - y1));
}
double rectS(double x1, double x2, double y1, double y2) {
	return abs(x2 - x1) * abs(y2 - y1);
}

int main() {
	/*srand(time(nullptr));
	for (int i = 1; i <= 5; i++) {
		double x = rand() % 11;
		double x3 = powerA3(x);
		cout << "x= " << x << " x^3= " << x3 << endl;
	}*/
	/*srand(time(nullptr));
	for (int i = 1; i <= 5; i++) {
		double x = rand() % 11;
		double x2 = powerA2(x);
		double x4 = powerA4(x);
		cout << "x= " << x << " x^2= " << x2 << endl;
		cout << "x= " << x << " x^4= " << x4 << endl;
}*/
	/*for (int i = 1; i <= 10; i++) {
		double x1 = rand() % 101 * 0.1;
		double y1 = rand() % 101 * 0.1;
		cout << "x1= " << x1 << " y1= " << y1 << " sr_arifm = " << aMean(x1, y1) << " sr_geom = " << gMean(x1, y1);
	}*/
	/*double a;
	for (int i = 1; i <= 5; i++) {
		cin >> a;
		cout << " P = " << triagleP(a) << " S = " << triagleS(a);
	}*/
	double d;
	for (int i = 1; i <= 5; i++) {
		cin >> d;
		cout << " P = " << rectP(d) << " S = " << rectS(d);
	}
	system("pause");
}