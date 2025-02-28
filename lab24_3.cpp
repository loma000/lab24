#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Write function count() here.
int count(int data[], int size)
{
	int count = 1;

	sort(data, data + size);

	for (int i = 0; i < size; i++)
	{

		if (i >= 1 && data[i] != data[i - 1])
		{
			count++;
		}
	}

	return count;
}

int main()
{
	int data[] = {1, 2, 4, 5, 4, 8, 2, 1, 2, 4, 6, 1, 4, 4, 4, 2, 1, 0, 12};

	cout << "There are " << count(data, sizeof(data) / sizeof(int));
	cout << " different numbers in data.";

	return 0;
}
