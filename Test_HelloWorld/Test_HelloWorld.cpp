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
			std::string testStr = "Hello World!";
			//Class myClass = new class();
			//funcClass myClass;
			// myClass(str);
			//myClass.HelloWorld(testStr);
			std::string answer = "Hello World!";
			Assert::AreEqual(testStr, answer);
		}
	};
}

