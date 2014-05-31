// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "Pincer.h"
#include "../Robotmap.h"
Pincer::Pincer() : Subsystem("Pincer") {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	pinch = RobotMap::pincerPinch;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}
    
void Pincer::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
void Pincer::Open(){
	pinch->Set(DoubleSolenoid::kReverse);
}
void Pincer::Close(){
	pinch->Set(DoubleSolenoid::kForward);
}
void Pincer::Off(){
	pinch->Set(DoubleSolenoid::kOff);
}
void Pincer::TogglePinch(){
	switch (pinch->Get()){
	case DoubleSolenoid::kForward:
			Open();
			break;
	case DoubleSolenoid::kReverse:
			Close();
			break;
	case DoubleSolenoid::kOff:
			Close();
			break;
	default:
			Off();
			break;
	}
}
