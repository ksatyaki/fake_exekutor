/*
 * fake_exekutor.cpp
 *
 *  Created on: Dec 15, 2014
 *      Author: ace
 */

#include "fake_exekutor.h"

namespace exekutor {

FakeExekutor::FakeExekutor(std::string robot_name, std::string action_name):
	ActionExekutor(robot_name, action_name)
{
	// TODO Auto-generated constructor stub

}

void FakeExekutor::actionThread()
{
	printf("Hello, %s, %s exekutor was called.", robot_name_.c_str(), action_name_.c_str());
	sleep(4);
	setState(COMPLETED);
}

FakeExekutor::~FakeExekutor() {
	// TODO Auto-generated destructor stub
}

} /* namespace exekutor */
//
//int main(int argn, char* args[])
//{
//	ros::init(argn, args, "fake_exekutor");
//	peiskmt_initialize(&argn, args);
//	exekutor::FakeExekutor fake_1 ("doro", "finduser");
//
//	exekutor::ActionExekutor::waitForLink();
//}
