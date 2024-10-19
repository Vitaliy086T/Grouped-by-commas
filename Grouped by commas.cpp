#include <iostream>
#include <string>
using namespace std;

int main(){
  int n; // 0 <= n <= 2147483647
  cin >> n;
  string s = to_string(n);
  for(int i = s.size(); i > 0; i--){
    if(i % 3 == 0 and i != s.size()){
      cout << ",";
    }
    cout << s[s.size() - i];
  }
  return 0;
}