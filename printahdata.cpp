#include <iostream>

using namespace std;
class printData { public:
void print (int i) {
cout << "printing int: " << i << endl; }

void print (double f) {
cout << "printing float: " << f << endl; }

void print (string c) {
cout << "printing character: " << c << endl; }
} ;

int main (void) {
printData pd;
	
	pd.print (5);
	pd.print (500.263);
	pd.print ("Hello C++");

return 0;
}