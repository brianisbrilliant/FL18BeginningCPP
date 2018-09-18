#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
	srand(time(0));
	cout << "Hello World!\n";
	int iterator, maxTurns = (rand() % 10 + 10);
	for(int i = 0; i < 10; i++) {
		while (iterator++ < maxTurns) {
			cout << iterator << " ";
		}
		cout << endl;
		iterator = 0;
		maxTurns = (rand() % 10 + 10);
	}
}
