#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

int main() {
    
    string s;
    cin >> s;
    
    stringstream ss(s);
    vector<int> v;
    
    while (ss.good())
    {
        char ch;
        int n;
        ss >> n >> ch;
        v.push_back(n);
    }
    
    for (const int& i : v) cout << i << endl;
    
    return 0;
}