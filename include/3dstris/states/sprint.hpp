#pragma once

#include <3dstris/states/ingame.hpp>
#include <3dstris/util/text.hpp>

class Sprint : public Ingame {
   public:
	Sprint();

	void update(const double dt) override;
	void draw(const bool bottom) override;

	void reset() override;

   private:
	Text infoText;
	double time;

	const double startTime = 1.0;
	double startTimer;
};
