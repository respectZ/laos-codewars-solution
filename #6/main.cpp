#include <iostream>
#include <vector>

using namespace std;

int main() {
    int count;
    vector<string> res;
    cin >> count;
    for(int i=0;i<count;++i) {
        int p;
        cin >> p;
        string t = p <= 5 ? "balita" : p <= 12 ? "anak-anak" : p < 18 ? "remaja" : "dewasa";
       res.push_back(t);
    }
    for(auto x : res) cout << x << endl;
}