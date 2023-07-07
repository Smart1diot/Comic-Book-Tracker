// *ComicBookTracker_v01cpp*

#include <iostream>
#include <iterator>
#include <cassert>
#include <array>
#include <string>
#include <string_view>
#include <algorithm>

#include "Comic.h"
#include "ComicDetails.h"
#include "ComicTitle.h"


int main()
{
	//array object that contains 6 objects of type Comic
	std::array<Comic, ComicTitle::totalNumOfComicRuns> comicLibrary{};

	//loop that sets Comic data
	for (int comicIndex{ 0 }; comicIndex < ComicTitle::totalNumOfComicRuns; ++comicIndex)
	{
		comicLibrary.at(comicIndex) = { getComicTitle(comicIndex), getTotalNumOfIssues(comicIndex) };

		if (comicIndex == ComicTitle::superman2023)
		{
			comicLibrary.at(ComicTitle::superman2023)[0] = 2;
			comicLibrary.at(ComicTitle::superman2023)[1] = 4;
			comicLibrary.at(ComicTitle::superman2023)[2] = 5;
		}

		if (comicIndex == ComicTitle::hallowsEve2023)
		{
			comicLibrary.at(ComicTitle::hallowsEve2023)[0] = 4;
		}

		if (comicIndex == ComicTitle::edgeOfSpiderverse2023)
		{
			comicLibrary.at(ComicTitle::edgeOfSpiderverse2023)[0] = 2;
			comicLibrary.at(ComicTitle::edgeOfSpiderverse2023)[1] = 3;
			comicLibrary.at(ComicTitle::edgeOfSpiderverse2023)[2] = 4;
		}
	}

	//for loop that sorts the Comics in alphabetical order
	for (int comicIndex{ 0 }; comicIndex < ComicTitle::totalNumOfComicRuns; ++comicIndex)
	{
		for (int i{ comicIndex + 1 }; i < ComicTitle::totalNumOfComicRuns; ++i)
		{
			if (comicLibrary.at(comicIndex).getComicName() > comicLibrary.at(i).getComicName())
			{
				std::swap(comicLibrary.at(comicIndex), comicLibrary.at(i));
			}
		}
	}

	//loop that prints all comic info in readable format
	for (int comicIndex{ 0 }; comicIndex < ComicTitle::totalNumOfComicRuns; ++comicIndex)
	{
		std::cout << comicLibrary.at(comicIndex).getComicName() << ": " << comicLibrary.at(comicIndex).getTotalNumOfIssues() << '\n';

		for (int one{ 1 }; one <= comicLibrary.at(comicIndex).getTotalNumOfIssues(); ++one)
		{
			for (int arrayIndex{ 0 }; arrayIndex < 10; ++arrayIndex)
			{
				if (comicLibrary.at(comicIndex).getMissingIssueIndexValue(arrayIndex) == one)
				{
					std::cout << '[' << ' ' << ']' << '	';
					break;
				}
				else if (comicLibrary.at(comicIndex).getMissingIssueIndexValue(arrayIndex) == 0)
				{
					std::cout << '[' << one << ']' << '	';
					break;
				}
		
			}

			//std::cout << '[' << one << ']' << '	';


			if ((one % 10) == 0)
			{
				std::cout << '\n';
			}
		}
		std::cout << '\n' << '\n';
	}

	std::cout << '\n';
	

	return 0;
};