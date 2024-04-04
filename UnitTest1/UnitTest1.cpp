#include "pch.h"
#include "CppUnitTest.h"
#include "../LB_10.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
           
        {
            // Створюємо тестовий файл
            std::ofstream file("test.txt");
            file << "abc abc abc";
            file.close();

            // Перевіряємо, чи правильно працює функція
            Assert::AreEqual(3, countOccurrences("test.txt"));

            // Видаляємо тестовий файл після завершення тесту
            remove("test.txt");
        }
	};
}
