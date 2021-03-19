#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;



int main() {
    int count;
    cin >> count;
    vector<int> res;
    for(int i=0;i<count;++i) {
        int mC;
        vector<int> temp;
        cin >> mC;
        for(int j=0;j<mC;++j) {
            int p;
            cin >> p;
            temp.push_back(p);
        }
        map<int, int> dups;
        int tempNumber, tempCount = 0;
            for(int i : temp)
                ++dups[i];
            for(auto& dup : dups) {
                if(dup.second >= tempCount) {
                    tempNumber = dup.first;
                    tempCount = dup.second;
                }
            }
        res.push_back(tempNumber);
    }
    
    for(int i=0;i<count;++i) {
        printf("Case #%d : %d\n",(i+1),res[i]);
    }
}