// Write a C program that takes a string input from the user and reverses the string. Initialize a Git repository, commit
// your changes, and push the repository to GitHub. Share the repository link.
  
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    cout << s;

    return 0;
}