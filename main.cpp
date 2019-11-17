#include "p_queue.h"


struct brokers {
	std::string name;
	int id;
};
//vi använder oss av brokers för att göra en jämförelse på id.
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

