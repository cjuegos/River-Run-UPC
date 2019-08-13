// BOSS.cpp : main project file.

#include "stdafx.h"
#include "iostream"
#include "conio.h"
#include "windows.h"
using namespace System;
using namespace std;
#define fil 25
#define col 80
int main()
{
	int matriz[fil][col] =
	{ { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1 },
	{ 1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1 },
	{ 1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1 },
	{ 1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1 },
	{ 1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1 },
	{ 1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1 },
	{ 1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1 },
	{ 1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1 },
	{ 1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1 },
	{ 1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1 },
	{ 1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1 },
	{ 1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1 },
	{ 1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1 },
	{ 1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1 },
	{ 1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1 },
	{ 1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1 },
	{ 1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1 },
	{ 1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1 },
	{ 1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1 },
	{ 1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1 },
	{ 1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1 },
	{ 1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1 },
	{ 1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1 },
	{ 6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1 } };
	for (int i = 0; i < 25; i++)
	{
		for (int j = 0; j < 80; j++)
		{

			if (matriz[i][j] == 1)
				Console::BackgroundColor = ConsoleColor::DarkGreen;

			if (matriz[i][j] == 2)
				Console::BackgroundColor = ConsoleColor::DarkGreen;

			if (matriz[i][j] == 3)
				Console::BackgroundColor = ConsoleColor::DarkBlue;
			if (matriz[i][j] == 6)
				Console::BackgroundColor = ConsoleColor::Black;
			if (matriz[i][j] == 8)
				Console::BackgroundColor = ConsoleColor::DarkBlue;
			if (matriz[i][j] == 9)
				Console::BackgroundColor = ConsoleColor::DarkBlue;
			cout << " ";
		}
		cout << endl;
	}
	int tecla;
	int jx = 40, jy = 24;
	int ex = 40, ey = 4;
	int e2x = 40, e2y = 3;
	int e3x = 40, e3y = 2;
	int dx = 1, d2x = 1, d3x = 1;
	int tjy = jy, tey = ey, te3y = e3y;
	int te2y = e2y;
	int tc = 19;
	int mx = 40, my = 5;
	int m2x = 44, m2y = 8;
	int m3x = 47, m3y = 7;
	int m4x = 38, m4y = 9;
	//Corazones
	Console::BackgroundColor = ConsoleColor::DarkGreen;
	Console::ForegroundColor = ConsoleColor::DarkRed;
	Console::SetCursorPosition(6, tc);
	cout << "Vidas :" << endl;
	Console::SetCursorPosition(6, tc + 1);
	cout << char(03) << " " << char(03) << " " << char(03) << " " << char(03);
	int NumeroDeVidas = 4;
	//Posicionar al jugador
	Console::BackgroundColor = ConsoleColor::DarkBlue;
	Console::ForegroundColor = ConsoleColor::Red;
	Console::SetCursorPosition(jx, tjy);
	cout << char(2);
	int contm = 0;
	//COMODIN
	int c1 = 52, c2 =12;
	int CC = 0;
	int c3 = 40, c4 = 10;
	int c5 = 20, c6 = 20;
	do
	{
		//Jugador
		if (kbhit())
		{
			Console::BackgroundColor = ConsoleColor::DarkBlue;
			Console::ForegroundColor = ConsoleColor::Red;
			tecla = getch();
			if (tecla == 224)
			{
				Console::SetCursorPosition(jx, tjy);
				cout << " ";
				tecla = getch();
				if (tecla == 72 && matriz[jy - 1][jx] != 2 && matriz[jy - 1][jx] != 1)
				{
					tjy--;
					jy--;
				}
				if (tecla == 80 && matriz[jy + 1][jx] != 2 && matriz[jy][jx] != 8)
				{
					tjy++;
					jy++;
				}
				if (tecla == 75 && matriz[jy][jx - 1] != 2 && matriz[jy][jx - 1] != 1 && matriz[jy][jx - 1] != 6)
					jx--;
				if (tecla == 77 && matriz[jy][jx + 1] != 2 && matriz[jy][jx + 1] != 1 && matriz[jy][jx + 1] != 6)
					jx++;
				Console::SetCursorPosition(jx, tjy);
				Console::BackgroundColor = ConsoleColor::DarkBlue;
				Console::ForegroundColor = ConsoleColor::Red;
				cout << char(2);
			}
		}
		//Enemigo 1
		Console::BackgroundColor = ConsoleColor::DarkBlue;
		Console::ForegroundColor = ConsoleColor::Yellow;
		Console::SetCursorPosition(ex, tey);
		cout << "     ";
		if (matriz[ey][ex + 5] == 2 || matriz[ey][ex - 1] == 2)
			dx = dx*-1;
		ex = ex + dx;
		Sleep(10);
		Console::SetCursorPosition(ex, tey);
		cout << "l---l";
		//Enemigo 2
		
		Console::SetCursorPosition(e2x, te2y);
		cout << "     ";
		if (matriz[e2y][e2x + 5] == 2 || matriz[e2y][e2x - 1] == 2)
			d2x = d2x*-1;
		e2x = e2x + d2x;
		Console::SetCursorPosition(e2x, te2y);
		cout << "l-0-l";
		Sleep(10);
		//Enemigo 3
		Console::SetCursorPosition(e3x, te3y);
		cout << "     ";
		if (matriz[e3y][e3x + 5] == 2 || matriz[e3y][e3x - 1] == 2)
			d3x = d3x*-1;
		e3x = e3x + d3x;
		Console::SetCursorPosition(e3x, te3y);
		cout << "l---l";
		Sleep(10);
		//Misil 1
		if (matriz[my][mx] != 9)
		{
			Console::ForegroundColor = ConsoleColor::White;
			Console::SetCursorPosition(mx, my);
			cout << " ";
			my++;
			Console::SetCursorPosition(mx, my);
			cout << "!";
		}
		if (matriz[my][mx] == 9 || matriz[my][mx] == 2 || matriz[my][mx] == 8)
		{
			Console::SetCursorPosition(mx, my);
			cout << "     ";
			mx = ex;
			my = ey - 1;
		}
		//Misil 2
		if (matriz[m2y][m2x] != 9)
		{
			Console::ForegroundColor = ConsoleColor::White;
			Console::SetCursorPosition(m2x, m2y);
			cout << " ";
			m2y++;
			Console::SetCursorPosition(m2x, m2y);
			cout << "!";
		}
		if (matriz[m2y][m2x] == 9 || matriz[m2y][m2x] == 2 || matriz[m2y][m2x] == 8)
		{
			Console::SetCursorPosition(m2x, m2y);
			cout << " ";
			m2x = e2x;
			m2y = e2y - 1;
		}

		//Misil 3
		if (matriz[m3y][m3x] != 9)
		{
			Console::ForegroundColor = ConsoleColor::White;
			Console::SetCursorPosition(m3x, m3y);
			cout << " ";
			m3y++;
			Console::SetCursorPosition(m3x, m3y);
			cout << "!";
		}
		if (matriz[m3y][m3x] == 9 || matriz[m3y][m3x] == 2 || matriz[m3y][m3x] == 8)
		{
			Console::SetCursorPosition(m3x, m3y);
			cout << " ";
			m3x = e2x;
			m3y = e2y - 1;
		}
		//Misil 4
		if (matriz[m4y][m4x] != 9)
		{
			Console::ForegroundColor = ConsoleColor::White;
			Console::SetCursorPosition(m4x, m4y);
			cout << " ";
			m4y++;
			Console::SetCursorPosition(m4x, m4y);
			cout << "!";
		}
		if (matriz[m4y][m4x] == 9 || matriz[m4y][m4x] == 2 || matriz[m4y][m4x] == 8)
		{
			Console::SetCursorPosition(m4x, m4y);
			cout << " ";
			m4x = e3x;
			m4y = e2y - 1;
		}
		//SacarVidas
		if ((ex == jx && ey == jy) || (e2x == jx && e2y == jy) || (e3x == jx && e3y == jy) || (mx == jx && my == jy) || (m2x == jx && m2y == jy) || (m4x == jx && m4y == jy) || (m3x == jx && m3y == jy))
		{
			Console::BackgroundColor = ConsoleColor::DarkGreen;
			NumeroDeVidas--;
			if (NumeroDeVidas == 3)
			{
				Console::SetCursorPosition(12, tc + 1);
				cout << "*";
				Sleep(50);
				Console::SetCursorPosition(12, tc + 1);
				cout << " ";
			}

			if (NumeroDeVidas == 2)
			{
				Console::SetCursorPosition(10, tc + 1);
				cout << "*";
				Sleep(50);
				Console::SetCursorPosition(10, tc + 1);
				cout << " ";
			}
			if (NumeroDeVidas == 1)
			{
				Console::SetCursorPosition(8, tc + 1);
				cout << "*";
				Sleep(50);
				Console::SetCursorPosition(8, tc + 1);
				cout << " ";
			}

			if (NumeroDeVidas == 0)
			{
				Console::SetCursorPosition(6, tc + 1);
				cout << "*";
				Sleep(150);
				Console::SetCursorPosition(6, tc + 1);
				cout << " ";
				jx = 40, tjy = 23; jy = 23;
				Console::SetCursorPosition(6, tc + 1);
				Console::ForegroundColor = ConsoleColor::DarkRed;
				cout << char(03) << " " << char(03) << " " << char(03) << " " << char(03);
				Console::BackgroundColor = ConsoleColor::DarkBlue;
				NumeroDeVidas = NumeroDeVidas + 4;
			}
		}
		Console::SetCursorPosition(c1, c2);
		Console::ForegroundColor = ConsoleColor::Cyan;
		if (c1 == 0)
		{
			Console::ForegroundColor = ConsoleColor::DarkGreen;
			Console::BackgroundColor = ConsoleColor::DarkGreen;
		}
		
		cout << char(2);

		Console::SetCursorPosition(c3, c4);
		Console::ForegroundColor = ConsoleColor::Cyan;
		if (c3 == 0)
		{
			Console::ForegroundColor = ConsoleColor::DarkGreen;
			Console::BackgroundColor = ConsoleColor::DarkGreen;
		}
		cout << char(2);

		Console::SetCursorPosition(c5, c6);
		Console::ForegroundColor = ConsoleColor::Cyan;
		if (c5 == 0)
		{
			Console::ForegroundColor = ConsoleColor::DarkGreen;
			Console::BackgroundColor = ConsoleColor::DarkGreen;
		}
		cout << char(2);

		if(jx == c1 && jy == c2)
		{ 
		 CC++;
		 c1 = c3;
		 c2 = c4;
		}

		if (jx == c3 && jy == c4)
		{
			CC++;
			c3 = 0;
			c4 = 0;
		}

		if (jx == c5 && jy == c6)
		{
			CC++;
			c5 = 0;
			c6 = 0;
		}
	} while (CC < 3 || matriz[jy][jx] !=9 );
}

