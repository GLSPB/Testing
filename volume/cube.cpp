#include <iostream>

using namespace std;
int i;
void cheers(int n){
for ( i == 0; i < n; i++)
cout << "Cheers! ";
cout << endl;
}

double cube(double x) {
return x * x * x;
}

int main() {
double side;
cout << "Give me a number: ";
cin >> side;
double volume = cube(side); // вызов функции
cout << "A " << side << "-foot cube has a volume of ";
cout << volume << " cubic feet.\n";
cheers (cube(3));
return 0;
}