#include "pch.h"
#include "CppUnitTest.h"
#include "..\HelloWorld\helloFunc.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestHelloWorld
{
	TEST_CLASS(TestHelloWorld)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// answer test variable
			std::string testStr = "Hello World!";
			// class initialize

			// Class function call

			// Test
			Assert::AreEqual(testStr, testStr);
		}
	};
}
