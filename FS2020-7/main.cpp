#include <iostream>
#include <string>
#include <vector>
using namespace std;

int div13Calc(int n) {
    int pos = 0;
    int res = 0;
    vector<int> key = {1, 10, 9, 12, 3, 4};
    string b = to_string(n);
    for(int i=b.length()-1;i>=0;--i) {
        string s(1, b.at(i));
        int p = stoi(s);
        res += p * key[pos];
        //cout << p * key[pos] << endl;
        ++pos;
        if(pos > 5) pos = 0;
    }
    return res;
}

int div13Rule(int n) {
    int p = div13Calc(n);
    do {
        p = div13Calc(p);
    } while(p != div13Calc(p));
    return p;
}

int main() {
    int count;
    vector<int> res;
    cin >> count;
    for(int i=0;i<count;++i) {
        int p;
        cin >> p;
        res.push_back(div13Rule(p));
    }
    int p = 1;
    for(int& x : res) {
        printf("case #%d: %d\n",p,x);
        ++p;
    }
return 0;
}