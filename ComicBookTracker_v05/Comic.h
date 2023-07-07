#pragma once

class Comic	//Comic data type
{
private:
	std::string m_comicBookTitle{};	//this is the comic book title run ex "She-Hulk(2022)"
	int m_totalNumOfIssues{};		//comics latest issue printed that ive read 
	int m_missingIssues[10]{};		

public:
	//int m_missingIssues[10]{};

	Comic(std::string comicBookTitle = { "default" }, int totalNumOfIssues = 0, int mia = 0) ://sets data if no data then it sets default data
		m_comicBookTitle{ comicBookTitle },
		m_totalNumOfIssues{ totalNumOfIssues },
		m_missingIssues{ mia }
	{}

	//Dont touch functions that do work
	int getMissingIssueIndexValue(int missingIssueIndex);
	int getTotalNumOfIssues();
	std::string& getComicName();	//returns m_comicBookTitle from Comic Object
	int& operator[](int comicIndex);
};

