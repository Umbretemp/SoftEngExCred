#include "pch.h"
#include "CppUnitTest.h"
#include "..\HelloWorld\helloFunc.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestHelloWorld
{
	TEST_CLASS(TestHelloWorld)
	{
	public:
		
		TEST_METHOD(sanityCheck)
		{
			Assert::AreEqual(true, true);
		}
		TEST_METHOD(funcClassTest)
		{
			std::string captureString;
			std::stringstream captureStream;
			// intercept cout to capture stream
			std::cout.rdbuf(captureStream.rdbuf());
			std::string answer = "Hello World!";
			// Class myClass = new class();
			funcClass myClass;
			// myClass(str);
			myClass.HelloWorld(answer);
			captureString = captureStream.str();
			Assert::AreEqual(captureString, answer);
		}
	};
}

