/*
Consider an 'n'-element array, 'a', where each index 'i' in the array contains 
a reference to an array of 'k(i)' integers (where the value of 'ki' varies from 
array to array).

Given 'a', you must answer 'q' queries. Each query is in the format 'i j', where 'i' 
denotes an index in array 'a' and 'j' denotes an index in the array located at 'a[i]'. 
For each query, find and print the value of element 'j' in the array at location 
'a[i]' on a new line.

Input Format

The first line contains two space-separated integers denoting the respective values 
of 'n' (the number of variable-length arrays) and 'q' (the number of queries).
Each line 'i' of the 'n' subsequent lines contains a space-separated sequence in 
the format 'k a[i]0 a[i]1 … a[i]k-1' describing the 'k'-element array located at 'a[i]'.
Each of the 'q' subsequent lines contains two space-separated integers describing 
the respective values of 'i' (an index in array 'a') and 'j' (an index in the array 
referenced by 'a[i]') for a query.
*/

#include <vector>
#include <iostream>

using namespace std;

int main() {
    
    int n, q;
    cout << "Type the number of arrays to do followed by the number of queries." 
         << "\nLike this (2 2).\n--> ";
    cin >> n >> q;

    vector<int> v[n];
    
    cout << "\nNow, for every query (" << q << "), type the size of the array followed\n"
         << "by the elements in it.\nFor example (5 1 2 3 4 5)\n";
    for (int x = 0; x < q; x++) {
        int k;
        cout << "--> ";
        cin >> k;
        for (int y = 0; y < k; y++) {
            int ai;
            cin >> ai;
            v[x].push_back(ai);
        }
    }
    
    vector<int> vQ;
    
    cout << "\nLastly, for every query (" << q << "), type the index of the array (0 - "
         << q - 1 << ")\nfollowed by the index of the value you'd like to get.\n";
    for (int z = 0; z < q; z++) {
        int i, j;
        cout << "--> ";
        cin >> i >> j;
        vQ.push_back(v[i][j]);
    }
    
    cout << "\nHere are your results!" << endl;
    for (const int& a: vQ) cout << a << endl;
    
    return 0;
}