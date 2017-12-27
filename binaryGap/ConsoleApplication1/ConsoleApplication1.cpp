// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include<iostream>
using namespace std;
//1
//2
//3 admended
//4
//2-5
//1-6
//2-7
class Solution {
public:
	bool judgeCircle(string moves) {
		int x=0, y = 0;
		for (int i = 0; i<moves.size(); i++){

			switch (moves[i]){
			case 'L':
				x--;
				break;

			case 'R':
				x++;
				break;

			case 'U':
				y++;
				break;

			case 'D':
				y--;
				break;

			}
			if (0 == x && 0 == y)
				return true;
			else
				return false;


		}
	}
	int pivotIndex(vector<int>& nums) {
	
		
	
		long sum = 0;
		for (int i = 0; i < nums.size(); i++){
			sum += nums[i];
		}

		int sumLeft = 0;
		int pivot = 0;
		for (int i = 0; i < nums.size() - 2; i++){
			sumLeft += nums[i];
			if (sum - sumLeft - nums[i + 1] == sumLeft){
				pivot = i + 1;
				break;
			}

		}
		return pivot;

	}
};
class Solution2 {
public:
	vector<int> selfDividingNumbers(int left, int right) {
		int N = right - left + 1;
		vector<int> v;
		v.reserve(N);

		for (int i = 0; i<N; i++)
		{
			int test = left + i;
			do
			{
				int m = test % 10;
				if (m != 0 && test%m != 0)
					break;
			} while (test /= 10);

			if (test == 0)
				v.push_back(left + i);

		}
		return v;
	}

};


vector<int> solution(vector<int> &A, int K) {
	// write your code in C++14 (g++ 6.2.0)
	int i = 0;
	int N = A.size();
	int times = K%N;
	if (N <= 1)
		return A;
	for (i = 0; i<times; i++)
	{
		int temp = A.back();
		for (int j = N - 1; j>0; j++)
		{
			A[j] = A[j - 1];
		}
		//memcpy(&A[1], &A[0], sizeof(int)*(N - 1));
		A[0] = temp;
	}
	return A;

}

int countdiv()
{
	int A = 6;
	int B = 11;
	int K = 2;

	int ret = 0;
	if (K>B)
		return 0;
	int rbound = ((B / K) + 1)*K;

	ret = (rbound - A) / K;
	int ttt = 5;
	ret = 5;
}

int compare(const void * a, const void * b)
{
	return (*(int*)a - *(int*)b);
}
int _tmain(int argc, _TCHAR* argv[])
{
	
	int tem = countdiv();
	const int values[] = { 80099, 16114, 63108, 25032, 
		31044, 59069, 39099, 13110, 34101, 66120, 19116, 72105, 70045, 38032, 41110, 12105, 75110, 27105, 1105, 9114, 67117, 20101, 21100, 11032, 79046, 32112, 5111, 6117, 45116, 22032, 61097, 65120, 49110, 15101, 82109, 50103, 54110, 17101, 46032, 4121,
		76097, 7032, 57105, 2102, 58044, 8097, 44099, 73064, 81111, 43097, 30112, 14116, 60109, 74104, 77105, 35097, 64058, 29112, 55032, 33108, 71108, 40111, 47088, 52117, 56076, 68097, 37101, 78114, 24110, 53097, 69110, 48105, 18115, 26072, 3032,
		42116, 62105, 51120, 28065, 10101, 23105, 36115 };
	const int size = sizeof(values) / sizeof(int);


	//vector<int> v(&values[0], &values[0]+sizeof(values));


	std::qsort((void *)values, size, sizeof(int), compare);
	char string[size + 1] = "";

	for (int i = 0; i < size; i++){
		string[i] = (char)(values[i] % 1000);
	}

	string[size] = 0;

	printf("%s ", string);



	char * ss = "0123456789";
	//size_t len = strlen(*ss);
//	int sss[100] = "0123456789";

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	/*
	
	
	Solution s;
	int A[] = { 3, 8, 9, 7, 6 };

	vector<int> v(&A[0],&A[0]+5);

	vector<int> v2 = solution(v, 3);
	//v.reserve(10);
	int i = sizeof(v[0]);

	int iarray[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4, 0 };
	//count： iarray数组个数
	size_t count = sizeof(iarray) / sizeof(int);
	//int数组初始化 ivec3
	vector<int> ivec3(iarray, iarray + count);
	string str = "UD";

	bool bout = s.judgeCircle(str);
	int out = s.pivotIndex(ivec3);
	cout << out << endl;
	*/
	return 0;
}



