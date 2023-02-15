#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
    //sqrt(2) times sqrt(2) = 2;
    double x = sqrt(2);
    double y = 2.0;
    double EPSILON = 1e-14;
    if (x*x == y){
        cout << "sqrt(2) * sqrt(2) is 2.0" << endl;
    }
    else{
        cout << "sqrt(2) * sqrt(2) is not 2.0 but " << fixed << setprecision(18) << x*x << endl;
    }
    if (abs(x*x - y) < EPSILON){
        cout << "approximate 2" << endl;
    }
    return 0;
}
