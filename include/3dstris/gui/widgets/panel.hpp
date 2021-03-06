#pragma once

#include <3dstris/game.hpp>
#include <3dstris/gui/widget.hpp>

class GUI;
class Panel : public Widget {
   public:
	Panel(GUI& parent, Pos pos, WH wh, bool outline = true,
		  const Color& color = Game::get().getTheme().panel,
		  const Color& outlineColor = Game::get().getTheme().panelOutline);

	void draw() const override;
	void update(touchPosition, touchPosition) override;

   private:
	const Color& color;
	const Color& outlineColor;

	bool outline;
};
