//#include <iostream>
//#define ARRAY_SIZE 50
//#define LIST_SIZE 10
//
//void GetArray(int &numCount, int array[])
//{
//	int tmp = 0;
//
//
//	while (tmp != -1)
//	{
//		system("cls");
//		printf_s("Enter -1 for exit.\n");
//		printf_s("Enter num: ");
//		scanf_s("%d", &tmp);
//
//		if (tmp >= 0 && tmp < 10 && numCount + 1 < ARRAY_SIZE)
//		{
//			array[numCount++] = tmp;
//		}
//		else if (tmp == -1 || numCount + 1 > ARRAY_SIZE)
//		{
//			break;
//		}
//		else
//		{
//			printf_s("Invalid value!\n");
//			system("pause");
//		}
//
//	}
//
//
//}
//
//bool CheckArray(int array[], int arraySize, int num)
//{
//	for (int i = 0; i < arraySize; i++)
//		if (array[i] == num)
//			return 1;
//
//	return 0;
//}
//
//void GetComb(int& arraySize, int array[], int& subArraySize, int subArray[])
//{
//	int tmp = 0;
//
//	for (int i = 0; i < arraySize; i++)
//		for (int j = 0; j < arraySize; j++)
//		{
//			if ((tmp = array[i] * 10 + array[j]) % 2 == 0 && array[i] != 0 && i != j)
//				if (!CheckArray(subArray, subArraySize, tmp))
//					subArray[subArraySize++] = tmp;
//		}
//
//}
//
//void PrintArray(int array[], int arraySize)
//{
//	for (int i = 0; i < arraySize; i++)
//		printf_s("%d ", array[i]);
//	printf_s("\n");
//}
//
//int main1()
//{
//	int array[ARRAY_SIZE];
//	bool checkList[LIST_SIZE];
//	int arraySize = 0;
//	int subArray[ARRAY_SIZE] = {0};
//	int subArraySize = 0;
//
//	GetArray(arraySize, array);
//
//	GetComb(arraySize, array, subArraySize, subArray);
//
//	PrintArray(array, arraySize);
//	PrintArray(subArray, subArraySize);
//
//	return 0;
//}