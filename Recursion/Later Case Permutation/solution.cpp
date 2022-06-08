#include <bits/stdc++.h>
using namespace std;

void solve(string ip, string op, vector<string> &v){
	if (ip.length() == 0){
		v.push_back(op);
		return;
	}
	
	string op1 = op;
	string op2 = op;
	
	if (ip[0] == '1'){
		op1.push_back(ip[0]);
		op2.push_back(ip[0]);
	}else{
	
		op1.push_back(ip[0]);
		op2.push_back(toupper(ip[0]));
	}
	
	ip.erase(ip.begin()+0);
	
	solve(ip, op1);
	solve(ip, op2);

	return;
}


int main(){
	string ip;
	cin >> ip;
	string op = "";
	solve(ip, op);
	return 0;
}