#include<bits/stdc++.h>
using namespace std;

//  .\hashing.exe < input.txt > output.txt
//------------------[Hashing using Fixed-Size Array for Integers]---------------------
/*
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    //precompute
    int hash[13] = {0};
    for(int i = 0;i<n;i++){
        hash[arr[i]] += 1;
    }

    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        //fetch
        cout << hash[number] << endl;
    }
    return 0;
}*/
//------------------[Hashing Characters in a String Using ASCII Array]----------------
/*
int main(){
    string s;
    cin >>s;
    
    //precompute
    int hash[256] = {0};
    for(int i = 0;i<s.size();i++){
        hash[s[i]]++;
    }
    int q;
    cin >> q;
    while(q--){
        char c;
        cin >> c;

        //fetch
        cout << hash[c] << endl;
    }
    return 0;
}*/

//--------------------Frequency Hashing Using map<int, int> for Dynamic Integer Input-----------------
/*
int main(){
    int n;
    cin >> n;
    int arr[n];
    map<int,int> mpp;
    for(int i = 0; i<n; i++){
        cin >> arr[i];
        mpp[arr[i]]++;
    }
    //precompute
   
    //iterate in the map
    // for(auto it : mpp){
    // cout << it.first << "->" << it.second << endl;
    // }

    int q;
    cin>>q;
    while(q--){
        int number;
        cin >> number;
        //fetch
        cout << mpp[number] << endl;
    }
    return 0;
}*/

//------------------------/*find the highest/ lowest frequency element*/----------------------