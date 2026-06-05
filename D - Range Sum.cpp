#include <iostream>
#include <vector>
using namespace std;
 
int main() {
  int T;
  cin>>T;
  while(T>0){
    long long int L,R;
    cin>>L>>R;
    long long int a = min(L,R);
    long long int b = max(L,R);

    long long int sum = (a+b)*(b-a+1);
    sum = sum/2;
    cout<<sum<<endl;

    T--;
  } 
  return 0;
}
