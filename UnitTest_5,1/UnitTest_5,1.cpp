#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51
{
	TEST_CLASS(UnitTest51)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double a = 5, b = 4, t1, t2, t3, t4, t, e = 2;

			t1 = h(a * a, 1, b);
			t2 = h(b, 1, a * a);
			t3 = t2 + t1;
			t4 = h(1, a * b, 1);
			t = t3 / t4; 
			double g = 35 - t; 
			Assert::IsTrue(g < 2);
		}
	};
}
