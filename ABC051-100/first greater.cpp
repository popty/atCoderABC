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
	
	vector<int> nums = {7, 3, 2, 6, 11, 9, 8, 10, 3};


	/*
		11
		10
		

	*/

	for(int i = 0; i<nums.size(); i++){
		cin>>nums[i];
	}

	vector<int> res(nums.size(), -1);

	stack<int> stk;
	stk.push(nums.size()-1);

	for(int i = nums.size() - 2; i>=0; i--){
		if(stk.top() > nums[i]){
			res[i] = nums[stk.top()];
			stk.push(i);
		}

		else{
			while(!stk.empty() && nums[i] >= nums[stk.top()]){
				stk.pop();
			}

			res[i] = stk.empty() ? -1 : nums[stk.top()]; 
		}
	}

	for(int i = 0; i<nums.size(); i++){
		cout<<nums[i]<<" ";
	}

	cout<<endl;

	for(int i = 0; i<res.size(); i++){
		cout<<res[i]<<" ";
	}
}

