// 一元二次方程C版.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	while (1)
	{
		printf("Hello,Unary Quadratic Equation Calcutor!\nStared:Ax^2+Bx+C=0\n");
		float A;
		float B;
		float C;
		//A B C的输入
		printf("A=");
		scanf_s("%f", &A);
		printf("B=");
		scanf_s("%f", &B);
		printf("C=");
		scanf_s("%f", &C);
		//判别式计算
		float Delta = B * B - 4 * A * C;
		//运用公式计算//同学们不行啊 初中的知识
		if (Delta < 0)
		{
			printf("No Solve\n");
		}
		else if (Delta == 0)
		{
			float SolveOnly = (-B + sqrt(Delta)) / (2 * (double)A);
			printf("X= %f\n", SolveOnly);
		}
		else
		{
			float Solve1 = (-B + sqrt(Delta)) / (2 * (double)A);
			float Solve2 = (-B - sqrt(Delta)) / (2 * (double)A);
			printf("X1= %f,X2= %f\n", Solve1, Solve2);
		}
		//getch属于conio.h system属于stdlib.h
		printf("Press any key to continue");
		_getch();
		system("cls");
	}
}

// 总结六个字 多查 多看 多改

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
