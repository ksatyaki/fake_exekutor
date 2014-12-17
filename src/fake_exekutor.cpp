/*
 * fake_exekutor.cpp
 *
 *  Created on: Dec 15, 2014
 *      Author: ace
 */

#include "/home/ace/chittaranjan_ros/catkin_ws3/src/fake_exekutor/include/fake_exekutor.h"

namespace exekutor {

FakeExekutor::FakeExekutor(std::string robot_name, std::string action_name):
	ActionExekutor(robot_name, action_name)
{
	// TODO Auto-generated constructor stub

}

void FakeExekutor::actionThread()
{
	printf("Hello, fake exekutor was called");
	sleep(5);
	setState(COMPLETED);
}

FakeExekutor::~FakeExekutor() {
	// TODO Auto-generated destructor stub
}

} /* namespace exekutor */

int main(int argn, char* args[])
{
	ros::init(argn, args, "fake_exekutor");
	peiskmt_initialize(&argn, args);
	exekutor::FakeExekutor fake_1 ("NoDoro", "FakeAction");

	exekutor::ActionExekutor::waitForLink();
}
