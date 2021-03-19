#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool isSpecial(int n) {
    vector<int> r;
    while(n != 0) {
        int digit = n % 10;
        r.push_back(digit);
        n /= 10;
    }
    sort(r.begin(), r.end());
    auto it = adjacent_find(r.begin(), r.end());
    if(it != r.end()) return false;
    return true;
}

int main() {
    int count;
    cin >> count;
    vector<int> t;
    for(int i=0;i<count;++i) {
        int p;
        cin >> p;
        t.push_back(p);
    }
    int n = 1;
    for(auto& i : t) {
        do {
            ++i;
        } while(!isSpecial(i));
        printf("case #%d: %d\n",n,i);
        ++n;
    }
    return 0;
}