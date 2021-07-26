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



int solve(int n){
	if(n == 1){
		return 1;
	}

	if( n < 5){
		return 2;
	}

	int sum = 4, maxV = 3, count = 2;

	while(sum < n){
		maxV+=2;
		sum+=maxV;
		count++;
	} 

	return count;
}


int main(){
	int T;
	cin>>T;
	while(T-- >0){
		int n;
		cin>>n;
		cout<<solve(n)<<endl;
	}
}