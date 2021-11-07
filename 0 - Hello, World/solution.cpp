/*
 * Author: Irfan Shaikh
 *  
 * Problem: https://www.hackerrank.com/challenges/30-hello-world/problem
 */

#include <iostream>
using namespace std;

int main() {
    
    string s {};
    getline(cin, s);
        
    cout << "Hello, World." << endl;
    cout << s;
    
    return 0;
}
