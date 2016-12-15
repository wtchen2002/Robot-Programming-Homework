#include <iostream>
#include "robot.h"

int bob::robot::Drive(int distance) {
	robotPosition = robotPosition + distance;
}

int bob::robot::MoveArmTo(int position) {
	armPosition = position;
}

int bob::robot::ScorePiece() {
	if((robotPosition == 6) && (armPosition == 10) && (hasPiece == true)) {
		score += 1;
		hasPiece = false;
	}
}

int bob::robot::PickUpPiece() {
	if((armPosition == 0) && (hasPiece == false)) {
		hasPiece = true;
	}
}

bool bob::robot::GetHasPiece() const {
	return hasPiece;
}

int bob::robot::GetPosition() const {
	return robotPosition;
}

int bob::robot::GetArmPosition() const {
	return armPosition;
}

int bob::robot::GetScore() const {
	return score;
}
