#pragma once

#include <sds.h>
#include <3dstris/colors.hpp>
#include <3dstris/util.hpp>

class Text {
   public:
	Text(const sds text = sdsempty(), Color color = BLACK);
	Text(const char* text, Color color = BLACK);
	~Text();

	Text(const Text& other);
	Text& operator=(const Text& other);

	void setText(const sds text);
	sds getText();

	void setX(float x);
	float getX() const;

	void setY(float y);
	float getY() const;

	void setPos(float x, float y);
	void setPos(Vector2 pos);

	Vector2 getWH() const;

	void setColor(Color color);
	Color getColor() const;

	void setScaleX(float scale);
	void setScaleY(float scale);
	void setScale(Vector2 scale);
	Vector2 getScale() const;

	void draw() const;

   private:
	Vector2 pos;
	Vector2 scale;
	sds text = nullptr;
	Color color;
	C2D_Text textObject;
	C2D_TextBuf textBuffer;
};