#include <iostream>
#include <iterator>
#include <cassert>
#include <array>
#include <string>
#include <string_view>

#include "ComicDetails.h"
#include "Comic.h"
#include "ComicTitle.h"

//returns total number of issues based on Comic index
int getTotalNumOfIssues(int index)
{
	switch (index)
	{
	case ComicTitle::sheHulk2022:				return 14;
	case ComicTitle::ghostRider2022:			return 15;
	case ComicTitle::theAmazingSpiderMan2022:	return 28;
	case ComicTitle::superman2023:				return 5;
	case ComicTitle::ultimateInvasion2023:		return 1;
	case ComicTitle::venom2021:					return 22;
	case ComicTitle::doctorStrange2023:			return 5;
	case ComicTitle::hallowsEve2023:			return 4;
	case ComicTitle::carnage2022:				return 14;
	case ComicTitle::daredevil2022:				return 13;
	case ComicTitle::edgeOfSpiderverse2023:		return 4;
	case ComicTitle::edgeOfSpiderverse2022:		return 5;
	case ComicTitle::fantasticFour2022:			return 9;
	default: return 0;
	}
}


