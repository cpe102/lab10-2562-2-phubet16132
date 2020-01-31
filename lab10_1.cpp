#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;


int main (){
	
	string ent1="",ent2="",ent3="";
	
	srand(time(0));
	
	cout << "Press Enter 3 times to reveal your future.\n";
	
	int i=rand()%9;
	
	getline(cin,ent1);
	getline(cin,ent2);
	getline(cin,ent3);
	
	string g[9]={"A","B+","B","C+","C","D+","D","F","W"};
	
  	if(ent1=="" and ent2=="" and ent3==""){
  		
  		cout << "You will get " << g[i] << " in this 261102.";
  		
	  }
	
	
	
	
	
	return 0;
}






