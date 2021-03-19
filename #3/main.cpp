#include <iostream>
#include <vector>

using namespace std;

int main() {
    int count;
    vector<int> countTruk;
    cin >> count;
    for(int i=0;i<count;++i) {
        int p;
        cin >> p;
        countTruk.push_back(p);
    }
    for(int i=0;i<countTruk.size();++i) {
        printf("case #%d : bilang",(i+1));
        for(int j=0;j<countTruk[i];++j) {
            cout << " truk";
        }
        cout << endl;
    }
    return 0;
}
