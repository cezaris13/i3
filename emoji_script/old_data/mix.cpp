#include <bits/stdc++.h>

using namespace std;
int main(){
	freopen("clean_emojis.txt","r",stdin);
	ifstream fd("emoji-test-final.txt");
	freopen("rez.txt","w",stdout);
	ofstream fr("ans.txt");
	map<string,string> listas;
	string a,b;
	while(!cin.eof()){
		string temp;
		getline(cin,temp);
			if(listas.count(temp.substr(0,temp.find(' ')))==0){
                listas[temp.substr(0,temp.find(' '))]=temp;
            }
	}	
	while(!fd.eof()){
		string temp;
		getline(fd,temp);
			if(listas.count(temp.substr(0,temp.find(' ')-3))==0){
                listas[temp.substr(0,temp.find(' ')-3)]=temp;
            }
	}
	for(map<string,string>::iterator it=listas.begin();it!=listas.end();++it){
		cout<<it->second<<endl;
	}
	return 0;
}
