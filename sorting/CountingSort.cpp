#include <bits/stdc++.h>
using namespace std;

void CountSrt(vector<int> &arr){
	
	map<int, int> count;

	for (int i = 0; i < arr.size(); i++) {
		count[arr.at(i)]++;
	}

	int i = 0;
	for (auto itr: count) {
		while (itr.second--) {
			arr[i++] = itr.first;
		}
	}
}

int main()
{
  int temp, n;
  cin>>n;
	vector<int> arr;
  for(int i=0; i<n; i++){
    cin>>temp;
    arr.push_back(temp);
  }

	CountSrt(arr);

	for (int &x: arr) {
		cout << x << " ";
	}
  cout<<endl;
	return 0;
}
