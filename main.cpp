#include "p_queue.h"


struct brokers {
	std::string name;
	int id;
};
//vi anv�nder oss av brokers f�r att g�ra en j�mf�relse p� id.
struct comparison {
	bool operator()(brokers a, brokers b) {
		return a.id < a.id;
	};
};



int main() 
{
	p_queue<brokers, comparison> buyers;
	system("PAUSE");
	return 0;
}

