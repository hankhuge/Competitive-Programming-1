#include<stdio.h>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstring>
#include<map>
#include<set>
#include<vector>
#include<utility>
#include<math.h>

#define sd(x) scanf("%d",&x);
#define sd2(x,y) scanf("%d%d",&x,&y);
#define sd3(x,y,z) scanf("%d%d%d",&x,&y,&z);
#define fi first
#define se second

using namespace std;

int n;

int main(){
	sd(n);
	
	cout<< n << " ";
	
	while( n > 1){
		for(int i = 2; i <= n; i++){
			if(n%i == 0){
				n /= i;
				cout<< n << " ";
				break;
			}
		}
	}
	
	return 0;
}
