#include <random>
#include <string>

using namespace std;

string randDNA(int seed, string letter_base, int length)
{
	string hold;
	mt19937 eng1(seed);
	uniform_int_distribution<int> un(0, letter_base.size()-1);
	
	for(int i=0; i<length; i++)
	{
		int random = un(eng1);
		hold += letter_base[random];
	}
	return hold;
}
