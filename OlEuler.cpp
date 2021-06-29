#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

double ComputeE(int val);
int FactorialNum(int val);

int main(){
	string str;
	int num = 0.0;
    double rv = 0.0;
    
	getline(cin,str);
	
	num = stoi(str);
	
	rv = ComputeE(num);
	cout << setprecision(17) <<  rv << endl;
	
	return 0;
}

double ComputeE(int val){
	int i = 0;
	double rv = 1;
	
	while(i < val){
		  rv = rv + 1.0/static_cast<double>(FactorialNum(i));
		i++;
	}
	
	return rv;
}

int FactorialNum(int val){
	int rv = 1;
	int i = val;
	
	while(i > 0){
		rv = rv + rv * i;
		i--;
	}
    
	return rv;
}
