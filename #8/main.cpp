#include <iostream>
#include <vector>


using namespace std;



int main() {
    int count;
    vector<int> arr;
    cin >> count;
    for(int i=0;i<count;++i) {
        int p;
        cin >> p;
        arr.push_back(p);
    }
    for(auto x : arr) {
        for(int i=0;i<x;++i) {
            for(int j=i+1;j>0;--j) {
                cout << j << " ";
            }
            cout << endl;
        }
    }
}