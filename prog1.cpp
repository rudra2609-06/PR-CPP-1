#include <iostream>
using namespace std;

class TimeConvertor
{
	int time_in_sec_input;
	int time_in_hour_input;
	int time_in_min_input;
	int time_in_sec_input_2;
	int time_in_hh_mm_ss_output;
	int time_in_hours;
	int time_in_min;
	int time_in_sec;
	int choice;

public:
	void second_to_hours_input(void);
	void result_of_second_to_hours_input(void);
};

void TimeConvertor ::second_to_hours_input(void)
{
	cout << "If you want to convert from seconds to HH:MM:SS format enter 1" << endl;
	cout << "If you want to convert HH:MM:SS format to seconds format enter 2" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		cout << "Enter time in seconds: ";
		cin >> time_in_sec_input;
		break;

	case 2:
		cout << "Enter hours: ";
		cin >> time_in_hour_input;
		cout << "Enter min: ";
		cin >> time_in_min_input;
		cout << "Enter seconds: ";
		cin >> time_in_sec_input_2;
	}
}

void TimeConvertor ::result_of_second_to_hours_input(void)
{

	if (choice == 1)
	{
		time_in_hours = (time_in_sec_input / 3600);
		time_in_min = (time_in_sec_input - 3600) / 60;
		time_in_sec = time_in_sec_input % 60;
		cout << "Answer is: " << time_in_hours << ":" << time_in_min << ":" << time_in_sec;
	}
	else if (choice == 2)
	{
		time_in_hours = time_in_hour_input * 3600;
		time_in_min = time_in_min_input * 60;
		time_in_hh_mm_ss_output = time_in_hours + time_in_min + time_in_sec_input_2;
		cout << "Answer is: " << time_in_hh_mm_ss_output << "seconds";
	}
}

int main()
{

	TimeConvertor t;
	t.second_to_hours_input();
	t.result_of_second_to_hours_input();
	return 0;
}