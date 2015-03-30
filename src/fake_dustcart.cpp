#include <fake_exekutor.h>

int main(int argn, char* args[])
{
	peiskmt_initialize(&argn, args);
	ros::init(argn, args, "fake_dustcart_node");

	exekutor::FakeExekutor loadmap("dustcart", "dock");
	exekutor::FakeExekutor moveto("dustcart", "moveto");
	exekutor::FakeExekutor miradock("dustcart", "bin");
	exekutor::FakeExekutor stargui("dustcart", "startgui");
	exekutor::ActionExekutor::waitForLink();
	return 0;
}
