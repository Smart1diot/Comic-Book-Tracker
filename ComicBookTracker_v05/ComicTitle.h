#pragma once
class ComicTitle
{
public:
	enum							//Anytime I add a comic run I have to update ComicTitle.cpp
	{
		sheHulk2022,
		ghostRider2022,
		theAmazingSpiderMan2022,
		superman2023,
		ultimateInvasion2023,
		venom2021,
		doctorStrange2023,
		hallowsEve2023,
		carnage2022,
		daredevil2022,
		edgeOfSpiderverse2023,
		edgeOfSpiderverse2022,
		fantasticFour2022,

		totalNumOfComicRuns
	};

	
};

std::string getComicTitle(int index);//Returns comic title as a string to set member in class Comic