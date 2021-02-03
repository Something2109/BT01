#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

//BaiB13
/*int main() {
	int x, y;
	cin >> x >> y;
	cout << sqrt(x * x + y * y);
}*/

//BaiB14
/*int main() {
	int n;
	cin >> n;
	if (n > 50) {
		cout << "Choose that card";
	}
	else {
		cout << "Choose the other card";
	}
}*/

//BaiB15
/*string Fibonacci(int n) {
	switch (n) {
	case 1: {
		return "b";
		break;
	}
	case 0: {
		return "a";
		break;
	}
	default: {
		string str = Fibonacci(n - 1) + Fibonacci(n - 2);
		return str;
	}
	}
}
int main() {
	int n;
	cin >> n;
	cout << Fibonacci(n);
}*/

//BaiB16
/*int main() {
	int a, b, c;
	cin >> a >> b >> c;
	cout << ((a == b && b == c) ? "true" : "false");
}*/

//BaiB17
/*int main() {
	int n;
	cin >> n;
	if (n % 4 == 0) {
		if (n % 400 != 0) {
			cout << "false";
		}
		else {
			cout << "true";
		}
	}
	else {
		cout << "false";
	}	
}*/

//BaiB18
/*int main() {
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	cout << sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}*/

//BaiB19
/*int main() {
	int a, d, c;
	cin >> a >> d >> c;
	bool b = ((a < d) && (d < c)) || ((a > d) && (d > c));
	cout << b;
}*/

//BaiB20
/*int main() {
	int a, b;
	cin >> a >> b;
	cout << (((a % 7 == 0) && (b % 7 == 0)) ? "true" : "false");
}*/

//BaiB21
/*int main() {
	double a, b, c;
	cin >> a >> b >> c;
	double s = (a + b + c) / 2;
	cout << sqrt(s * (s - a) * (s - b) * (s - c));
}*/

//BaiB22
/*int main() {
	int weight;
	double height;
	cin >> weight >> height;
	cout << (weight / pow(height, 2));
}*/

//BaiB23
/*int main() {
	int a, b;
	cin >> a >> b;
	cout << (abs(a - b) + a + b) / 2;
}*/

//BaiB24
/*int dayMonthNumb(int m, int y) {
	int d = 0;
	switch (m) {
		case 4: case 6: case 9: case 11: {
			d = 30 + dayMonthNumb(m - 1, y);
			break;
		}
		case 2: {
			if (y % 4 == 0) {
				if (y % 400 != 0) {
					d = 28 + dayMonthNumb(m - 1, y);
					break;
				}
				else {
					d = 29 + dayMonthNumb(m - 1, y);
					break;
				}
			}
			else {
				d = 28 + dayMonthNumb(m - 1, y);
				break;
			}
		}
		case 0: {
			return 0;
			break;
		}
		default: {
			d = 31 + dayMonthNumb(m - 1, y);
		}
	}
}

int main() {
	long long d, m, y;
	cin >> d >> m >> y;
	long long dateNum = d + dayMonthNumb(m - 1, y) + (y - 1900) + (y)/4 - (y)/400 - 1;
	dateNum %= 7;
	switch (dateNum) {
	case 1: cout << "monday"; break;
	case 2: cout << "tuesday"; break;
	case 3: cout << "wednesday"; break;
	case 4: cout << "thursday"; break;
	case 5: cout << "friday"; break;
	case 6: cout << "saturday"; break;
	case 0: cout << "sunday"; break;
	}
}*/

//BaiC26
/*int main() {
	int n, min, max, mean = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		mean += a;
		if (i == 0) {
			max = a;
			min = a;
		}
		else {
			if (max < a) {
				max = a;
			}
			if (min > a) {
				min = a;
			}
		}
	}
	cout << "Mean: " << mean / n << endl;
	cout << "Max: " << max << endl;
	cout << "Min: " << min;
} */

//BaiC27
/*int main() {
	int n;
	cin >> n;
	while (n != -1) {
		if (n % 5 == 0 && n > 0) {
			cout << n / 5 << endl;
		}
		else {
			cout << -1 << endl;
		}
		cin >> n;
	}
	cout << "Bye";
}*/

//Bai28
/*int main() {
	for (int i = 0; i < 24; i++) {
		if (i == 0) {
			cout << i + 12 << " midnight" << endl;
			continue;
		}
		else {
			if (i < 12) {
				cout << i << "am" << endl;
				continue;
			}
		}
		if (i == 12) {
			cout << i << " noon" << endl;
		} 
		else {
			if (i < 24) {
				cout << i - 12 << "pm" << endl;
			}
		}
	}
}*/

//Bai29
/*int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j < i + 1) {
				cout << '*';
			}
			else {
				cout << ' ';
			}
		}
		cout << endl;
	}
}*/

//Bai30
/*int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j < n - i) {
				cout << '*';
			}
			else {
				cout << ' ';
			}
		}
		cout << endl;
	}
}*/
