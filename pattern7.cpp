// print butterfly pattern
// *             *
// * *         * *
// * * *     * * *
// * * * * * * * *
// * * * * * * * *
// * * *     * * *
// * *         * *
// *             *
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
			int n;
			
	cin>>n;
	for(int i=1;i<=n;i++){                   // loop will work from 1 to n
		for(int j=1;j<=i;j++){               // no of * will be equal to no. of rows
			cout<<"* ";                // 2*n-2*row no. for space
		}
		int space=2*n-2*i;
		for(int j=1;j<=space;j++){
			cout<<"  ";
		}
		for(int j=1;j<=i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}	
	for(int i=n;i>=1;i--){                 
		for(int j=1;j<=i;j++){              
			cout<<"* ";               
		}
		int space=2*n-2*i;
		for(int j=1;j<=space;j++){
			cout<<"  ";
		}
		for(int j=1;j<=i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}	
	return 0;
}
