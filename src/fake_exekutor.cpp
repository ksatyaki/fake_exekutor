/*
 * fake_exekutor.cpp
 *
 *  Created on: Dec 15, 2014
 *      Author: ace
 *
Use with company-mode autocomplete with clang:
(add-to-list 'company-clang-arguments '"-I/home/ace/chittaranjan_ros/catkin_ws3/src/action_exekutor/include")
(add-to-list 'company-clang-arguments '"-I/home/ace/chittaranjan_ros/catkin_ws3/src/fake_exekutor/include")
(add-to-list 'company-c-headers-path-system "/home/ace/chittaranjan_ros/catkin_ws3/src/fake_exekutor/include")
 */

#include "fake_exekutor.h"

namespace exekutor {

FakeExekutor::FakeExekutor(std::string robot_name, std::string action_name):
	ActionExekutor(robot_name, action_name)
{
	srand(time(NULL));

}

void FakeExekutor::actionThread()
{
	printf("\nHello, %s, %s exekutor was called.", robot_name_.c_str(), action_name_.c_str());

	std::vector <double> all_params = extractParams(getParamTuple().data);

	if(all_params.size() == 2)
	{
		float a = all_params[0];
		float b = all_params[1];
		long random_num = rand() % int(b - a);
		printf("\nSleeping for %ld seconds", (long)(random_num + a));
		usleep((random_num + a) * 1000000) ;
	}
	else if(all_params.size() == 1)
	{
		printf("\nSleeping for %d seconds", (int)(all_params[0]));
		sleep(all_params[0]);
	}
	else
	{
		printf("\nSleeping for %d seconds", 4);
		sleep(4);
	}

	printf("\nCOMPLETED --- %s.%s", this->robot_name_.c_str(), this->action_name_.c_str());
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
