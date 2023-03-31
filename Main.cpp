#include <iostream>
#include <string_view>
#include <string>
#include <vector>
#include <array>
#include <algorithm>

class ComicBookRunInfo			// class contains data and functions about a Comic Book Run
{
private:
	std::string m_comicTitle{};	//including year in title ex. "Venom: Lethal Protector (2022)"
	int m_numOfIssues{};		//recently obtained issue (i.e. highest)
	bool m_isOngoing{};			//bool for ongoing comic run check

	//-----------------------------------------------------------------------------------------------

public:
	const void setComicTitle(std::string title) { m_comicTitle = title; }		//function that sets comic title
	const std::string_view getComicTitle() { return m_comicTitle; }				//read only comic title

	const void setNumOfIssues(int numOfIssues) { m_numOfIssues = numOfIssues; }	//sets the number of comics based on recent issue obtained
	const int getNumOfIssues() { return m_numOfIssues; }						//read-only value of highest recently obtained issue

	const void setIsOngoing(bool isOngoing) { m_isOngoing = isOngoing; }		//sets bool ongoing=true not-ongoing=false
	const bool getIsOngoing() { return m_isOngoing; }							//read only bool

	const void printComicInfo()			//prints all crucial information about comic
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

		
		
		for (int i{ 1 }; i <= m_numOfIssues; ++i)
		{
			std::cout << '[' << i << ']' << '	';

			if ((i % 10) == 0)
			{
				std::cout << '\n';
			}
		}
	
		std::cout << '\n' << '\n';
	}
};

//-----------------------------------------------------------------------------------------------

bool compare(ComicBookRunInfo a, ComicBookRunInfo b)
{
	return a.getIsOngoing() < b.getIsOngoing();
}

//-----------------------------------------------------------------------------------------------
int main()
{
	std::cout << '\n' << "** Carlos Personal Comic Book Collection **" << '\n' << '\n';

	std::array<ComicBookRunInfo, 44> comicBookRun; //***need a better way for total count, for now we do magic numbers

	comicBookRun[0].setComicTitle("Venom: Lethal Protector (2022)");
	comicBookRun[0].setNumOfIssues(5);
	comicBookRun[0].setIsOngoing(false);

	comicBookRun[1].setComicTitle("The Amazing Spider-Man (2022)");
	comicBookRun[1].setNumOfIssues(22);
	comicBookRun[1].setIsOngoing(true);

	comicBookRun[2].setComicTitle("Daredevil (2022)");
	comicBookRun[2].setNumOfIssues(9);
	comicBookRun[2].setIsOngoing(true);

	comicBookRun[3].setComicTitle("Spider-Man (2022)");
	comicBookRun[3].setNumOfIssues(6);
	comicBookRun[3].setIsOngoing(true);

	comicBookRun[4].setComicTitle("Carnage (2022)");
	comicBookRun[4].setNumOfIssues(11);
	comicBookRun[4].setIsOngoing(true);

	comicBookRun[5].setComicTitle("Fantastic Four (2022)");
	comicBookRun[5].setNumOfIssues(5);
	comicBookRun[5].setIsOngoing(true);

	comicBookRun[6].setComicTitle("Joe Fixit (2023)");
	comicBookRun[6].setNumOfIssues(3);
	comicBookRun[6].setIsOngoing(true);

	comicBookRun[7].setComicTitle("Spider-Man: The Lost Hunt (2022)");
	comicBookRun[7].setNumOfIssues(5);
	comicBookRun[7].setIsOngoing(false);

	comicBookRun[8].setComicTitle("Hulk (2021)");
	comicBookRun[8].setNumOfIssues(13);
	comicBookRun[8].setIsOngoing(true);

	comicBookRun[9].setComicTitle("Avengers: War Across Time (2023) #1");
	comicBookRun[9].setNumOfIssues(3);
	comicBookRun[9].setIsOngoing(true);

	comicBookRun[10].setComicTitle("Doctor Strange (2023)");
	comicBookRun[10].setNumOfIssues(1);
	comicBookRun[10].setIsOngoing(true);

	comicBookRun[11].setComicTitle("Ghost Rider (2022)");
	comicBookRun[11].setNumOfIssues(12);
	comicBookRun[11].setIsOngoing(true);

	comicBookRun[12].setComicTitle("Venom: Lethal Protector (2023)");
	comicBookRun[12].setNumOfIssues(1);
	comicBookRun[12].setIsOngoing(true);

	comicBookRun[13].setComicTitle("Unstoppable Doom Patrol (2023)");
	comicBookRun[13].setNumOfIssues(1);
	comicBookRun[13].setIsOngoing(true);

	comicBookRun[14].setComicTitle("Black Panther: Unconquered (2022)");
	comicBookRun[14].setNumOfIssues(1);
	comicBookRun[14].setIsOngoing(false);

	comicBookRun[15].setComicTitle("Superman (2023)");
	comicBookRun[15].setNumOfIssues(1);
	comicBookRun[15].setIsOngoing(true);

	comicBookRun[16].setComicTitle("DC vs. Vampires (2021)");
	comicBookRun[16].setNumOfIssues(12);
	comicBookRun[16].setIsOngoing(false);

	comicBookRun[17].setComicTitle("The Jurassic League (2022)");
	comicBookRun[17].setNumOfIssues(5);
	comicBookRun[17].setIsOngoing(false);

	comicBookRun[18].setComicTitle("Strange (2022)");
	comicBookRun[18].setNumOfIssues(3);
	comicBookRun[18].setIsOngoing(false);

	comicBookRun[19].setComicTitle("Edge of Spider-Verse (2022)");
	comicBookRun[19].setNumOfIssues(5);
	comicBookRun[19].setIsOngoing(false);

	comicBookRun[20].setComicTitle("Silver Surfer Rebirth (2022)");
	comicBookRun[20].setNumOfIssues(5);
	comicBookRun[20].setIsOngoing(false);

	comicBookRun[21].setComicTitle("Inferno (2021)");
	comicBookRun[21].setNumOfIssues(4);
	comicBookRun[21].setIsOngoing(false);

	comicBookRun[22].setComicTitle("LAZARUS PLANET: ALPHA (2023)");
	comicBookRun[22].setNumOfIssues(1);
	comicBookRun[22].setIsOngoing(false);

	comicBookRun[23].setComicTitle("LAZARUS PLANET: OMEGA (2023)");
	comicBookRun[23].setNumOfIssues(1);
	comicBookRun[23].setIsOngoing(false);

	comicBookRun[24].setComicTitle("Venom (2021)");
	comicBookRun[24].setNumOfIssues(17);
	comicBookRun[24].setIsOngoing(true);

	comicBookRun[25].setComicTitle("Dark Ages (2021)");
	comicBookRun[25].setNumOfIssues(5);
	comicBookRun[25].setIsOngoing(false);

	comicBookRun[26].setComicTitle("Doctor Strange: Fall Sunrise (2022)");
	comicBookRun[26].setNumOfIssues(4);
	comicBookRun[26].setIsOngoing(false);

	comicBookRun[27].setComicTitle("Red Goblin (2023)");
	comicBookRun[27].setNumOfIssues(2);
	comicBookRun[27].setIsOngoing(true);

	comicBookRun[28].setComicTitle("Midnight Suns (2022)");
	comicBookRun[28].setNumOfIssues(5);
	comicBookRun[28].setIsOngoing(false);

	comicBookRun[29].setComicTitle("Spider-Man: Unforgiven (2023)");
	comicBookRun[29].setNumOfIssues(1);
	comicBookRun[29].setIsOngoing(false);

	comicBookRun[30].setComicTitle("Cosmic Ghost Rider (2023)");
	comicBookRun[30].setNumOfIssues(1);
	comicBookRun[30].setIsOngoing(true);

	comicBookRun[31].setComicTitle("Monica Rambeau: Photon (2022)");
	comicBookRun[31].setNumOfIssues(2);
	comicBookRun[31].setIsOngoing(true);

	comicBookRun[32].setComicTitle("Spider-Gwen: Shadow Clones (2023)");
	comicBookRun[32].setNumOfIssues(1);
	comicBookRun[32].setIsOngoing(true);

	comicBookRun[33].setComicTitle("Hallows' Eve (2023)");
	comicBookRun[33].setNumOfIssues(1);
	comicBookRun[33].setIsOngoing(true);

	comicBookRun[34].setComicTitle("Dark Knights of Steel (2021)");
	comicBookRun[34].setNumOfIssues(10);
	comicBookRun[34].setIsOngoing(true);

	comicBookRun[35].setComicTitle("Trve Kvlt (2022)");
	comicBookRun[35].setNumOfIssues(5);
	comicBookRun[35].setIsOngoing(false);

	comicBookRun[36].setComicTitle("She-Hulk (2022)");
	comicBookRun[36].setNumOfIssues(11);
	comicBookRun[36].setIsOngoing(true);

	comicBookRun[37].setComicTitle("A Calculated Man (2022)");
	comicBookRun[37].setNumOfIssues(3);
	comicBookRun[37].setIsOngoing(false);

	comicBookRun[38].setComicTitle("PUBLIC DOMAIN (2022)");
	comicBookRun[38].setNumOfIssues(5);
	comicBookRun[38].setIsOngoing(false);

	comicBookRun[39].setComicTitle("Dark Ride (2022)");
	comicBookRun[39].setNumOfIssues(4);
	comicBookRun[39].setIsOngoing(false);

	comicBookRun[40].setComicTitle("Night Club (2022)");
	comicBookRun[40].setNumOfIssues(1);
	comicBookRun[40].setIsOngoing(false);

	comicBookRun[41].setComicTitle("Nemesis: Reloaded (2023)");
	comicBookRun[41].setNumOfIssues(1);
	comicBookRun[41].setIsOngoing(false);

	comicBookRun[42].setComicTitle("Gun Honey Blood For Blood (2022)");
	comicBookRun[42].setNumOfIssues(4);
	comicBookRun[42].setIsOngoing(false);

	comicBookRun[43].setComicTitle("Deadly Neighborhood Spider-Man (2022)");
	comicBookRun[43].setNumOfIssues(5);
	comicBookRun[43].setIsOngoing(false);

	//--------------------------------

	std::sort(comicBookRun.begin(), comicBookRun.end(), compare);

	for (int i{ 0 }; i <= 43; ++i) //***need a better way for total comic total, for now magic number
	{
		comicBookRun[i].printComicInfo();
	}

	return 0;
}