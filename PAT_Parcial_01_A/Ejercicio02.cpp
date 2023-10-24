#include "Ejercicio02.h"

int Ejercicio02::countStudents(vector<char>* students, vector<char>* sandwiches)
{
	while (!students->empty() && !sandwiches->empty())
	{
		for (int i = 0; i < students->size(); i++)
		{
			if (students[i] == sandwiches[i])
			{
				students->erase(students->begin());
				sandwiches->erase(sandwiches->begin());
			}
			else
			{
				students->push_back((*students)[i]);
				students->erase(students->begin());

			}
		}
		
	}
	return students->size(); 
}
