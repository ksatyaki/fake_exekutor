#include <fake_exekutor.h>

int main(int argn, char* args[])
{
	peiskmt_initialize(&argn, args);
	ros::init(argn, args, "fake_elevator_node");

	exekutor::FakeExekutor door("elevator", "door");
	exekutor::FakeExekutor moveto("elevator", "moveto");

	exekutor::ActionExekutor::waitForLink();

	return 0;
}
