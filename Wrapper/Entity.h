//Entity.h
#pragma once
#include "ManagedObject.h"
#include "../Project1/Project1/Core.h"
#include <vector>
using namespace System;
namespace CLI
{
	public ref class Entity : public ManagedObject<Core::Entity>
	{
	public:

		Entity(String^ name, float xPos, float yPos);
		void Move(float deltaX, float deltaY);
		double square(double x);
		double ccsin(double x);
		array<double> ^GetVec();
		array<double> ^GetArray(double d);
		property float XPosition
		{
		public:
			float get()
			{
				return m_Instance->GetXPosition();
			}
		private:
			void set(float value)
			{
			}
		}
		property float YPosition
		{
		public:
			float get()
			{
				return m_Instance->GetYPosition();
			}
		private:
			void set(float value)
			{
			}
		}
	};
}
