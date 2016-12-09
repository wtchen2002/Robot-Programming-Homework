#include <iostream>
#include "robot.h"

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

bool robot::GetHasPiece() {
	return hasPiece;
}

int robot::GetPosition() {
	return robotPosition;
}

int robot::GetArmPosition() {
	return armPosition;
}

int robot::GetScore() {
	return score;
}