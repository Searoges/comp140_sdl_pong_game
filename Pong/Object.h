#pragma once
#include <SDL.h>

class Object
{
public:
	void virtual init()=0;
	void virtual Move() = 0;
	void virtual Render(SDL_Renderer* renderer);

	bool virtual IsColliding(const Object& o);

	void setPosY(float y)
	{
		posY = y;
	};
protected:
	float posX,posY;
	float w,h;
};
