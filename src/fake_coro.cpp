#include <fake_exekutor.h>

int main(int argn, char* args[])
{
	peiskmt_initialize(&argn, args);
	ros::init(argn, args, "fake_coro_node");

	exekutor::FakeExekutor loadmap("coro", "loadmap");
	exekutor::FakeExekutor moveto("coro", "moveto");
	exekutor::FakeExekutor miradock("coro", "miradock");
	exekutor::FakeExekutor roller ("coro", "roller");

	exekutor::ActionExekutor::waitForLink();

	return 0;
}
