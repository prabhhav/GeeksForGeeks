#include <bits/stdc++.h> 
using namespace std; 
  
bool isPerfectSquare(long double x) 
{   
  // Find floating point value of  
  // square root of x. 
  long double sr = sqrt(x); 
  
  // If square root is an integer 
  return ((sr - floor(sr)) == 0); 
} 
  
int main() { 
  long double x = 2500; 
  if (isPerfectSquare(x)) 
    cout << "Yes"; 
  else
    cout << "No"; 
  return 0; 
}