#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>

using namespace std;

string geser(string str) {
    vector<int> pattern = {0, 1, 2, 0, 2, 3, 1, 3, 4, 2, 4, 5, 3, 5, 6, 4, 6, 7, 5, 7};
    int pos = 0;
    for(char& i : str) {
        if(i != ' ') {
            i -= 97;
            i = i + pattern[pos];
            i = i % 26;
            i += 97;
        }
        ++pos;
    }
    return str;
}

int main() {
    int count;
    vector<string> str;
    cin >> count;
    //fix
    cin.ignore (numeric_limits<streamsize>::max(), '\n'); 
    for(int i=0;i<count;++i) {
        string p;
        getline(cin, p);
        str.push_back(geser(p));
    }
    for(int i=0;i<count;++i) {
        printf("case #%d: %s\n",(i+1),str[i].c_str());
    }
}