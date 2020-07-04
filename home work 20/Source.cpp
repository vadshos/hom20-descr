#include <iostream>
#include <math.h>
#include <ctime>
#include <cstdlib>

using namespace std;


float square(float number, float number2, float number3) {
	int D = (number * number) - 4 * number * number3;
	srand(time(NULL));
	float j = 0;
	float result = 0;
	for (int i = 0; i < 100; i++) {

		j = rand() % 100;
		if (j * j == D) {
			result = j;
		}
	}
	return result;
	
}
float X1(float number, float number2, float number3, float D) {
	int x1 = (-number2 + D)/2*number  ;
	return x1;
}
float X2(float number, float number2, float number3, float D) {
	int x2 = (-number2 - D) / 2 * number;
	return x2;
}


int main() {
	float a = 0;
	cout << "enter number->";
	cin >> a;
	float b = 0;
	cout << "enter number->";
	cin >> b;
	float c = 0;
	cout << "enter number->";
	cin >> c;
	float result1 = 0;
   float result2 = 0;
   float desc = 0;

   desc = square(a, b, c);
   result1 = X1(a, b, c, desc);
   result2 = X2(a, b, c, desc);
   cout << "X1 = " << result1 << endl;
   cout << "X2 = " << result2 << endl;

}