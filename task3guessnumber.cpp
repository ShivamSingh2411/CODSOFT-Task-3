#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{

	int num,usernum,leftnum = 0;

	srand(time(0)); 

	num = rand() % 100 + 1; 

	cout << "Welcome to My Guessing the number Game"<<endl<<endl;

	do
	{
		cout << "Enter a number between 1 to 100 = ";

		cin >> usernum;

		leftnum++;

		if (usernum > num)

			cout << "Number is too high!"<<endl<<endl;

		else if (usernum < num)

			cout << "Number is too low!"<<endl<<endl;

		else

			cout << "\nCongratulation! you guess the number in " << leftnum << " attempts\n";
	} while (usernum != num);

	return 0;
}
