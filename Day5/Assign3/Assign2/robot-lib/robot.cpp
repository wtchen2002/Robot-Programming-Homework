#include <iostream>
#include "robot.h"

namespace bob {

int robot::Drive(int distance) {
	robotPosition = robotPosition + distance;
}

int robot::MoveArmTo(int position) {
	armPosition = position;
}

int robot::ScorePiece() {
	if((robotPosition == 6) && (armPosition == 10) && (hasPiece == true)) {
		score += 1;
		hasPiece = false;
	}
}

int robot::PickUpPiece() {
	if((armPosition == 0) && (hasPiece == false)) {
		hasPiece = true;
	}
}

bool robot::GetHasPiece() const {
	return hasPiece;
}

int robot::GetPosition() const {
	return robotPosition;
}

int robot::GetArmPosition() const {
	return armPosition;
}

int robot::GetScore() const {
	return score;
}

}
