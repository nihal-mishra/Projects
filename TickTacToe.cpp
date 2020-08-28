#include<iostream>
#include<unistd.h>
using namespace std;

char matrix[3][3];
char player = 'X';
int turns = 0;

void mat()
{
    char x='1';
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            {
                matrix[i][j]=x;
                ++x;
            }
}

void draw()
{
    if(player=='X')
        cout<<"\n\t\x1B[94mIt's Player X's (Your) turn\t\x1B[37m\n\n";
    if(player == 'O')
        {
            cout<<"\n\t\x1B[92mIt's Player O's (Computer) turn\t\x1B[37m\n\n";
            sleep(2);
        }
    for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(matrix[i][j] == 'X')
                {
                    cout<<"\x1B[94m"<<matrix[i][j]<<"\x1B[37m ";
                }
                else if(matrix[i][j] == 'O')
                {
                    cout<<"\x1B[92m"<<matrix[i][j]<<"\x1B[37m ";
                }
                else
                    cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
}
void computer_turn()
{
    while(1)
    {
        int comp = (rand() % 9)+1;
        int r = (comp-1)/3;
        int c = (comp-1)%3;
        char pos = matrix[r][c];

        if(pos == 'X' || pos == 'Y')
            continue;
        else
        {
            matrix[r][c] = 'O';
            break;
        }
    }
    sleep(2);
}

void playerToggle()
{
    if(player == 'X')
        {
            player = 'O';
            computer_turn();
        }    
    else
        player = 'X';
}

void input()
{
    if(player == 'X')
    {
        int x=0;
        cout<<"\n\nEnter the no. where you want to make the move :: ";
        cin>>x;
        cout<<"\n";
        if(x>=1 && x<10)
        {
            if(x==1)
            {   
                if(matrix[0][0]=='X')
                {
                    system("clear");
                    cout<<"\n\x1b[31mA move in this spot is already made in this spot\nTry again!\x1b[37m\n"<<endl;
                    draw();
                    input();
                }
                else if(matrix[0][0]=='O')
                {
                    system("clear");
                    cout<<"\n\x1b[31mA move in this spot is already made in this spot\nTry again!\x1b[37m\n"<<endl;
                    draw();
                    input();
                }
                else
                    matrix[0][0] = player;
            }

            if(x==2)
            {   
                if(matrix[0][1]=='X')
                {
                    system("clear");
                    cout<<"\n\x1b[31mA move in this spot is already made in this spot\nTry again!\x1b[37m\n"<<endl;
                    draw();
                    input();
                }
                else if(matrix[0][1]=='O')
                {
                    system("clear");
                    cout<<"\n\x1b[31mA move in this spot is already made in this spot\nTry again!\x1b[37m\n"<<endl;
                    draw();
                    input();
                }
                else
                    matrix[0][1] = player;
            }

            
            if(x==3)
            {   
                if(matrix[0][2]=='X')
                {
                    system("clear");
                    cout<<"\n\x1b[31mA move in this spot is already made in this spot\nTry again!\x1b[37m\n"<<endl;
                    draw();
                    input();
                }
                else if(matrix[0][2]=='O')
                {
                    system("clear");
                    cout<<"\n\x1b[31mA move in this spot is already made in this spot\nTry again!\x1b[37m\n"<<endl;
                    draw();
                    input();
                }
                else
                    matrix[0][2] = player;
            }

            if(x==4)
            {   
                if(matrix[1][0]=='X')
                {
                    system("clear");
                    cout<<"\n\x1b[31mA move in this spot is already made in this spot\nTry again!\x1b[37m\n"<<endl;
                    draw();
                    input();
                }
                else if(matrix[1][0]=='O')
                {
                    system("clear");
                    cout<<"\n\x1b[31mA move in this spot is already made in this spot\nTry again!\x1b[37m\n"<<endl;
                    draw();
                    input();
                }
                else
                    matrix[1][0] = player;
            }

            if(x==5)
            {   
                if(matrix[1][1]=='X')
                {
                    system("clear");
                    cout<<"\n\x1b[31mA move in this spot is already made in this spot\nTry again!\x1b[37m\n"<<endl;
                    draw();
                    input();
                }
                else if( matrix[1][1]=='O')
                {
                    system("clear");
                    cout<<"\n\x1b[31mA move in this spot is already made in this spot\nTry again!\x1b[37m\n"<<endl;
                    draw();
                    input();
                }
                else
                    matrix[1][1] = player;
            }
    
            if(x==6)
            {   
                if(matrix[1][2]=='X')
                {
                    system("clear");
                    cout<<"\n\x1b[31mA move in this spot is already made in this spot\nTry again!\x1b[37m\n"<<endl;
                    draw();
                    input();
                }
                else if(matrix[1][2]=='O')
                {
                    system("clear");
                    cout<<"\n\x1b[31mA move in this spot is already made in this spot\nTry again!\x1b[37m\n"<<endl;
                    draw();
                    input();
                }
                else
                    matrix[1][2] = player;
            }

            if(x==7)
            {   
                if(matrix[2][0]=='X')
                {
                    system("clear");
                    cout<<"\n\x1b[31mA move in this spot is already made in this spot\nTry again!\x1b[37m\n"<<endl;
                    draw();
                    input();
                }
                else if(matrix[2][0]=='O')
                {
                    system("clear");
                    cout<<"\n\x1b[31mA move in this spot is already made in this spot\nTry again!\x1b[37m\n"<<endl;
                    draw();
                    input();
                }
                else
                    matrix[2][0] = player;
            }

            if(x==8)
            {   
                if(matrix[2][1]=='X')
                {
                    system("clear");
                    cout<<"\n\x1b[31mA move in this spot is already made in this spot\nTry again!\x1b[37m\n"<<endl;
                    draw();
                    input();
                }
                else if(matrix[2][1]=='O')
                {
                    system("clear");
                    cout<<"\n\x1b[31mA move in this spot is already made in this spot\nTry again!\x1b[37m\n"<<endl;
                    draw();
                    input();
                }
            
                else
                    matrix[2][1] = player;
            } 

            if(x==9)
            {   
                if(matrix[2][2]=='X')
                {
                    system("clear");
                    cout<<"\n\x1b[31mA move in this spot is already made in this spot\nTry again!\x1b[37m\n"<<endl;
                    draw();
                    input();
                }
                else if(matrix[2][2]=='O')
                {
                    system("clear");
                    cout<<"\n\x1b[31mA move in this spot is already made in this spot\nTry again!\x1b[37m\n"<<endl;
                    draw();
                    input();
                }
                else
                    matrix[2][2] = player;
            }
                
        }
        else
        {
            system("clear");
            cout<<"\n\x1b[31mWrong Input\nTry again!\x1b[37m\n\n";
            draw();
            input();
        }
    }
    else return;
}

char checkWin()
{
    //FOR 'X'
    if(matrix[0][0]=='X' && matrix[0][1]=='X' && matrix[0][2]=='X')
        return 'X';
    else if(matrix[1][0]=='X' && matrix[1][1]=='X' && matrix[1][2]=='X')
        return 'X';
    else if(matrix[2][0]=='X' && matrix[2][1]=='X' && matrix[2][2]=='X')
        return 'X';

    else if(matrix[0][0]=='X' && matrix[1][0]=='X' && matrix[2][0]=='X')
        return 'X';
    else if(matrix[0][1]=='X' && matrix[1][1]=='X' && matrix[2][1]=='X')
        return 'X';
    else if(matrix[0][2]=='X' && matrix[1][2]=='X' && matrix[2][2]=='X')
        return 'X';

    else if(matrix[0][0]=='X' && matrix[1][1]=='X' && matrix[2][2]=='X')
        return 'X';
    else if(matrix[0][2]=='X' && matrix[1][1]=='X' && matrix[2][0]=='X')
        return 'X';
    
    //FOR 'O'
    else if(matrix[0][0]=='O' && matrix[0][1]=='O' && matrix[0][2]=='O')
        return 'O';
    else if(matrix[1][0]=='O' && matrix[1][1]=='O' && matrix[1][2]=='O')
        return 'O';
    else if(matrix[2][0]=='O' && matrix[2][1]=='O' && matrix[2][2]=='O')
        return 'O';

    else if(matrix[0][0]=='O' && matrix[1][0]=='O' && matrix[2][0]=='O')
        return 'O';
    else if(matrix[0][1]=='O' && matrix[1][1]=='O' && matrix[2][1]=='O')
        return 'O';
    else if(matrix[0][2]=='O' && matrix[1][2]=='O' && matrix[2][2]=='O')
        return 'O';

    else if(matrix[0][0]=='O' && matrix[1][1]=='O' && matrix[2][2]=='O')
        return 'O';
    else if(matrix[0][2]=='O' && matrix[1][1]=='O' && matrix[2][0]=='O')
        return 'O';

    else 
        return 'D';
}


int main()
{
    start :   mat();
    system("clear");
    cout<<"\n\t\x1b[32m::: Welcome to Tic-Tak-Toe :::\x1b[37m\n"<<endl;
    cout<<"\n\t\t\x1b[32m::: Enter :::\x1b[37m\n"<<endl;
    cout<<"\n\t\t\x1b[32m  1 - To Play\x1b[37m\n"<<endl;
    cout<<"\n\t\t\x1b[32m  2 - To Exit\x1b[37m\n"<<endl;
    int a,i;
    cin>>a;
    switch(a)
    {
        case 1: system("clear");
        while(1)
        {
            turns++;
            draw();
            if(checkWin() == 'X')
                {
                    cout<<"\n\t\x1B[94mPlayer 'X' --- WINS!\x1B[37m\n\n";
                    cout<<"\n\n\t\x1B[94mPress 1 - To Play again\x1B[37m\n\n";
                    cout<<"\n\n\t\x1B[94mPress 2 - To Exit\x1B[37m\n\n";
                    cin>>i;
                    system("clear");
                    if(i==1) goto start;
                    else if(i==0) exit(0);
                    else goto de;
                    break;
                }
            else if(checkWin() == 'O')
                {
                    cout<<"\n\t\x1B[92mPlayer 'O' --- WINS!\x1B[37m\n\n";
                    cout<<"\n\n\t\x1B[94mTo Play again Enter 1 \x1B[37m\n\n";
                    cout<<"\n\n\t\x1B[94mTo To exit    Enter 0 \x1B[37m\n\n";
                    cin>>i;
                    system("clear");
                    if(i==1) goto start;
                    else if(i==0) exit(0);
                    else goto de;
                    break;
                }
            else
                {
                    if(turns == 9)
                        {
                            draw();
                            cout<<"\n\n\t\t\x1B[33mIt's a draw!\t\x1B[37m\n\n";
                            cout<<"\n\n\t\x1B[33mTo Play again Enter 1 \x1B[37m\n\n";
                            cout<<"\n\n\t\x1B[33mTo To exit    Enter 0 \x1B[37m\n\n";
                            cin>>i;
                            system("clear");
                            if(i==1) goto start;
                            else if(i==0) exit(0);
                            else goto de;
                            break;
                        }
                }
            input();
            playerToggle();
            system("clear");
        }
            break;

        case 2: system("clear");
                exit(0);
                break;

        default : de : cout<<"\n\t\x1B[31mWrong Input\x1B[37m\n\n"; 
                  cout<<"\n\n\t\x1B[31mPress Any key to continue...\x1B[37m\n\n";  
                  getchar();
                  system("clear");
                  goto start;
                  break;
        }
}