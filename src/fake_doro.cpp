#include <fake_exekutor.h>

int main(int argn, char* args[])
{
	peiskmt_initialize(&argn, args);
	ros::init(argn, args, "fake_doro_node");

	exekutor::FakeExekutor acquire("doro", "acquire");
	exekutor::FakeExekutor look("doro", "look");
	exekutor::FakeExekutor pickup("doro", "pickup");
	exekutor::FakeExekutor miradock("doro", "miradock");
	exekutor::FakeExekutor dock("doro", "dock");
	exekutor::FakeExekutor moveithand("doro", "moveithand");
	exekutor::FakeExekutor movehand("doro", "movehand");
	exekutor::FakeExekutor fiddle("doro", "fiddle");
	exekutor::FakeExekutor moveto("doro", "moveto");
	exekutor::FakeExekutor finduser("doro", "finduser");
	exekutor::FakeExekutor handover ("doro", "handover");
	exekutor::FakeExekutor putdown ("doro", "putdown");
	exekutor::ActionExekutor::waitForLink();

	return 0;
}
