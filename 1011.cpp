# include <iostream>
#include<iomanip>
using namespace std;
int main(){
	float a,b;
	cin>>a>>b;
	cout<<fixed<<setprecision(3)<<b/a*100<<"%";
	return 0;
}
