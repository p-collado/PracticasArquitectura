#pragma once
#include "../../common/vector2d.h"
#include "../../common/stdafx.h"
#include "Sprite.h"

class ball
{
	static int counter;
	int id;
	vec2   pos;	// Position.
	vec2   vel;	// Velocity.
	//GLuint gfx;	// OpenGL for id. for visualization purposes.
	Sprite renderinfo;
	float  radius;	// Radius.

public:

	inline float getRadius() { return radius; };
	inline vec2 getPos() { return pos; };
	inline vec2 getVel() { return vel; };
	inline unsigned int getGFX() { return renderinfo.getTexture(); };
	void setRadius(float _radius);
	void setPos(vec2 _pos);
	void setVel(vec2 _vel);
	void setGFX(unsigned int _gfx);
	void Slot(double _elapsed);

	ball(int id);
};

