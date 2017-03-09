#include <iostream>

using namespace std;

int gcd(int a, int b){
    return b==0 ? a : gcd(b, a%b);
}

int lcm(int a, int b, int c){
    return abs(a*b/c);
}

int main(){
    int c = gcd(10, 3);
    int d = lcm(10, 3, c);
    cout << "GCD : " << c << endl << "LCM : " << d << endl;
    
    system("pause");
    return 0;       
}
