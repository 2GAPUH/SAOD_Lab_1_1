//#include <iostream>
//#define ARRAY_SIZE 50
//#define LIST_SIZE 10
//
//void GetArray(int& numCount, int array[], int subArray[])
//{
//	int tmp = 0;
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
//			subArray[tmp] += 1;
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
//void GetComb(int numList[])
//{
//	for(int i = 0; i < LIST_SIZE;i++)
//		for(int j = 0; j < LIST_SIZE;j+= 2)
//			if (i != 0 && numList[i] != 0 && numList[j] != 0)
//			{
//				if(i == j && numList[i] > 1)
//					printf_s("%d ", i * 10 + j);
//				else if(i != j)
//					printf_s("%d ", i * 10 + j);
//
//			}
//}
//
//void PrintArray(int array[], int arraySize)
//{
//	for (int i = 0; i < arraySize; i++)
//		printf_s("%d ", array[i]);
//	printf_s("\n");
//}
//
//int main()
//{
//	int array[ARRAY_SIZE] = {0};
//	int numList[LIST_SIZE] = {0};
//	int arraySize = 0;
//
//	GetArray(arraySize, array, numList);
//
//	PrintArray(array, arraySize);
//
//	GetComb(numList);
//
//	return 0;
//}