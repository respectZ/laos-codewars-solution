#include <iostream>
using namespace std;
int main() {
  int coun;
  cin >> coun;
  int arr[coun];
  for(int i=0;i<coun;++i) {
    cin >> arr[i];
  }
  for(int i=0;i<coun;++i) {
    //rumus : n/2(a+un)
    int p = arr[i]*(1+arr[i])/2;
    printf("case #%d : %d\n",(i+1),p);
  }
  return 0;
}