#include <iostream>
#include <array>
#include <algorithm>
#include <string_view>
#include <vector>
#include <string>

struct ComicBookRunInfo
{
	std::string comicTitle{};
	int numOfIssues{};
	bool isOngoing{};
};

bool compare(ComicBookRunInfo a, ComicBookRunInfo b)
{
	return a.comicTitle < b.comicTitle;
}

int main()
{
	std::array<ComicBookRunInfo, 3> comicBookRun{};

	comicBookRun[0].comicTitle = "The Amazing Spider-Man (2022)";
	comicBookRun[0].numOfIssues = 21;
	comicBookRun[0].isOngoing = true;

	comicBookRun[1].comicTitle = "Kang the Conqueror (2021)";
	comicBookRun[1].numOfIssues = 5;
	comicBookRun[1].isOngoing = false;

	comicBookRun[2].comicTitle = "Deadly Neighborhood Spider-Man (2022)";
	comicBookRun[2].numOfIssues = 5;
	comicBookRun[2].isOngoing = false;

	std::sort(comicBookRun.begin(), comicBookRun.end(), compare);
	
	std::cout << comicBookRun[0].comicTitle << ' ' << comicBookRun[0].numOfIssues << '\n';
	std::cout << comicBookRun[1].comicTitle << ' ' << comicBookRun[1].numOfIssues << '\n';
	std::cout << comicBookRun[2].comicTitle << ' ' << comicBookRun[2].numOfIssues << '\n';

	return 0;
}