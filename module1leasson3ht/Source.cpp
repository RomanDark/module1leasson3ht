#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main()
{
	setlocale(LC_ALL, "Rus");

	int n=0;

	/*printf("������ ����� ������� ");
	scanf("%d", &n);*/
	
	do
	{
		printf("������ ����� ������� ");
		scanf("%d", &n);


		if (n == 1) {
			float  x, a, y, z;

			printf("1.	��������, ��� X �� ������ ����� A ������. ����������, ������� ����� 1 �� � Y �� ���� �� ������. \n");
			printf("x = ");
			scanf("%f", &x);

			printf("a = ");
			scanf("%f", &a);

			z = a / x;
			x = a*x;

			printf("��������� 1 �� = %d\n ��������� X �� = %d\n", z, x);
		}
		else

			if (n == 2) {
				printf("2.	������ �������� ��������� A�x + B = 0, �������� ������ �������������� A � B (����������� A �� ����� 0).\n");

				float a, b, x;

			start:

				printf("������� �������� � = ");
				scanf("%f", &a);

				printf("������� �������� b = ");
				scanf("%f", &b);

				if (a != 0) {
					x = -b / a;
					printf("x = %f\n", x);
				}
				else {
					printf("�������� � ������ ���� ������ 0\n");
					goto start;
				}
			}
			else 
				if (n == 3) {

					printf("3.	� ������ ����� ������ N ������ (N � �����). ����� ���������� ������ �����, ��������� � ������ �����.\n");

					int N = 0;
					float m = 0;

					printf("������� ���������� ��������� ������ = ");
					scanf("%d", &N);

						m = N / 60;

					printf("������ %.0f �����(�)\n", m);

				}
				else if (n == 4) {

					printf("4.	�������� ������� ���������� V1 ��/�, ������� � V2 ��/�, ���������� ����� ���� S ��.\n"); 
					printf("���������� ���������� ����� ���� ����� T �����, ���� ���������� ������������� �������� ��������� ���� �����.\n");
					printf("������ ���������� ����� ������ �������� ���������� ���������� � ������ ����, ������������ ������������; ����� ���� = ����� * ��������� ��������\n");


					int u1 = 0, u2 = 0, s = 0, t = 0;
					float p;

					printf("�������� ������� ���������� = ");
					scanf("%d", &u1);

					printf("�������� ������� ���������� = ");
					scanf("%d", &u2);

					printf("��������� ����� ���� = ");
					scanf("%d", &s);

					printf("���������� ����� = ");
					scanf("%d", &t);

				    p = abs(s - ((u1 + u2)*t));

					printf("��������� ����� ���� ����� %d �����(�) = %.0f ��\n", t, p);
				}
				else if (n == 5) {
					printf("5.	���� ����� ������ �������������� ���������������. ����� ��� ����� � ������� ������� �����������\n");

					int a = 0, b = 0, c = 0;
					float v,s;

					printf("������� ����� ����� �������������� ��������������� a = ");
					scanf("%d", &a);

					printf("������� ����� ����� �������������� ��������������� b = ");
					scanf("%d", &b);

					printf("������� ����� ����� �������������� ��������������� c = ");
					scanf("%d", &c);

					printf("����� �������������� ��������������� = %d\n", a * b * c);
					printf("������� ����������� �������������� ��������������� = %d\n", 2 * (a * b + b * c + a * c));

				}
				else if (n == 6) {
					printf("6.	�������� ���������� �� ��������� ���� �����. ��������� ��������� ���������� ���������� ����� ����.\n\n");

					float x1, x2, y1 = 0, y2;

					printf("������� ���������� 1 ����� x = " );
					scanf("%f", &x1);
					printf("y = ");
					scanf("%f", &y1);
					printf("������� ���������� 2 ����� x = ");
					scanf("%f", &x2);
					printf("y = ");
					scanf("%f", &y2);

					printf("z = %.2f\n", sqrt(pow((x1 - x2),2) + pow((y1 - y2),2)));
				}
				else if (n == 7) {
					printf("7.	�������� ����� � ����� ����. ���������� ��������� ��������� ����� ����\n");

					float v, m;

					printf("V = ");
					scanf("%f", &v);

					printf("m = ");
					scanf("%f", &m);

					printf("��������� = %.2f\n", m / v);				
				}
				else if (n == 8) {
					
					printf("a.	���������� �������� ������� z= x^3 � 2.5xy+1.87x^2+1 ��� ����� ��������� � � y;\n");
					
					float x, y, a, b;

					printf("x = ");
					scanf("%f", &x);

					printf("y = ");
					scanf("%f", &y);

					printf("z = %.2f\n", pow(x, 3) - 2.5 * x*y + 1.87 * pow(x, 2) + 1);

					printf("b.���������� �������� ������� x = 3.56 a + b3 - 5.8b2 + 3.8a - 1.5 ��� ����� ��������� a � b.\n");
					
					printf("a = ");
					scanf("%f", &a);

					printf("b = ");
					scanf("%f", &b);

					printf("x = %.2f\n", 3.56 * a + pow(b, 3) - 5.8*pow(b, 2) + 3.8*a - 1.5);

				}  
				else if (n == 9) {
					printf("9.	���� ������� ��������. ����� ��� ��������\n");

					int a = 0, p;

					printf("������� �������� = ");
					scanf("%d", &a);

					printf("�������� = %d\n", 4 * a);	
				}
				else if (n == 10) {
					printf("10.	��� ������ ����������.����� �� �������.\n");

					float r;

					printf("r = ");
					scanf("%f", &r);

					printf("d = %.2f\n", 2 * r);
				}
				
	

	} while (n>0);
}
