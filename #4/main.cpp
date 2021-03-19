#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int a;
    vector<int> b;
    while(cin >> a) {
        if(a == -1) break;
        b.push_back(a);
    }
    for(int i=b.size() - 1; i >= 0; --i) {
        cout << b[i] << endl;
    }
}