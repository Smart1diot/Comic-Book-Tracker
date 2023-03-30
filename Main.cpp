#include <iostream>
#include <string_view>
#include <string>
#include <vector>
#include <array>
#include <algorithm>

class ComicBookRunInfo // class contains data and functions about a Comic Book Run
{
private:
	std::string m_comicTitle{}; //including year in title ex. "Venom: Lethal Protector (2022)"
	int m_numOfIssues{}; //latest issue i have
	bool m_missingIssues{};
	bool m_isOngoing{};

public:
	const void setComicTitle(std::string title) { m_comicTitle = title; }
	const std::string_view getComicTitle() { return m_comicTitle; }

	const void setNumOfIssues(int numOfIssues) { m_numOfIssues = numOfIssues; }
	const int getNumOfIssues() { return m_numOfIssues; }

	const void setMissingIssues(bool missingIssues) { m_missingIssues = missingIssues; }
	const bool getMissingIssues() { return m_missingIssues; }

	const void setIsOngoing(bool isOngoing) { m_isOngoing = isOngoing; }
	const bool getIsOngoing() { return m_isOngoing; }

	template<typename T, typename U>
	const void printComicInfo(T possibleMissingIssues, U missingIssues)
	{
		std::cout << m_comicTitle << '\n';

		if (getIsOngoing())
		{
			std::cout << "Comic is ongoing" << '\n';
		}
		else
		{
			std::cout << "Comic is not ongoing" << '\n';
		}

		std::cout << "Issues: " << m_numOfIssues << '\n';
		
		if (m_numOfIssues > 0)
		{
			for (int i{ 1 }; i <= m_numOfIssues; ++i)
			{
				std::cout << '[' << i << ']' << '	';

				if ((i % 10) == 0)
				{
					std::cout << '\n';
				}
			}
		}

		std::cout << '\n' << '\n';
	}
};

int main()
{
	std::array<ComicBookRunInfo, 2> comicBookRun;
	std::array<int, 100> possibleMissingIssues{
	1,2,3,4,5,6,7,8,9,10,
	11,12,13,14,15,16,17,18,19,20,
	21,22,23,24,25,26,27,28,29,30,
	31,32,33,34,35,36,37,38,39,40,
	41,42,43,44,45,46,47,48,49,50,
	51,52,53,54,55,56,57,58,59,60,
	61,62,63,64,65,66,67,68,69,70,
	71,72,73,74,75,76,77,78,79,80,
	81,82,83,84,85,86,87,88,89,90,
	91,92,93,94,95,96,97,98,99,100,
	};

	comicBookRun[0].setComicTitle("Venom: Lethal Protector (2022)");
	comicBookRun[0].setNumOfIssues(5);
	comicBookRun[0].setMissingIssues(true);
	std::vector<int> missingVenomLethalProtector2022{4};
	comicBookRun[0].setIsOngoing(false);
	comicBookRun[0].printComicInfo(possibleMissingIssues, missingVenomLethalProtector2022);

	comicBookRun[1].setComicTitle("The Amazing Spider-Man (2022)");
	comicBookRun[1].setNumOfIssues(22);
	comicBookRun[1].setMissingIssues(false);
	std::vector<int> missingTheAmazingSpiderMan2022{NULL};
	comicBookRun[1].setIsOngoing(true);
	comicBookRun[1].printComicInfo(possibleMissingIssues, missingTheAmazingSpiderMan2022);

	

	return 0;
}