#include<iostream>
using namespace std;
int main() {
	int nums[10];
	int temp;
	for (int i = 0; i < 10; i++) {
		nums[i] = rand() % 100 + 1;

	}
	cout << "Unsorted: ";
	for (int i = 0; i < 10; i++)
		cout << nums[i] << " ";
	
	cout << endl;

	for (int i = 0; i < sizeof(nums)/sizeof(nums[0]); i++) {
		for (int j = 0; j < sizeof(nums)/sizeof(nums[0]); j++) {
			if (nums[j] > nums[i]) {
				temp = nums[j];
				//move i into j
				nums[j] = nums[i];
				//move temp into i
				nums[i] = temp;
			}
		}
	}
	cout << "Sorted: ";
	for (int i = 0; i < 10; i++)
		cout << nums[i] << " ";
}
