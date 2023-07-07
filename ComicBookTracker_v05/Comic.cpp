#include <iostream>
#include <iterator>
#include <cassert>
#include <array>
#include <string>
#include <string_view>

#include "Comic.h"
#include "ComicTitle.h"
#include "ComicDetails.h"

std::string& Comic::getComicName()	//returns m_comicBookTitle from Comic Object
{
	return m_comicBookTitle;
}

int Comic::getTotalNumOfIssues()
{
	return m_totalNumOfIssues;
}

int& Comic::operator[](int comicIndex)
{
	return m_missingIssues[comicIndex];
}

int Comic::getMissingIssueIndexValue(int missingIssueIndex)
{
	return m_missingIssues[missingIssueIndex];
}