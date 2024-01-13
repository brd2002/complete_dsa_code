#include <bits/stdc++.h>
using namespace std;
string FindMaxBooked(vector<string> rooms)
{
	// code here
	map<string , int>room;
	for(int i = 0 ; i < rooms.size() ; i++){
		room[rooms[i]]++;
	}
	int maxi = INT_MIN;
	string ans ;
	for(auto x : room){
		if(x.second > maxi){
			ans = x.first;
		}
	}
	string newAns = "";
	for(int i = 1 ; i < ans.length() ; i++){
		newAns += ans[i];
	}
	return newAns;
}
int main()
{

	return 0;
}