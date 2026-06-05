#include <iostream>
#include <vector>
using namespace std;
 
int main() {
  int N,M;
  cin>>N>>M;
  int n1 = N % 10;
  int n2 = M % 10;
  cout<<n1+n2; 
  return 0;
}
