#pragma once

#include "Graphics.h"
#include "Keyboard.h"
#include "Vec2.h"
#include "Mouse.h"

class Dude
{
public:
	void ClampToScreen();
	void Draw( Graphics& gfx ) const;
	void Update( const Keyboard& kbd, Mouse& mouse,float dt );
	Vec2 GetPos() const;
	float GetWidth() const;
	float GetHeight() const;
private:
	Vec2 pos = Vec2(400.0f, 300.0f);
	Vec2 direction = Vec2(0.0f, 0.0f);
	static constexpr float speed = 2.0f * 60.0f;
	static constexpr float width = 20.0f;
	static constexpr float height = 20.0f;
	bool mouseisClicked = true;
};