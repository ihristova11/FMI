#include <cstring>
#include <iostream>
#include <fstream>

const unsigned int NameLength = 20;
const unsigned int FnLength = 5;

struct Student {
	char* name;
	char* fn;
	unsigned int age;
};

void input_student(Student& s, std::istream& in)
{
	in >> s.age;
	in.ignore();
	in.getline(s.fn, 5);
	in.getline(s.name, 19);
}

void input_students(Student* first, Student* last, std::istream& in)
{
	for (; first != last; ++first)
	{
		input_student(*first, in);
	}
}

void students_to_bin(const Student* first, const Student* last, std::ostream& out)
{
	out.write(reinterpret_cast<const char*>(first), (last - first) * sizeof(Student));
}

int main()
{
   
}