#pragma once

class Vec2 {

public:
	Vec2() = default;//default constructor
	Vec2(float x_in, float y_in);
	Vec2 operator+(const Vec2& rhs) const;
	Vec2& operator+=(const Vec2& rhs);// Vec2&
	Vec2 operator*(float rhs);
	Vec2& operator*=(float rhs);
private:
	float x;
	float y;
};