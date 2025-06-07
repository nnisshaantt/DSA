#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void generateBinaryString(int n, string s){
    if(n==0){
        cout<<s<<"\n";
    }
    else {
        generateBinaryString(n-1,s+"0");
        generateBinaryString(n-1,s+"1");
    }
}

int main() {
    generateBinaryString(10,"");
    return 0;
}