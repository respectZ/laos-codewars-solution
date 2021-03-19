#include <iostream>
#include <vector>
using namespace std;
int fibonaci(int n) {
    if(n - 2 < 1) return 1;
    n -= 2;
    int a = 1;
    int b = 1;
    while(n > 0) {
        --n;
        int c = b;
        b += a;
        a = c;
    }
    return b;
}
int main() {
    int count;
    vector<int> res;
    cin >> count;
    for(int i=0;i<count;++i) {
        int p;
        cin >> p;
        res.push_back(fibonaci(p));
    }
  for(auto x : res) {
      cout << x << endl;
  }
return 0;
}