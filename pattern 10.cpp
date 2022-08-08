// 0-1 pattern
// 1 
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
 	for(int i=1;i<=n;i++){                              //rows from 1 to n
		for(int j=1;j<=i;j++){                      // column from 1 to row no.
		    if((i+j)%2==0){
			 cout<<"1 ";                                           // elements (row no.+ col no.)=even print 1 else 0
		}
		else{
			cout<<"0 ";
		}		
		}
		cout<<endl;
	}
	return 0;
}
