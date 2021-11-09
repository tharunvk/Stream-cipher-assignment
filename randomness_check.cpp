#include<iostream>
#include<math.h>
#include<cstdlib>
using namespace std;

int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}
float sroot(int a){
	return sqrt(a);
}
int main(){
	int a,b;

	int prob[500];
	for(int i=0;i<500;i++){
		a=random();
		b=random();
		int res= gcd(a,b);
		if(res==1){
			prob[i]=1;
		}
		else{
			prob[i]=0;
		}
	}

	float final_prob=0;
	for(int i=0;i<500;i++){
		final_prob += prob[i];
	}
	final_prob= final_prob/500;

	cout<< "value of pi :"<<endl;
	float temp = 6/final_prob;
	cout<<sroot(temp);


}
