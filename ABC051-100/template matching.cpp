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

bool solve(vector<string>& A, vector<string>& B, int aRow, int bRow, int n, int m, int aCol){

	if(aRow == n-1 && aCol > n-m+1){
		return false;
	}

	if(bRow == m-1 && A[aRow].substr(aCol, m) == B[bRow]){
		return true;
	}

	if(A[aRow].substr(aCol, m) == B[bRow]){
		 return solve(A, B, aRow+1, bRow+1, n, m, aCol);
	}

	else{
        if(aCol <= n-m+1)
		    return solve(A, B, aRow, bRow, n, m, aCol+1);
        else
            return solve(A, B, aRow+1, bRow, n, m, 0);
	}

}

int main(){
	int n, m;
	cin >> n >> m;
	vector<string> A(n, "");
	vector<string> B(m, "");
	
	for(int i = 0; i<n; i++){
		cin>>A[i];
	}

	for(int i = 0; i<m; i++){
		cin>>B[i];
	}

	if(solve(A, B, 0, 0, n, m, 0))
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;

}

