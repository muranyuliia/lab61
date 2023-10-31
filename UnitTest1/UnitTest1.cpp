#include "pch.h"
#include "CppUnitTest.h"
#include "../lab61/lab61.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
        TEST_METHOD(GenerateRandomArrayTest)
        {
            int arr[arraySize];
            generateRandomArray(arr, 1, 100); // Мінімальне та максимальне значення

            // Ваші тести для генерації масиву
            // Перевірте, чи масив заповнено коректно
            // Наприклад, перевірте, чи всі елементи знаходяться у вказаному діапазоні
        }

        TEST_METHOD(CountElementsMeetingCriteriaTest)
        {
            int arr[arraySize] = { 3, 5, 7, 14, 21, 4, 7, 10, 11, 9, 28, 77, 35, 6, 21, 91, 70, 30, 9, 14, 5, 7, 21, 9, 28, 6 };
            int count = countElementsMeetingCriteria(arr);

            // Перевірте, чи лічильник підраховує кількість елементів коректно
            Assert::AreEqual(13, count);
        }

        TEST_METHOD(SumElementsMeetingCriteriaTest)
        {
            int arr[arraySize] = { 3, 5, 7, 14, 21, 4, 7, 10, 11, 9, 28, 77, 35, 6, 21, 91, 70, 30, 9, 14, 5, 7, 21, 9, 28, 6 };
            int sum = sumElementsMeetingCriteria(arr);

            // Перевірте, чи сума обчислюється коректно
            Assert::AreEqual(307, sum);
        }

        TEST_METHOD(ReplaceElementsWithZerosTest)
        {
             int arr[arraySize] = { 3, 5, 7, 14, 21, 4, 7, 10, 11, 9, 28, 77, 35, 6, 21, 91, 70, 30, 9, 14, 5, 7, 21, 9, 28, 6 };
    replaceElementsWithZeros(arr);

    // Перевірте, чи елементи, які не задовольняють умовам, дійсно замінюються нулями
    int expected[arraySize] = { 3, 0, 7, 14, 21, 0, 7, 0, 11, 0, 28, 77, 35, 6, 21, 91, 0, 0, 9, 14, 0, 7, 21, 0, 28, 6 };
    for (int i = 0; i < arraySize; i++) {
        Assert::AreEqual(expected[i], arr[i]);
            }
        }
    };
}