//Entity.cpp
#include "Entity.h"
#include <vector>
namespace CLI
{
	Entity::Entity(String^ name, float xPos, float yPos)
		: ManagedObject(new Core::Entity(string_to_char_array(name), xPos, yPos))
	{
		Console::WriteLine("Creating a new Entity-wrapper object!");
	}
	void Entity::Move(float deltaX, float deltaY)
	{
		Console::WriteLine("The Move method from the Wrapper was called!");
		m_Instance->Move(deltaX, deltaY);
	}
	double Entity::square(double x)
	{
		return m_Instance->square(x);
	}
	double Entity::ccsin(double x)
	{
		return m_Instance->ccsin(x);
	}
	/*
	double* Entity::MyArray(double x)
	{
		return m_Instance->MyArray(x);
	}*/
	array<double>^ Entity::GetVec()
	{
		std::vector<double> tempVec = m_Instance->GetVec();
		const int SIZE = tempVec.size();
		array<double> ^tempArr = gcnew array<double>(SIZE);
		for (int i = 0; i < SIZE; i++)
		{
			tempArr[i] = tempVec[i];
		}
		return tempArr;
	}
	array<double>^ Entity::GetArray(double d)
	{
		std::vector<double> tempVec = m_Instance->GetArray(d);
		const int SIZE = tempVec.size();
		array<double> ^tempArr = gcnew array<double>(SIZE);
		for (int i = 0; i < SIZE; i++)
		{
			tempArr[i] = tempVec[i];
		}
		return tempArr;
	}
}