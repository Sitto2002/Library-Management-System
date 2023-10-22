#include <bits/stdc++.h>
using namespace std;

void check (string& str, string& str1, int n , int m){
	int i =0;
	for (int j=0; j<n; j++){
		switch (str1[j]) {

		 case 'R' :
		         if (str[i] == 'R' && i != m-1){
		          i++;
				 }  break;

		 case 'L' :
		         if (str[i] == 'L' && i != 0){
		          i--;
				  }  break;

		 case 'T' :
		         if (str[i] == 'T' && i < 9){
		          str[i]++;
				    }  break;

		 case 'D' :
		         if (str[i] == 'D' && i > 0){
		          str[i]--;
				 }  break;

		 case 'S' :
		         if (str[i] == 'S'){
		          swap (str1[i], str1[n-1]);
				 }  break;
		}
}	
	cout<<str1;
}

int main(){
	string str1 = "123456";
    string str = "RLTDRRTRS2S1";
	int m = str1.length();
	int n = str.length();
	check(str, str1, n, m);
	return 0;
}