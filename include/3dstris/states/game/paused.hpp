#pragma once

#include <3dstris/gui.hpp>
#include <3dstris/states/game/ingame.hpp>

class Paused final : public State {
   public:
	explicit Paused(Ingame* parent);

	void update(double dt) override;
	void draw(bool bottom) override;

   private:
	static constexpr Color PAUSED = C2D_Color32(0, 0, 0, 190);

	Ingame* parent;

	Text pausedText;

	GUI gui;

	Button& restartButton;
	Button& unpauseButton;
	Button& menuButton;
};
