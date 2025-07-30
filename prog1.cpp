#include <iostream>
using namespace std;

class TimeConvertor
{
	int total_time;
	int time_sec;
	int time_min;
	int time_hours;
	int choice;

public:
	void Convert_Time_Input(void);
	void Convert_Time(void);
};

void TimeConvertor::Convert_Time_Input(void)
{
	cout << "If you want to convert from seconds to HH:MM:SS format enter 1" << endl;
	cout << "If you want to convert HH:MM:SS format to seconds format enter 2" << endl;
	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << "Enter time in seconds: ";
		cin >> total_time;
		break;

	case 2:
		cout << "Enter hours: ";
		cin >> time_hours;
		cout << "Enter minutes: ";
		cin >> time_min;
		cout << "Enter seconds: ";
		cin >> time_sec;
		break;

	default:
		cout << "Invalid choice" << endl;
		break;
	}
}

void TimeConvertor::Convert_Time(void)
{
	if (choice == 1)
	{
		time_hours = total_time / 3600;
		time_min = (total_time % 3600) / 60;
		time_sec = total_time % 60;

		cout << "Time in HH:MM:SS = ";
		cout << (time_hours < 10 ? "0" : "") << time_hours << ":"
			 << (time_min < 10 ? "0" : "") << time_min << ":"
			 << (time_sec < 10 ? "0" : "") << time_sec << endl;
	}
	if (choice == 2)
	{
		total_time = (time_hours * 3600) + (time_min * 60) + time_sec;
		cout << "Total seconds: " << total_time;
	}
}

int main()
{
	TimeConvertor t;
	t.Convert_Time_Input();
	t.Convert_Time();
	return 0;
}
