#include <iostream>
#include <vector>
#include <string>
#include <list>
using namespace std;
int main()
{
	int input;
	string di;
	vector <string> mv;
	int ans[10] = {1};
	bool istrue = false;
	while (true)
		{
		cin >> input;
		if (input == 0)
		{
			break;
		}
		cin >> di;
		if (di == "too high")
		{
			for (int i = 0; i < 10 ; i++)
			{
				if (i+1 >= input)
				{
					ans[i] = 0;
					
				}
			}
		}
		else if (di == "too low")
		{
			for (int i = 0; i < 10; i++)
			{
				if (i + 1 <= input)
				{
					ans[i] = 0;

				}
			}

		}
		else  if ( di == "right on")
		{
			for (int i = 0; i < 10; i++)
			{
				if (i + 1 != input)
				{
					ans[i] = 0;

				}
			}
			for (int i = 0; i < 10; i++)
			{
				if (ans[i] == 1)
				{
					istrue = true;
				}
			}
			if (istrue)
			{
				mv.push_back("Stan may be honest");
				ans[10] = { 1 };
				istrue = false;
			}
			else
			{
				mv.push_back("Stan is dishonest");
				ans[10] = { 1 };
				istrue = false;
			}


		}

	}
	for (int i = 0; i < mv.size(); i++)
	{
		cout << mv[i]  << endl ;
	}

}
