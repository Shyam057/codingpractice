//let code problem [2,3,4,2,3] detect an element which does not have pair.
#include<iostream>
using namespace std;
void printAns(int arr[], int size){
	int ans = 0;
	for(int i=0; i<size; i++){
		ans ^= arr[i];
	}
	cout<<ans;
}
int main(){
	int arr[5]={2,3,4,2,3};
	printAns(arr,5);
	cin.get();
	return 0;
}
