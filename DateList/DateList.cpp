// DateList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

int main()
{
	int year1{};
	int month1{};
	int day1{};

	int year2{};
	int month2{};
	int day2{};

	char dash = '-';

	std::cin >> year1 >> dash >> month1 >> dash >> day1;

	std::cin >> year2 >> dash >> month2 >> dash >> day2;

	int days = {};
	int day_start = 1;
	int month_start = 1;
	const int month_end = 12;



	int year = {};
	int month = {};
	int day = {};

	if (year1 < year2)
	{
		for (year; year <= year2; year++)
		{
			year = year1 + 1;

			for (month; month <= 12; month++)
			{
				month = month1 + 1;

				{
					if (month1 == 1)
						days = 31;
					else if (month1 == 2)
						days = 28;
					else if (month1 == 3)
						days = 31;
					else if (month1 == 4)
						days = 30;
					else if (month1 == 5)
						days = 31;
					else if (month1 == 6)
						days = 30;
					else if (month1 == 7)
						days = 31;
					else if (month1 == 8)
						days = 31;
					else if (month1 == 9)
						days = 30;
					else if (month1 == 10)
						days = 31;
					else if (month1 == 11)
						days = 30;
					else if (month1 == 12)
						days = 31;
				}
				for (day1; day1 <= days; day1++)
				{
					if (year1 < year2 || year1 == year2 && month1 < month2 || year1 == year2 && month1 < month2 || day1 < day2)
						std::cout << year1 << dash << std::setfill('0') << std::setw(2) << month1 << dash << std::setfill('0') << std::setw(2) << day1 << std::endl;
				}

				if (day_start <= days)
					std::cout << year1 << dash << std::setfill('0') << std::setw(2) << month << dash << std::setfill('0') << std::setw(2) << day_start << std::endl;
				++day_start;
			}

			std::cout << year1 << dash << std::setfill('0') << std::setw(2) << month << dash << std::setfill('0') << std::setw(2) << day_start << std::endl;

		}
	}

	return 0;
}



