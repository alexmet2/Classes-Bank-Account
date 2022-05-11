#include <iostream>

using namespace std;
class card {
	float poso;
public:
	card(int n) {
		poso = n;
	}
	string name;
	string surname;
	float getPoso() {
		return poso;
	}
};
int main()
{
	card karta(5000);
	karta.name = "George";
	karta.surname = "Klooney";

	cout << "o " << karta.name << " " << karta.surname << " exei stin trapeza " << karta.getPoso();
	return 0;
}