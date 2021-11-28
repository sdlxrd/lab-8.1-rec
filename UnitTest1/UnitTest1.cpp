#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Misha\source\repos\lab 8.1 rec 1\lab 8.1 rec 1\lab 8.1 rec 1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[15] = "qwertryt";
			Change(str, 0);
			Assert::AreEqual(str[3], '.');
		}
	};
}
