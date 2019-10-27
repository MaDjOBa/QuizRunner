#define CTEST_MAIN
#include <ctest.h>
#include "funcAnswer.h"
#include "ctestRfunc.h"


CTEST(funcAnswer, correct_answer)
{
	char answer = '1';
	char a = '4';
	char b = '2';
	char c = '3';
	char d = '1';
	ASSERT_EQUAL(1, funcAnswer(answer, a, b, c, d));
}

CTEST(funcAnswer, wrong_answer)
{
	char answer = '1';
	char a = '1';
	char b = '2';
	char c = '3';
	char d = '4';
	ASSERT_EQUAL(0, funcAnswer(answer, a, b, c, d));
}


CTEST(funcAnswer, an_invalid_response1)
{
	char answer = '6';
	char a = '1';
	char b = '2';
	char c = '3';
	char d = '4';
	ASSERT_EQUAL(2, funcAnswer(answer, a, b, c, d));
}

CTEST(funcAnswer, an_invalid_response2)
{
	char answer = 'g';
	char a = '1';
	char b = '2';
	char c = '3';
	char d = '4';
	ASSERT_EQUAL(2, funcAnswer(answer, a, b, c, d));
}

CTEST(funcAnswer, an_invalid_response3)
{
	char answer = '!';
	char a = '1';
	char b = '2';
	char c = '3';
	char d = '4';
	ASSERT_EQUAL(2, funcAnswer(answer, a, b, c, d));
}

CTEST(funcAnswer, an_invalid_response4)
{
	char answer = '0';
	char a = '1';
	char b = '2';
	char c = '3';
	char d = '4';
	ASSERT_EQUAL(2, funcAnswer(answer, a, b, c, d));
}

CTEST(RfuncAnswer, correct_answerR)
{
	char answer = '2';
	char a = '1';
	char b = '2';
	ASSERT_EQUAL(1, RfuncAnswer(answer, a, b));
}

CTEST(RfuncAnswer, wrong_answerR)
{
	char answer = '1';
	char a = '1';
	char b = '2';
	ASSERT_EQUAL(0, RfuncAnswer(answer, a, b));
}


CTEST(RfuncAnswer, an_invalid_response1R)
{
	char answer = '6';
	char a = '1';
	char b = '2';
	ASSERT_EQUAL(2, RfuncAnswer(answer, a, b));
}

CTEST(RfuncAnswer, an_invalid_response2R)
{
	char answer = 'g';
	char a = '1';
	char b = '2';
	ASSERT_EQUAL(2, RfuncAnswer(answer, a, b));
}

CTEST(RfuncAnswer, an_invalid_response3R)
{
	char answer = '!';
	char a = '1';
	char b = '2';
	ASSERT_EQUAL(2, RfuncAnswer(answer, a, b));
}

CTEST(RfuncAnswer, an_invalid_response4R)
{
	char answer = 'U';
	char a = '1';
	char b = '2';
	ASSERT_EQUAL(2, RfuncAnswer(answer, a, b));
}



int main(int argc, const char** argv)
{
    return ctest_main(argc, argv);
}
