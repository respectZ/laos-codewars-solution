#include <regex>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
#include <iostream>


using namespace std;

bool isPalindrome(string str) {
    int start = 0;
    int startB = str.length() - 1;
    bool res = true;
    while(start < startB) {
        if(str[start] != str[startB]) {
        res = false;
        break;
        }
        start++;
        startB--;
    }
    return res;
}

int main()
{
    int count;
    cin >> count;
    vector<bool> res;
    for(int i=0;i<count;++i) {
        string p;
        cin >> p;
        transform(p.begin(), p.end(), p.begin(),
    [](unsigned char c){ return tolower(c); });
        p = regex_replace(p, regex(R"([^A-Za-z\d])"), "");
        p = regex_replace(p, regex(R"([\d])"), "");
        res.push_back(isPalindrome(p));
    }
    for(bool x : res) {
        cout << x << endl;
    }
}