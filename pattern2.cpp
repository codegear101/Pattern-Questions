// program to draw a pattern of  hollow ractangle with stars the no. of rows and columns were given by the user
//  * * * * *
//  *       *
//  *       *
//  *       *
//  *       *
//  * * * * *


#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int rows,columns;
	cin>>rows>>columns;
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=columns;j++){
			if(i==1||i==rows){
			
			cout<<"*";
		}
		else{
			if(j==1||j==columns){
				cout<<"*";
				
			}
			else{
				cout<<" ";
			}
		}
		}
		cout<<endl;
	}
	return 0;
}
