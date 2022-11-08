#include <iostream>
#include <list>
#include <queue>
#include <string>

using namespace std;

int main()
{
	srand(time(NULL));
	queue <string> qu;
	list <string> ls{ "Volodymyr","Oleksiy","Nikita","Maksym","Andriy","Kristian" };
	cout << "List:\n";
	for (string i : ls)
	{
		cout << i << " ";
	}
	ls.sort();
	int crystals = 0;
	cout << "\n\nQueue:\n";
	for ( string i : ls)
	{
		cout <<i<<" ";
		qu.push(i);
	}
	cout << "\n\nQueue has been created\n\n";
	int qu_SIZE = qu.size();
	for (size_t i = 0; i < qu_SIZE; i++)
	{
		int buf = (rand() % 3) + 1;
		if (buf + crystals>=5)
		{
			if (crystals == 5) {
				cout << "Today crystals has been ended!\n";
				break;
			}
			buf = buf - ((buf + crystals) - 5);
			cout << qu.front() << " recieved " << buf << " crystals!\n";
			qu.pop();
			crystals = 5;
			cout << "Today crystals has been ended!\n";
			break;
		}
		cout << qu.front() << " recieved " << buf << " crystals!\n";
		qu.pop();
		crystals += buf;
	}

}