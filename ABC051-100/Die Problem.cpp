#include <iostream>
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
#include <climits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
 
using namespace std;

int main(){
	
	long long int x;
	cin>>x;

	long long int ans = (x/11) * 2;

	if(x%11 == 0) {
		cout<<ans;
		return 0;
	}


	ans += (x%11 > 6) ? 2 : 1;

	cout<<ans;

	return 0;

}