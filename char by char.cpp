#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// A CODE TO READ FROM FILE CHAR BY CHAR AND
// IF FIND '-' IT WILL PUT ' ' IN ITS SAME POSITION

int main () {

ifstream myfile("gagm.txt");
char a[80];
static int i =0 ; 
char c ; 
while(!myfile.eof() ){
		myfile >>c;

		if (c =='-' ){
			
			cout<<" ";
				a[i]=' ';
					i++; }
		else{
			
			cout << c ;
			a[i]=c;
			i++; }
}
cout <<endl ;
for (int j=0;j<i;j++)
cout <<a[j];
}
