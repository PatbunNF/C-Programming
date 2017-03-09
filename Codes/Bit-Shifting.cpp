#include <iostream>

using namespace std;

void testbit(int d){
     int x = (1<<3);
     int a = (d & 1);
     cout << "Test Shift : " << d << endl;
     cout << "Test Bit 3 = 1 : " << ((d & x)==x) << endl;
     (a==1)?(cout << "Odd"):(cout << "Even");
     cout << endl;
}

int main(){
    testbit(68);
    
    system("pause");
    return 0;
}
