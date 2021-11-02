#include<iostream>
using namespace std;

int main()

  {
    int n , m ;
  cout << " n = " ;
  cin >> n ;
  cout << " m = " ;
  cin >> m ;
  for (int i = 0 ; i<n ; i++ )
  {
      for (int j = 0 ; j<m ; j++)
      {
          if (j % 2 == 0 )
          {
              cout << " @ " ;
          }
          else
          {
              cout << " $ " ;
          }
      }
       cout << endl ;
  }
  }
