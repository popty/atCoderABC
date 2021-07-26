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
	int n;
	
	cin>>n;
	vector<int> arr(n);
	
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}

	int start = -1, end = -1, count = 0;
	bool flag = false;
	for(int i = 1; i<n; i++){
		if(arr[i] < arr[i-1]) {
			if(!flag){
				start = i-1;
				flag = true;
			}
			end = i;
		}

		else if(flag){
			count++;
			if(count > 1){
				cout<<"no"<<endl;
				return 0;
			}
			flag = false;
		}

	}

	if(count == 1) {
		cout<<"yes"<<endl;
		cout<<(start+1)<<" "<<end+1<<endl;
		return 0;
	}

	if(count == 0){
		cout<<"yes"<<endl<<1<<" "<<1<<endl;
		return 0;
	}

	return 0;

}