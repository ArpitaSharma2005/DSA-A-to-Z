//1.
/*
#include<bits/stdc++.h>
using namespace std;
void print(int n){
    for(int i = 0;i<n;i++){
        for(int j = 0; j<n; j++){
            cout << "*";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin>>n;
    print(n);
}*/

//2.
/*
 #include<bits/stdc++.h>
using namespace std;
void print2(int n){
    for(int i = 0;i<n;i++){
        for(int j = 0; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin>>n;
    print2(n);
}*/

//3.
/*
#include<bits/stdc++.h>
using namespace std;
void print(int n){
    for(int i = 1;i<=n;i++){
        for(int j = 1; j<=i; j++){
            cout << j <<" ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cout<<"Enter no. of rows: ";
    cin>>n;
    print(n);
}*/

//4.
/*
#include<bits/stdc++.h>
using namespace std;
void print4(int n){
    for(int i = 1;i<=n;i++){
        for(int j = 1; j<=i; j++){
            cout << i <<" ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cout<<"Enter no. of rows: ";
    cin>>n;
    print4(n);
}*/

//5.
/*
#include<bits/stdc++.h>
using namespace std;
void print(int n){
    for(int i = 1;i<=n;i++){
        for(int j = 0; j<n-i+1; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cout<<"Enter no. of rows: ";
    cin>>n;
    print(n);
}*/

//6.
/*
#include<bits/stdc++.h>
using namespace std;
void print6(int n){
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=n-i+1;j++){
			cout<< j << " ";
		}
		cout << endl;
	}
}
int main(){
	int n;
	cout<<"Enter the no. of rows: ";
	cin>>n;
	print6(n);
}*/

//7.
/*
#include<bits/stdc++.h>
using namespace std;
void print7(int n){
	for(int i=0;i<n;i++){
		//space 
		for(int j = 0;j<n-i-1;j++){
			cout<<" ";
		}
		//stars
		for(int j = 0;j<2*i+1;j++){
			cout<<"*";
		}
		
		//space
		for(int j = 0;j<n-i-1;j++){
			cout<<" ";
		}
		cout<<endl;
	}
}

int main(){
	int n;
	cout<<"Enter the no. of rows: ";
	cin>>n;
	print7(n);
}*/

//8.
/*
#include<bits/stdc++.h>
using namespace std;
void print8(int n){
	for(int i=0;i<n;i++){
		//space 
		for(int j = 0;j<i;j++){
			cout<<" ";
		}
		//stars
		for(int j = 0;j<2*n - (2*i+1);j++){
			cout<<"*";
		}
		
		//space
		for(int j = 0;j<i;j++){
			cout<<" ";
		}
		cout<<endl;
	}
}

int main(){
	int n;
	cout<<"Enter the no. of rows: ";
	cin>>n;
	print8(n);
}*/

//9.
/*
#include<bits/stdc++.h>
using namespace std;
void print9(int n){
	for(int i=0;i<=2*n-1;i++){
		int stars = i;
		if(i>n) stars = 2*n -i;
		for(int j = 1;j<=stars;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}

int main(){
	int n;
	cout<<"Enter the no. of rows: ";
	cin>>n;
	print9(n);
}*/

//10.
/*
#include<bits/stdc++.h>
using namespace std;
void print10(int n){
	int start = 1;
	for(int i = 0;i<n;i++){
		if(i%2 == 0) start = 1;
		else start = 0;
		for(int j = 0;j<i;j++){
			cout<<start;
			start = 1-start;
		}
		cout<<endl; 
	}
}

int main(){
	int n;
	cout<<"Enter the no. of rows: ";
	cin>>n;
	print10(n);
}*/

//11.
/*
#include<bits/stdc++.h>
using namespace std;
void print11(int n){
	int space = 2*(n-1);
	for(int i = 1;i<=n;i++){
		//numbers
		for(int j = 1;j<=i;j++)
		{
			cout<<j;
		}
		
		//space
		for(int j = 1;j<=space;j++){
			cout<<" ";
		}
		
		//numbers
		for(int j = i; j>=1;j--){
			cout<<j;
		}
		cout << endl;
		space -= 2;
	}
}
int main(){
	int n;
	cout<<"Enter the no. of rows: ";
	cin>>n;
	print11(n);
}*/

//12.
/*
#include<bits/stdc++.h>
using namespace std;
void print12(int n){
	int num = 1;
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=i;j++){
			cout << num << " ";
			num = num+1;
		}
		cout << endl;
	}
}
int main(){
	int n;
	cout<<"Enter the no. of rows: ";
	cin>>n;
	print12(n);
}*/

//13.
/*
#include<bits/stdc++.h>
using namespace std;
void print13(int n){
		for(int i = 0;i<n;i++){
			for(char ch = 'A';ch <= 'A'+i; ch++){
				cout<<ch<<" ";
			}
			cout<<endl;
		}
	}
int main(){
	int n;
	cout<<"Enter the no. of rows: ";
	cin>>n;
	print13(n);
}*/

#include<bits/stdc++.h>
using namespace std;
void print7(int n){
	for(int i=0;i<n;i++){
		//space 
		for(int j = 0;j<n-i-1;j++){
			cout<<" ";
		}
		//characters 
		char ch = 'A';
		int breakpoint = (2*i+1)/2;
		for(int j = 1; j<=2*i+1; j++){
			cout << ch;
			if(j <= breakpoint)
				ch++;
			else 
				ch--;
		}
		//space
		for(int j = 0;j<n-i-1;j++){
			cout<<" ";
		}
		cout<<endl;
	}
}

int main(){
	int n;
	cout<<"Enter the no. of rows: ";
	cin>>n;
	print7(n);
}
