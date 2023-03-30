#include <iostream>
#include <string_view>
#include <string>
#include <vector>
#include <array>
#include <algorithm>

class ComicBookRunInfo
{
private:
	std::string m_comicTitle{}; //including year in title ex. "Venom: Lethal Protector (2022)"
	int m_numOfIssues{};
	int m_missingIssues{};
	bool m_isOngoing{};

public:
	const void setComicTitle(std::string title) { m_comicTitle = title; }
	const std::string_view getComicTitle() { return m_comicTitle; }

	const void setNumOfIssues(int numOfIssues) { m_numOfIssues = numOfIssues; }
	const int getNumOfIssues() { return m_numOfIssues; }

	const void setMissingIssues(int missingIssues) { m_missingIssues = missingIssues; }
	const int getMissingIssues() { return m_missingIssues; }

	const void setIsOngoing(bool isOngoing) { m_isOngoing = isOngoing; }
	const bool getIsOngoing() { return m_isOngoing; }

	const void printComicInfo()
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

		}

	}
};

int main()
{
	std::array<ComicBookRunInfo, 1> comicBookRun;

	comicBookRun[0].setComicTitle("Venom: Lethal Protector (2022)");
	comicBookRun[0].setNumOfIssues(5);
	comicBookRun[0].setMissingIssues(NULL);
	comicBookRun[0].setIsOngoing(false);
	comicBookRun[0].printComicInfo();

	return 0;
}