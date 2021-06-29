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

int main(){
	string s;
	cin>>s;
	int start = 0, end = 0, maxLen = 0;
	bool flag = false;
	while(end < s.size()){
		if(s[end] == 'A' && !flag){
			start = end;
			flag = true;
		}

		if(s[end] == 'Z'){
			maxLen = max(maxLen, end - start + 1);
		}

		end++;
	}

	cout<<maxLen;

	return 0;
}