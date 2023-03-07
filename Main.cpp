#include <iostream>
#include <string_view>
#include <array>
#include <string>
#include <algorithm>

struct ComicSet
{
	std::string comicRun{};
	bool isComplete{};
};

int main()
{
	std::array<ComicSet, 1> theAmazingSpiderman2022{};

	theAmazingSpiderman2022[0].comicRun = "The Amazing Spider-Man (2022)";
	theAmazingSpiderman2022[0].isComplete = false;

	for (ComicSet member : theAmazingSpiderman2022)
	{
		std::cout << member.comicRun << '\n';
		
		if (member.isComplete)
		{
			std::cout << "Comic Run is Complete." << '\n';
		}
		else
		{
			std::cout << "Comic Run is On Going." << '\n';
		}
	}

	return 0;
}