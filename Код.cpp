#include <map>
#include <vector>
#include <cstdlib>
#include <iostream>


using namespace std;

map<int, unsigned int> counter(const vector<int>& vals) {
	map<int, unsigned int> rv;

	for (auto val = vals.begin(); val != vals.end(); ++val) {
		rv[*val]++;
	}

	return rv;
}

void display(const map<int, unsigned int>& counts) {
	for (auto count = counts.begin(); count != counts.end(); ++count) {
		cout << "Число " << count->first << " повторяется " << count->second << " раз "<< endl;
	}
}

void main(int argc, char** argv) {
	setlocale(LC_ALL, "ru");
	vector<int> mem ;
	int a;
	int b;
	cin >> b;
	while (b != 0) {
		    mem.insert(mem.begin(), b % 10);
		  b = b / 10;
		   
		}

	display(counter(mem))

}