#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>

#include <map>
using namespace std;

vector<int> factor(int n) {
    vector<int> res;
    while(n % 2 == 0) {
        n /= 2;
        res.push_back(2);
    }
    for(int i=3;i<=sqrt(n);i+=2) {
        while(n % i == 0) {
            n /= i;
            res.push_back(i);
        }
    }
    if(n > 2) res.push_back(n);
    return res;
}

string factorResult(vector<int> arr) {
    std::map<int, int> dups;
    string res;
    for(int i : arr)
        ++dups[i];
    for(auto& dup : dups) {
        string fact;
        if(dup.second > 1) {
            fact = to_string(dup.first) + "^" + to_string(dup.second);
        } else {
            fact = to_string(dup.first);
        }
        res = res + "*" + fact;
    }
    res.erase(0,1); // remove first *
    return res;
}

int main() {
    int count;
    vector<vector<int>> resF;
    cin >> count;
    for(int i=0;i<count;++i) {
        int p;
        cin >> p;
        vector<int> res = factor(p);
        resF.push_back(res);
    }
    for(int i=0;i<count;++i) {
        printf("case #%d: %s\n",(i+1),factorResult(resF[i]).c_str());
    }
    return 0;
}