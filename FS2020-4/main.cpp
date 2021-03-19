#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>

using namespace std;

bool isEqual(string a, string b) {
    vector<char> v1 = {'A', 'C', 'E', 'G'};
    //vector<char> v2 = {'B', 'D', 'F', 'H'};
    //jadi kalo dalam v1, berarti harus sama ganjil / genap
    //kalo v1 sama v2, berarti harus beda 
    auto itA1 = binary_search(v1.begin(), v1.end(), a[0]);
    auto itB1 = binary_search(v1.begin(), v1.end(), b[0]);
    //angka
    bool itAB, itBB = false;
    string tempA(1, a[1]);
    string tempB(1, b[1]);
    int tempAA = stoi(tempA);
    int tempBA = stoi(tempB);
    itAB = tempAA % 2 == 0 ? true : false;
    itBB = tempBA % 2 == 0 ? true : false;
    
    //itab true = genap
    if(itA1 == itB1) {
        //same type
        if(itAB == itBB) {
            return true;
        }
    } else {
        if(itAB != itBB) {
            return true;
        }
    }
    return false;
}

int main() {
    int count;
    vector<string> str;
    cin >> count;
    for(int i=0;i<count*2;++i) {
        string p;
        cin >> p;
        str.push_back(p);
    }
    int n = 1;
    for(int i=0;i<count*2;i+=2) {
        string res;
        bool c = isEqual(str[i], str[i+1]);
        res = c ? "True" : "False";
        printf("case #%d: %s\n",(n),res.c_str());
        ++n;
    }
    return 0;
}