#include <fake_exekutor.h>

int main(int argn, char* args[])
{
	peiskmt_initialize(&argn, args);
	ros::init(argn, args, "fake_ws_node");

	exekutor::FakeExekutor interaction ("ws", "interaction_doro");

	exekutor::ActionExekutor::waitForLink();

	return 0;
}
