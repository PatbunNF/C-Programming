#include <iostream>

using namespace std;

int fac(int d){
    int i, r=1;
    for(int i=1; i<=d; i++){
            r = r*i;
    }
    return r;
}

int main(){
    cout << fac(5) << endl;
    
    system("pause");
    return 0;    
}
