# Remove_element
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	int removeElement(vector<int> nums, int val) {

		int count = nums.size();
		int temp=0;
		int j = 1;

		if (nums.empty())
		{
			count = 0;
		}
		else
		{
			if (nums.at(0) == val)
			{
				count--;
			}
			for (int i = 0; i < nums.size() - 1; i++)
			{
				if (nums.at(j) == val)
				{
					while (nums.at(j) == val)
					{
						j++;
						count--;
						if (j >= nums.size())
						{
							if (nums.at(i + 1) == val)
							{
								temp = nums.back();
								nums.back() = nums.at(i + 1);
								nums.at(i + 1) = temp;
							}
							cout << count << endl;
							return count;
						}
					}
					if (nums.at(i)!=val)
					    i++;
				}
				
				if (nums.at(i) == val)
				{
					temp = nums.at(j);
					nums.at(j) = nums.at(i);
					nums.at(i) = temp;					
				}
				j++;
				if (j >= nums.size())
				{
					if (nums.at(i+1) == val)
					{
						temp = nums.back();
						nums.back() = nums.at(i+1);
						nums.at(i+1) = temp;
					}
					cout << count << endl;
					return count;
				}
					
			}
		}	
		for (int i = 0; i < nums.size(); i++)
		{
			cout << nums.at(i) << endl;
		}
		cout << count << endl;
		return count;
	}
};

void main()
{
	Solution s;
	s.removeElement({3,2,2,3}, 3);
}
