#include <iostream>
#include <windows.h>
using namespace std;
void printMaze();
void gotoxy(int x, int y);
char getCharAtxy(short int x, short int y);
main()
{
    int pacmanX = 4; 
    int pacmanY = 4; 
    bool gameRunning = true;
    system("cls");
    printMaze();
    gotoxy(pacmanX, pacmanY);
    cout << "P";
    while (gameRunning)
    {
        if (GetAsyncKeyState(VK_LEFT))
        {
            char nextLocation = getCharAtxy(pacmanX - 1, pacmanY);
            if (nextLocation == ' ')
            {
                gotoxy(pacmanX, pacmanY);
                cout << " ";
                pacmanX = pacmanX - 1;
                gotoxy(pacmanX, pacmanY);
                cout << "P";
            }
        }
            if (GetAsyncKeyState(VK_RIGHT))
            {
                char nextLocation = getCharAtxy(pacmanX + 1, pacmanY);
                if (nextLocation == ' ')
                {
                    gotoxy(pacmanX, pacmanY);
                    cout << " ";
                    pacmanX = pacmanX + 1;
                    gotoxy(pacmanX, pacmanY);
                    cout << "P";
                }
            }
            if (GetAsyncKeyState(VK_UP))
            {
                char nextLocation = getCharAtxy(pacmanX, pacmanY - 1);
                if (nextLocation == ' ')
                {
                    gotoxy(pacmanX, pacmanY);
                    cout << " ";
                    pacmanX = pacmanY - 1;
                    gotoxy(pacmanX, pacmanY);
                    cout << "P";
                }
            }
            if (GetAsyncKeyState(VK_DOWN))
            {
                char nextLocation = getCharAtxy(pacmanX, pacmanY + 1);
                if (nextLocation == ' ')
                {
                    gotoxy(pacmanX, pacmanY);
                    cout << " ";
                    pacmanX = pacmanY + 1;
                    gotoxy(pacmanX, pacmanY);
                    cout << "P";
                }
            }
            if (GetAsyncKeyState(VK_ESCAPE))
            {
                gameRunning = false;
            }
            Sleep(200);
  }
    
}
void printMaze()
{
    cout << "%%%%%%%%%%" << endl;
    cout << "%        %" << endl;
    cout << "%        %" << endl;
    cout << "%        %" << endl;
    cout << "%        %" << endl;
    cout << "%        %" << endl;
    cout << "%        %" << endl;
    cout << "%        %" << endl;
    cout << "%        %" << endl;
    cout << "%%%%%%%%%%" << endl;
}
char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}