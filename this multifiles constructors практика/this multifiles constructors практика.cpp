#include <iostream>
using namespace std;

class Cat {
private:
	int energy;
	int hunger;
	string nick;
	int sleepy;

public:
	void SetEnergy(int energy) {
		if (energy >= 0 && energy <= 100)
		{
			this->energy = energy;
		}
		else
		{
			cout << "Write the value from 0 to 100." << endl;
		}
	}
	int GetEnergy() const {
		return this->energy;
	}

	void SetHunger(int hunger) {
		if (hunger >= 0 && hunger <= 100)
		{
			this->hunger = hunger;
		}
		else
		{
			cout << "Write the value from 0 to 100." << endl;
		}
	}
	int GetHunger() const {
		return this->hunger;
	}
	
	void SetSleepy(int sleepy) {
		if (sleepy >= 0 && sleepy <= 100)
		{
			cout << "Write the value from 0 to 100." << endl;
		}
		else
		{
			this->sleepy = sleepy;
		}	
	}
	int GetSleepy() const {
		return this->sleepy;

	void SetNick(string nick) {
		this->nick = nick;
	}
	string GetNick() const {
		return this->nick;
	}

	void Play() {
		if (sleepy > 40)
		{
			cout << nick << " is not able to play!!" << endl;
			return;
		}
		else
		{
			sleepy -= 40;
		}
	}

	void Eat() {
		if (hunger > 50)
		{
			cout << nick << " want to eat!!" << endl;
			return;
		}
		else
		{
			hunger -= 40;
		}
	}

	void Sleep() {
		if (energy >= 70)
		{
			cout << nick << " do not want to sleep!!" << endl;
			return;
		}
		else
		{
			energy += 30;
		}
	}

	void About() const
	{
		cout << "Name: " << nick << "\n";
		cout << "Energy level: " << energy << "&\n";
		cout << "Sleepy level: " << sleepy << "%\n";
		cout << "Hunger: ";
		if (hunger)
		{
			cout << "Yeees";
		}
		else
		{
			cout << "Nooo";
		}
	}
	int main()
	{
		setlocale(0, "");
		Cat cat;
		cat.SetNick("Soonie");
		cat.About();

		while (true)
		{
			cat.Sleep();
			cat.Play();
			cat.Eat();
			cat.About();
		}
	};
