// Lab 5_1
#include <iostream> 
#include <cmath>
#include <iomanip>
using namespace std;
double h(const double x, const double y, const double z);

int main(){
	double a, b;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;

	double c = (h(a * a, 1, b) + h(b, 1, a * a)) / h(1, a * b, 1);
	cout << "c = " << setprecision(100) << c << endl;

	system("pause");
	cin.get();

	return 0;
}
double h(const double x, const double y, const double z) 
{
	return (x + y + z) / (x * x + y * y);
}
