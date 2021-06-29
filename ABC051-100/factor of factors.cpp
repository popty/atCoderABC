#include <iostream>
#include <climits>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <deque>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
 
using namespace std;

typedef long long ll;
ll mod = 1000000007;

void seive(vector<bool>& isPrime, int N){
	isPrime[1] = false;
	for(int i = 2; i*i<=N; i++){
		if(isPrime[i]){
			for(int j = i*2; j<=N; j+=i){
				isPrime[j] = false;
			}
		}
	}
	return;
}

ll expFactor(int N, int p){
	int exponent = 0;
	int x = p;
	while(N/x > 0){
		exponent +=N/x;
		x*=p;
	}
	return exponent;
}



int countFactors(int N){
	ll ans = 1;
	vector<bool> isPrime(N+1, true);
	seive(isPrime, N);

	for(int p = 1; p<=N; p++){
		if(isPrime[p]){
			ans= (ans*(expFactor(N, p) +1))%mod;
		}
	}

	return ans%mod;
}


int main(){

	int N;
	cin>>N;
	int zero;
	cout<<countFactors(N)<<endl;
	return 0;
	
}