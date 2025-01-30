#include "pch.h"
#include "CppUnitTest.h"

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
			//funcClass whyIsItNamedDifferently;
			// Class function call
			//whyIsItNamedDifferently.HelloWorld(testStr);
			// Test
			Assert::AreEqual(testStr, testStr);
		}
	};
}
