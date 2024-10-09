#include <iostream>
#include <set>
#include <string>
#include <map>

int main()
{
  std::string word;
	std::map<std::string, int> word_count;
	while (std::cin >> word)
	{
		word_count[word]++;
	}
	std::set <std::string> result;
	for (auto& entry : word_count)
	{
		if (entry.second > 1)
		{
			result.insert(entry.first);
		}
	}
	for (const std::string& w : result)
	{
		std::cout << w << " ";
	}
	return 0;
}
