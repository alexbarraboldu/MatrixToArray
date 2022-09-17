#define M_T_A
#ifdef M_T_A

#include "Header.h"


bool** mtx;
bool* arr;

///	Matrix to array
int main()
{
#pragma region Matrix Init & Assign
	///	Initialize matrix
	mtx = new bool*[height];
	for (size_t i = 0; i < height; i++)
	{
		mtx[i] = new bool[width];
	}

	///	Assign values to matrix
	for (size_t i = 0; i < height; i++)
	{
		for (size_t j = 0; j < width; j++)
		{
			mtx[i][j] = false;
		}
	}
#pragma endregion

#pragma region Print Matrix as Matrix
	///	Print matrix
	for (size_t i = 0; i < height; i++)
	{
		for (size_t j = 0; j < width; j++)
		{
			std::cout << mtx[i][j];
		}
		std::cout << std::endl;
	}
#pragma endregion

	///	Press enter to go next step
	std::cin.get();
	std::cout.flush();

#pragma region Array Init & Assign
	///	Initialize array
	arr = new bool[arrLength];

	///	Assign values to array
	for (size_t i = 0; i < arrLength; i++)
	{
		arr[i] = false;
	}
#pragma endregion

	///	Insert matrix into array
	for (size_t i = 0, j = 0, k = 0; i < arrLength; i++, k++)
	{
		if (k == width)
		{
			k = 0; ++j;
		}
		arr[i] = mtx[j][k];
	}

#pragma region Print Array as Matrix
	///	Print array as a matrix
	for (size_t i = 0, j = 1; i < arrLength; i++)
	{
		if (i == width * j)
		{
			++j;
			std::cout << std::endl;
		}
		std::cout << arr[i];
	}
	std::cout << std::endl;
#pragma endregion

#pragma region Destroy Matrix & Array
	///	Destroy matrix
	for (size_t i = 0; i < height; i++)
	{
		delete[] mtx[i];
	}
	delete[] mtx;

	///	Destroy array
	delete[] arr;
#pragma endregion

	return 0;
}

#endif // M_T_A
