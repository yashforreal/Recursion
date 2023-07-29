#include <iostream>
using namespace std;
int findIndex(string &s, char &key, int n, int i) {
  if (i >= n)
    return -1;
  if (s[i] == key)
    return i;
  return findIndex(s, key, n, i + 1);
}

int main() {
  string s = "yash aswani";
  char key = 'a';
  cout << "index for " << key << " is " << findIndex(s, key, s.size(), 0)
       << endl;
  return 0;
}