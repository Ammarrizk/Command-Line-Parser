
#include  <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std ;
bool check_number(string str) {
int x = 0 ;

for (int i = 0; i < str.length(); i++) {
	if (int(str[i]) == 45)
		continue ;
else if (isdigit(str[i]) == false  )
	return false;
else x= 1 ;

}

if (x==1) return true ;
}
void print (int x , char * y []){
	int i  ;
	for(i=2 ;i<x ; i++)

		cout << y[i] << " " ;


}
void reverse (int z , char * m [] ){ if(z >=3) {int i ;
	for( i =z-1 ; i>=2 ; i--)
	 {cout << m[i] << " " ;}
}
else if (z==2) cout << "Incorrect Number of Arguments" ;
else { cout << m[3] ;
	}

}
void upper  (int k , char * y[]){


	for (int i = 2 ; i<k ; i++) {
		for (int k = 0 ; y[i][k] != '\0' ; k++) {

			y[i][k] = toupper (y[i][k]) ;
		}
		cout << y[i]<<" " ;
	}
}

void shuffle  ( char * y[]){
	int i;
	char s[50];
	int string_length ;

	strcpy(s, y[2]);
	string_length = strlen(s);
	if (  string_length % 2 == 0) {
		for(i=0; i<string_length; i=i+2)
			cout << s[i+1] << s[i] ; }

	else
	{
		for(i=0; i<string_length; i=i+2) {
			if (i == (string_length -1) )
				cout << s[i] ;
			else    cout << s[i+1] << s[i] ;  }
	}


}
void  shuffleStatement  (int k ,  char * y[]){
	int i;
	if (k %2==0 ) {
		for(i=2; i<k; i=i+2)
			cout << y[i+1] << " " << y[i] << " ";
	}
	else {
		for(i=2; i<=k; i=i+2) {
			if (i == (k -1) )
				cout << y[i] ;
			else    cout << y[i+1]<< " "<< y[i] << " " ;  }


	}

}
void  Deletee  (int k ,  char * y[]){
	int i, x ;


	x=stoi ( y[2] ) ;


	for (i =3 ; i<=k ; i++){
		if(i==x+2)
			continue ;
		else

			cout << y[i] << " " ;

	}
}
void  middle  (int k ,  char * y[]){
	if (k%2 == 0)
	{
		cout << y[(k/2)] <<" "<< y[k/2 +1] ;
	}
	else  {

		int y1 = k/2 +1 ;
		cout << y[y1];
	}
}

void  add  (int k ,  char * y[]){
	int sum = 0 ;
	for (int i=2 ; i<k ; i++){
if (!check_number(y[i])){
cout << "Incorrect Data Type";
return;
}
		sum +=stoi(y[i]) ;
	}
	cout << sum ;
}
void  random  (int k ,  char * y[]){
	int length = stoi(y[2]) ;
	int min = stoi (y[3]) ;
	int max = stoi (y[4]) ;
	int seed_value = stoi (y[5]) ;
	 if (min>=max) {  cout << "Incorrect Data Type" ; }
	 else {srand (seed_value) ;
		for (int i = 1 ; i <= length ; i++) {

			cout << rand()%(max-min+1)+min << " ";
		}}


}



int main( int arg_v , char * arg_n[] ) {


	if (!( strcmp (arg_n[1] , "print")))
	{ if (arg_v<3) cout << "Incorrect Number of Arguments"  ;
	else
		print (arg_v , arg_n) ; }


	else if  (!( strcmp (arg_n[1] , "reverse")))
	{
		reverse (arg_v , arg_n); }


	else  if (!( strcmp (arg_n[1] , "upper")))
	{if (arg_v<3) cout << "Incorrect Number of Arguments"  ;
	else  upper (arg_v , arg_n) ; }
	else  if (!( strcmp (arg_n[1] , "shuffle")))
	{ if (arg_v<3 || arg_v >3) cout << "Incorrect Number of Arguments"  ;
	else shuffle (  arg_n) ;
	 }

	else  if (!( strcmp (arg_n[1] , "shuffleStatement")))
	{ if (arg_v<3) cout << "Incorrect Number of Arguments"  ;
	else shuffleStatement ( arg_v , arg_n) ; }

	else  if (!( strcmp (arg_n[1] , "delete")))
	{

		if (arg_v>3  )
		{
			if (check_number(arg_n[2]))
			{ if (stoi(arg_n[2] )>0) {

				 int x =stoi (arg_n[2]) ;
							if (x < ((arg_v) -2 ))
								Deletee ( arg_v , arg_n) ;
							else
								cout << "Incorrect Number of Arguments"  ;
			}
			else

				cout<<"Incorrect Data Type "<<endl;
			}

			else
				cout<<"Incorrect Data Type "<<endl;
		}
		else  cout << "Incorrect Number of Arguments"  ;

	}

	else  if (!( strcmp (arg_n[1] , "middle")))
	{ if (arg_v>=3 ) 	middle ( arg_v , arg_n) ;
	else  cout << "Incorrect Number of Arguments"  ;
	}
	else  if (!( strcmp (arg_n[1] , "add")))
	{int x = 0 ;

	if (arg_v>2 )
	{ for (int h =2 ; h<arg_v ; h++ ) {
		if(check_number(arg_n[h]))
			x=1 ;
		else
			x=0 ;

	}
		 if ( x)
			add ( arg_v , arg_n) ;

		else
			cout<<"Incorrect Data Type "<<endl;
	}
	else  cout << "Incorrect Number of Arguments"  ;
	}
	else  if (!( strcmp (arg_n[1] , "random"))){


		if (arg_v>5)
		{
			if (check_number(arg_n[2]) &&check_number(arg_n[3])  &&check_number(arg_n[4])  &&check_number(arg_n[5]) || arg_n[2] == 0 )
			{
				int y = stoi (arg_n[2]) ;
				if(y >0)	random ( arg_v , arg_n) ;
			else {				cout<<"Incorrect Data Type "<<endl; }
			}

			else
				cout<<"Incorrect Data Type "<<endl;
		}
		else  cout << "Incorrect Number of Arguments"  ;


	}

	else { cout << "Undefined Command " ;}

	return 0 ;
}

