#pragma once

#include "Graphics.h"
#include "Dude.h"

class Poo
{
public:
	void Init(float in_x, float in_y, float in_vx, float in_vy );
	void Update();
	bool TestCollision( const Dude& dude ) const;
	void Draw( Graphics& gfx ) const;
private:
	float x;// We need to make them float to preserve the decimal point values. When float - > int , decimal point is lost.
	float y;
	float vx;
	float vy;
	static constexpr float width = 24;
	static constexpr float height = 24;
	bool initialized = false;
};