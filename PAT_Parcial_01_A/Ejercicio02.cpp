#include "Ejercicio02.h"

int Ejercicio02::countStudents(vector<char>* students, vector<char>* sandwiches)
{
	while (!students->empty() && !sandwiches->empty())
	{
		if (students[0] == sandwiches[0])
		{
			students->erase(students->begin());
			sandwiches->erase(sandwiches->begin());
		}
		else
		{
			students->push_back(students[0]); 
			students->erase(students->begin()); 

		}
	}
	return students->size(); 
}
