#include <iostream>
#include <climits>
#include <limits>
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

int main(){
	int n;
	string s;
	cin>>n;
	cin>>s;
	int x = 0, max_ = 0;
	int i = 1;
	while(i<=n){
		if(s[i-1] == 'I') x++;
		else x--;
		max_ = max(max_, x);
		i++;
	}	

	cout<<max_;
	return 0;
}