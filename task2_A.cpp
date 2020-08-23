#include <bits/stdc++.h> 
using namespace std; 
int maxbalancedprefix(string str, int n) 
{ 
    int sum = 0; 
    int maxi = 0;  
    for (int i = 0; i < n; i++) { 
        if (str[i] == '<') 
            sum += 1; 
        else
            sum -= 1; 
        if (sum < 0) 
            break; 
        if (sum == 0) 
            maxi = i + 1; 
    } 
    return maxi; 
}  
int main() 
{ 
   int t;
   cin>>t;
   while(t--)
   { 
   string s;
   cin>>s;
    int n = s.size(); 
    cout << maxbalancedprefix(s, n) << endl; 
}
    return 0; 
} 
