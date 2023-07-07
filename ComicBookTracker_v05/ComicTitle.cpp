#include <iostream>
#include <iterator>
#include <cassert>
#include <array>
#include <string>
#include <string_view>

#include "Comic.h"
#include "ComicTitle.h"
#include "ComicDetails.h"

//returns comic title as a string depending on the index of array in class Comic
std::string getComicTitle(int index)		//this list of strings will get updated synonymously with ComicTitle.h
{
	switch (index)
	{
	case ComicTitle::sheHulk2022:				return "She-Hulk (2022)";
	case ComicTitle::ghostRider2022:			return "Ghost Rider (2022)";
	case ComicTitle::theAmazingSpiderMan2022:	return "The Amazing Spider-Man (2022)";
	case ComicTitle::superman2023:				return "SUPERMAN (2023)";
	case ComicTitle::ultimateInvasion2023:		return "Ultimate Invasion (2023)";
	case ComicTitle::venom2021:					return "Venom (2021)";
	case ComicTitle::doctorStrange2023:			return "Doctor Strange (2023)";
	case ComicTitle::hallowsEve2023:			return "Hallows' Eve (2023)";
	case ComicTitle::carnage2022:				return "Carnage (2022)";
	case ComicTitle::daredevil2022:				return "Daredevil (2022)";
	case ComicTitle::edgeOfSpiderverse2023:		return "Edge of Spider-Verse (2023)";
	case ComicTitle::edgeOfSpiderverse2022:		return "Edge of Spider-Verse (2022)";
	case ComicTitle::fantasticFour2022:			return "Fantastic Four (2022)";
	default: return "No Title Selected";
	}
}
