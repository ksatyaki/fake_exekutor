/*
 * fake_exekutor.h
 *
 *  Created on: Dec 15, 2014
 *      Author: ace
 */

#ifndef FAKE_EXEKUTOR_INCLUDE_FAKE_EXEKUTOR_H_
#define FAKE_EXEKUTOR_INCLUDE_FAKE_EXEKUTOR_H_

#include <vector>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <exekutor/action_exekutor.h>

namespace exekutor {

class FakeExekutor: public ActionExekutor
{
	void actionThread ();
public:
	FakeExekutor(std::string robot_name, std::string action_name);
	virtual ~FakeExekutor();
};

} /* namespace exekutor */

#endif /* FAKE_EXEKUTOR_INCLUDE_FAKE_EXEKUTOR_H_ */
