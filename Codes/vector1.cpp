#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    char c[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd'};
    bool found = false;

    vector<char> v(c, c+11);
    sort(v.begin(), v.end());
    found = binary_search(v.begin(), v.end(), 'F');
    if(found)
        cout << "Found!";
    else
        cout << "Not found...";
}
