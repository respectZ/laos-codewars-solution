#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;
int main() {
  int count;
  vector<vector<int>> str;
  vector<vector<int>> key;
  cin >> count;
  for(int i=0;i<count*2;++i) {
	string a;
	vector<int> vec;
    cin >> a;
    char char_arr[a.length() + 1];
    strcpy(char_arr, a.c_str());
    for(int j=0;j<a.length();j++) {
        int p = char_arr[j];
        p -= 97;
        vec.push_back(p);
    }
    if(i%2 == 0)
    str.push_back(vec);
    else
    key.push_back(vec);
  }
  
  for(int i=0;i<count;++i) {
      printf("case #%d: ",(i+1));
      for(int j=0;j<str[i].size();++j) {
          char p = (str[i][j] + key[i][j]) % 26 + 97;
          cout << p;
      }
      cout << endl;
  }
  
  return 0;
}
