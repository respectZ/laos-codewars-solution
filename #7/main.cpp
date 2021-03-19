#include <iostream>
#include <vector>

using namespace std;

int main() {
    int count;
    vector<vector<int>> arr;
    cin >> count;
    for(int i=0;i<count;++i) {
        int a, b = 0;
        scanf("%d & %d",&a,&b);
        vector<int> temp;
        for(;a<=b;++a) temp.push_back(a);
        arr.push_back(temp);
    }
    for(auto x : arr) {
        for(int y=0;y<x.size();++y) {
            cout << x[y];
            if(y != x.size()-1) cout << " ";
        }
        cout << endl;
    }
}