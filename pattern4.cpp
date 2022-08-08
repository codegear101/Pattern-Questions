// program to draw a pattern of inverted pyramid with stars the no. of n were given by the user
//          *
//        * *
//      * * *
//    * * * *
//  * * * * *
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(j<=n-i){
				cout<<"  ";
			}
			else{
				cout<<"* ";
			}
		}
		cout<<endl;
	}
	return 0;
}
