// program to draw a pattern of ractangle with stars the no. of rows and columns were given by the user
//  * * * * *
//  * * * * *
//  * * * * *
//  * * * * *
//  * * * * *

#include <iostream>
using namespace std;
int main(){
	int rows,columns;
	cin>>rows>>columns;
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=columns;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
