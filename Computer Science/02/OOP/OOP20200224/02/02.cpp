#include <iostream>

const unsigned int MaxLength = 128;

enum AnimalType { Mammal, Carnivore, Herbivore };

// task 01
struct Animal {
	AnimalType type;
	char* name;
	unsigned int age;
};

// task 03
struct Zoo {
	char* name;
	Animal* animals;
	unsigned int current;
	unsigned int max;
};

// task 02
void initAnimal(Animal& a)
{
	char name[MaxLength];
	int type;

	// name
	std::cout << "Enter name: ";
	std::cin.ignore();
	std::cin.getline(name, 127);
	a.name = new char[strlen(name)];
	strcpy(a.name, name);

	// age
	std::cout << "Enter age: ";
	std::cin >> a.age;

	// type
	std::cout << "Enter type: ";
	std::cin >> type;
	a.type = (AnimalType)(type);
}
void initAnimals(int n, Animal animals[])
{
	for (int i = 0; i < n; i++)
	{
		initAnimal(animals[i]);
	}
}

void initZoo(Zoo& z, char* name, Animal* a, size_t count, size_t maxCount)
{
	z.name = new char[strlen(name)];
	strcpy(z.name, name);

	z.current = count;
	z.max = maxCount;

	z.animals = a;
	for (int i = 0; i < z.current; i++)
	{
		initAnimal(a[i]);
	}
}

bool hasSpicies(const Zoo& z, AnimalType spicies)
{
	bool res = false;
	for (int i = 0; i < z.current; i++)
	{
		if ((z.animals + i)->type == spicies)
		{
			res = true;
			break;
		}
	}
	return res;
}

void deleteZoo(Zoo& z)
{
	for (int i = 0; i < z.current; i++)
	{
		delete (z.animals + i)->name;
	}
	delete[] z.animals;
	delete z.name;
	delete z.animals;
}

int main()
{
	int n = 2;
	Zoo z;
	char name[51];
	std::cin.getline(name, 50);
	Animal a[2];	
	initZoo(z, name, a, 2, 3);

	deleteZoo(z);
}