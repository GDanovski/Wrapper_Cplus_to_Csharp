//Entity.cpp
#include "Entity.h"
#include <iostream>
#include <cmath>
#include <vector>
namespace Core
{
	Entity::Entity(const char* name, float xPos, float yPos)
		: m_Name(name), m_XPos(xPos), m_YPos(yPos)
	{
		std::cout << "Created the Entity object!" << std::endl;
	}
	void Entity::Move(float deltaX, float deltaY)
	{
		m_XPos += deltaX;
		m_YPos += deltaY;
		std::cout << "Moved " << m_Name << " to (" << m_XPos << ", " << m_YPos << ")." << std::endl;
	}
	double Entity::square(double x)
	{
		return x * x;
	}
	double Entity::ccsin(double x)
	{
		return sin(x);
	}

	std::vector<double> Entity::GetVec() {
		std::vector<double> arr = { 33.654, 44.654, 55.654 , 121.54, 1234.453 }; // Populate vector your way
		return arr;
	}	
	std::vector<double> Entity::GetArray(double d) {
		std::vector<double> arr = { 0, 0, 0 , 0, 0 }; // Populate vector your way
		double incr = d;
		for (int i = 0; i < arr.size(); i++) {
			arr[i] = incr;
			incr += d;
		}
		return arr;
	}
}