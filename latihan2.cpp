#include <iostream> 
using namespace std;

//prototype
int double_it(int *x, int *y);
int triple_it(int *x, int *y);

    
int main ()  {
   int x, y;
    
    cout << "Masukan 2 angka (pisahkan dengan spasi ex: 1 2):" << endl;
    cin >> x >> y;
    cout << "sebelum melewati fungsi double_it" << endl;
    cout << "x \t = \t " << x << endl;
    cout << "y \t = \t " << y << endl;
    
    double_it(&x, &y);
    cout << "setelah melewati fungsi double_it" << endl;
    cout << "x \t = \t " << x << endl;
    cout << "y \t = \t " << y << endl;
    
    double_it(&x, &y);
    cout << "setelah melewati fungsi trible_it" << endl;
    cout << "x \t = \t " << x << endl;
    cout << "y \t = \t " << y << endl;
    
    double_it(&x, &y);
    cout << "setelah melewati fungsi for_it" << endl;
    cout << "x \t = \t " << x << endl;
    cout << "y \t = \t " << y << endl;
    
return 0;

    
}

int double_it(int *x, int *y){
   *x *= 2;
   *y *= 2;
    
return 0;
}

