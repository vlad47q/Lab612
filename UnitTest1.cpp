#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6/FileName.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int size = 8;
			int arr[size];
			bool test = false;

			generateArray(arr, size);

			for (int i = 0; i < size; i++) {
				if (arr[i] != 0) {
					test = true;
				}
			}

			Assert::AreEqual(test, true);
		}
	};
}
