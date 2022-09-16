#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
using namespace std;




float f(float x) {    
	   
	return 1/(x *log(x));

	
}

float Trap(float x0, float h, float x1) {             //Метод трапеций
	float x, s;
	s = (f(x0) + f(x1)) / 2;
	for (x = x0 + h; x < x1; x += h) {
		s += f(x);
	}
	cout << s * h<<endl;
	return s * h;
}

float Simpson(float x0, float h, float x1) {                //Метод Симпсона
	float x, s;
	int i, n;
	n = (x1 - x0) / h;
	s = (f(x0) + f(x1)) / 2 + 2 * f(x0 + h / 2);
	x = x0;
	for (i = 0; i < n - 1; i++) {
		x += h;
		s += (2 * f(x + h / 2) + f(x));
	}

	cout << s * h / 3<<endl;
	return s * h / 3;
	
}


void main()
{
	setlocale(LC_ALL, "ru");
	int d ;
	cout << "Введите x\n";
	cin >> d;
	f(d);
	int a, b, c;
	cout << "Введите значения для вычисления интеграла методом трапеций и методом Симпсона\n";
	cin >> a >> b >> c;
	cout << "Метод трапеции \n";
	Trap(a, b, c);
	cout << " \n";
	cout << "Метод Симпсона \n";
	Simpson(a, b, c);

	
}




