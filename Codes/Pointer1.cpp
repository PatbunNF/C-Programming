#include <iostream>

using namespace std;

int main(){
    char* p;
    string s = "Hello World!";
    p = &s[s.size()-1];
    for(int i=0; i<s.size(); i++)
        cout << *(p--);
}
