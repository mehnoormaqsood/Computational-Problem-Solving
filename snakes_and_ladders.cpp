#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <string>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
using namespace std;
int roll_dice();
int check_progress();
int squares[99];
int progress = 0; //Progress is 0, so the game continues when either one of the players reach 100, progress returns 1 and the game stops
char* Color(int color=7, char* Message = ""){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);  //To make the positions of the players prominent on board
    return Message;
}
int main()
{

   int L1 = 0, L2 = 0, L3 = 0, L4 = 0, L5 = 0, Le1 = 0, Le2 = 0, Le3 = 0, Le4 = 0, Le5 = 0;
   int S1 = 0, S2 = 0, S3 = 0, S4 = 0, S5 = 0, Se1 = 0, Se2 = 0, Se3 = 0, Se4 = 0, Se5 = 0;
   int tmp;
   int repetition[20];
   int Size = 10;

    int arr[Size][Size];
    for(int i = 0; i<Size; i++)
    {
        for(int j = 0; j<Size; j++)
        {
            arr[i][j]= 91 + j - (i*Size);
        }
    }
    cout<<"Welcome to Snake and ladders. Enter any key to roll the dice. Enter 0 to exit.";
    cout<<endl;
    cout<<endl;
    //printing 2d array
    for(int i = 0; i<10; i++)
    {
        for(int j = 0; j<10; j++)
        {
                cout << setw(4) << arr[i][j];
        }
        cout << endl;
    }
    cout<<endl;
   //Generating ladders using random numbers and checking for repetition
   L1 = (1+(rand()%80));
   while(L1 <= 10)
   {
    L1 = (1+(rand()%80));
   }
   repetition[0]= L1;
   Le1 = (1+(rand()%80));
   while(Le1<L1)
   {
    Le1 = (1+(rand()%80));
   }
   if(abs(Le1-L1)<=10)
   {
       Le1 += 10;
   }
   repetition[1]= Le1;
   L2 = (1+(rand()%80));
   while(L2 <= 10)
   {
    L2 = (1+(rand()%80));
   }
   for(int i = 0; i<2; i++)
   {
       if(L2 == repetition[i])
       {
           do
           {
              L2 = (1+(rand()%80));
           }while(L2 == repetition[i]);
       }
       else if(L2 != repetition[i])
       {
           continue;
       }

   }
   repetition[2] = L2;
   Le2 = (1 +(rand()%80));
   while(Le2<L2)
   {
    Le2 = (1+(rand()%80));
   }
   for(int i = 0; i<3; i++)
   {
       if(Le2 == repetition[i])
       {
           do
           {
             tmp  = (1+(rand()%80));
             if (tmp > L2)
                Le2 = tmp;
           }while(L2 == repetition[i]);
       }
       else if(Le2 != repetition[i])
       {
           if(abs(Le2-L2)<=10)
            {
                Le2 += 10;
            }
       }

   }
   repetition[3] = Le2;
   L3 = (1 + (rand()%80));
   while(L3<=10)
   {
       L3 = (1 +(rand()%80));
   }
   for(int i = 0; i<4; i++)
   {
       if(L3 == repetition[i])
       {
           do
           {
              L3 = (1+(rand()%80));
           }while(L3 == repetition[i]);
       }
       else if(L3 != repetition[i])
       {
           continue;
       }

   }
   repetition[4] = L3;
  Le3 = (1+(rand()%80));
  while(Le3<L3)
  {
      Le3 = (1+(rand()%80));
  }
   for(int i = 0; i<5; i++)
   {
       if(Le3 == repetition[i])
       {
           do
           {
              Le3 = (1+(rand()%80));
           }while(Le3 == repetition[i]);
           while(Le3<L3)
           {
              Le3 = (1 +(rand()%80));
           }
       }
       else if(Le3 != repetition[i])
       {
           while(Le3<L3)
           {
               Le3 = (1+(rand()%80));
           }
           if(abs(Le3-L3)<=10)
            {
                Le3 += 10;
            }
       }

   }
   repetition[5] = Le3;
   L4 = (1 + (rand()%80));
   while(L4<=10)
   {
       L4 = (1+(rand()%80));
   }
   for(int i = 0; i<6; i++)
   {
       if(L4 == repetition[i])
       {
           do
           {
              L4 = (1+(rand()%80));
           }while(L4 == repetition[i]);
       }
       else if(L4 != repetition[i])
       {
           continue;
       }

   }
   repetition[6] = L4;
   Le4 = (1 + (rand()%80));
  while(Le4<L4)
  {
      Le4 = (1+(rand()%80));
  }
   for(int i = 0; i<7; i++)
   {
       if(Le4 == repetition[i])
       {
           do
           {
              Le4 = (1+(rand()%80));
           }while(Le4 == repetition[i]);
           while(Le4<L4)
           {
              Le4 = (1 +(rand()%80));
           }
       }
       else if(Le4 != repetition[i])
       {
           while(Le4<L4)
           {
               Le4 = (1+(rand()%80));
           }
           if(abs(Le4-L4)<=10)
            {
                Le4 += 10;
            }
       }

   }
   repetition[7]=Le4;
   L5 = (1+(rand()%80));
   while(L5<=10)
   {
       L5 = (1+(rand()%80));
   }
   for(int i = 0; i<8; i++)
   {
       if(L5 == repetition[i])
       {
           do
           {
              L5 = (1+(rand()%80));
           }while(L5 == repetition[i]);
       }
       else if(L5 != repetition[i])
       {
           continue;
       }

   }
   repetition[8] = L5;
   Le5 = (1+(rand()%80));
  while(Le5<L5)
  {
      Le5 = (1+(rand()%80));
  }
   for(int i = 0; i<9; i++)
   {
       if(Le5 == repetition[i])
       {
           do
           {
              Le5 = (1+(rand()%80));
           }while(Le5 == repetition[i]);
           while(Le5<L5)
           {
              Le5 = (1 +(rand()%80));
           }
       }
       else if(Le5 != repetition[i])
       {
           while(Le5<L5)
           {
               Le5 = (1+(rand()%80));
           }
           if(abs(Le5-L5)<=10)
            {
                Le5 += 10;
            }
       }

   }
   repetition[9]= Le5;
   cout<<"   LADDERS     " <<endl; //Printing ladders
   cout<<"Start"  <<" :\t"  <<"End" <<endl;
   cout<<L1 <<"    :\t" <<Le1 <<endl;
   cout<<L2 <<"    :\t" <<Le2 <<endl;
   cout<<L3 <<"    :\t" <<Le3 <<endl;
   cout<<L4 <<"    :\t" <<Le4 <<endl;
   cout<<L5 <<"    :\t" <<Le5 <<endl;
   //Generating snakes and checking for repetitions
   S1 = (1+(rand()%80));
   while(S1<=20)
   {
       S1 = (1+(rand()%80));
   }

   for(int i = 0; i<10; i++)
   {
       if(S1 == repetition[i])
       {
           do
           {
              S1 = (1+(rand()%80));
           }while(S1 == repetition[i]);
       }
       else if(S1 != repetition[i])
       {
           continue;
       }

   }
   repetition[10]= S1;
   Se1 = (1+(rand()%80));
   while(Se1>S1)
  {
      Se1 = (1+(rand()%80));
  }
   for(int i = 0; i<11; i++)
   {
       if(Se1 == repetition[i])
       {
           do
           {
              Se1 = (1+(rand()%80));
           }while(Se1 == repetition[i]);
           while(Se1>S1)
           {
              Se1 = (1 +(rand()%80));
           }
       }
       else if(Se1 != repetition[i])
       {
           while(Se1>S1)
           {
               Se1 = (1+(rand()%80));
           }
           if(abs(S1-Se1)<=10)
            {
                Se1 -= 10;
            }
       }

   }
   repetition[11]= Se1;
   S2 = (1+(rand()%80));
    while(S2<=20)
   {
       S2 = (1+(rand()%80));
   }

   for(int i = 0; i<12; i++)
   {
       if(S2 == repetition[i])
       {
           do
           {
              S2 = (1+(rand()%80));
           }while(S2 == repetition[i]);
       }
       else if(S2 != repetition[i])
       {
           continue;
       }

   }
   repetition[12]= S2;
   Se2 = (1+(rand()%80));
   while(Se2>S2)
  {
      Se2 = (1+(rand()%80));
  }
   for(int i = 0; i<13; i++)
   {
       if(Se2 == repetition[i])
       {
           do
           {
              Se2 = (1+(rand()%80));
           }while(Se2 == repetition[i]);
           while(Se2>S2)
           {
              Se2 = (1 +(rand()%80));
           }
       }
       else if(Se2 != repetition[i])
       {
           while(Se2>S2)
           {
               Se2 = (1+(rand()%80));
           }
           if(abs(S2-Se2)<=10)
            {
                Se2 -= 10;
            }
       }

   }
   repetition[13]= Se2;
  S3 = (1+(rand()%80));
    while(S3<=20)
   {
       S3 = (1+(rand()%80));
   }

   for(int i = 0; i<14; i++)
   {
       if(S3 == repetition[i])
       {
           do
           {
              S3 = (1+(rand()%80));
           }while(S3 == repetition[i]);
       }
       else if(S3 != repetition[i])
       {
           continue;
       }

   }
   repetition[14]= S3;
   Se3 = (1+(rand()%80));
   while(Se3>S3)
  {
      Se3 = (1+(rand()%80));
  }
   for(int i = 0; i<15; i++)
   {
       if(Se3 == repetition[i])
       {
           do
           {
              Se3 = (1+(rand()%80));
           }while(Se3 == repetition[i]);
           while(Se3>S3)
           {
              Se3 = (1 +(rand()%80));
           }
       }
       else if(Se3 != repetition[i])
       {
           while(Se3>S3)
           {
               Se3 = (1+(rand()%80));
           }
           if(abs(S3-Se3)<=10)
            {
                Se3 -= 10;
            }
       }

   }
   repetition[15]= Se3;
  S4 = (1+(rand()%80));
    while(S4<=20)
   {
       S4 = (1+(rand()%80));
   }

   for(int i = 0; i<16; i++)
   {
       if(S4 == repetition[i])
       {
           do
           {
              S4 = (1+(rand()%80));
           }while(S4 == repetition[i]);
       }
       else if(S4 != repetition[i])
       {
           continue;
       }

   }
   repetition[16]= S2;
   Se4 = (1+(rand()%80));
   while(Se4>S4)
  {
      Se2 = (1+(rand()%80));
  }
   for(int i = 0; i<17; i++)
   {
       if(Se4 == repetition[i])
       {
           do
           {
              Se4 = (1+(rand()%80));
           }while(Se4 == repetition[i]);
           while(Se4>S4)
           {
              Se4 = (1 +(rand()%80));
           }
       }
       else if(Se4 != repetition[i])
       {
           while(Se4>S4)
           {
               Se4 = (1+(rand()%80));
           }
           if(abs(S4-Se4)<=10)
            {
                Se4 -= 10;
            }
       }

   }
   repetition[17]= Se4;
  S5 = (1+(rand()%80));
    while(S5<=20)
   {
       S5 = (1+(rand()%80));
   }

   for(int i = 0; i<18; i++)
   {
       if(S5 == repetition[i])
       {
           do
           {
              S5 = (1+(rand()%80));
           }while(S5 == repetition[i]);
       }
       else if(S5 != repetition[i])
       {
           continue;
       }

   }
   repetition[18]= S5;
   Se5 = (1+(rand()%80));
   while(Se5>S5)
  {
      Se5 = (1+(rand()%80));
  }
   for(int i = 0; i<19; i++)
   {
       if(Se5 == repetition[i])
       {
           do
           {
              Se5 = (1+(rand()%80));
           }while(Se5 == repetition[i]);
           while(Se5>S5)
           {
              Se5 = (1 +(rand()%80));
           }
       }
       else if(Se5 != repetition[i])
       {
           while(Se5>S5)
           {
               Se5 = (1+(rand()%80));
           }
           if(abs(S5-Se5)<=10)
            {
                Se5 -= 10;
            }
       }

   }
   repetition[19]= Se5;
   cout<<endl;
   //Printing snakes on board
   cout<<"   SNAKES     " <<endl;
   cout<<"Start"  <<" :\t"  <<"End" <<endl;
   cout<<S1 <<"    :\t" <<Se1 <<endl;
   cout<<S2 <<"    :\t" <<Se2 <<endl;
   cout<<S3 <<"    :\t" <<Se3 <<endl;
   cout<<S4 <<"    :\t" <<Se4 <<endl;
   cout<<S5 <<"    :\t" <<Se5 <<endl;

    int roll_1 = 0;  //Dice roll for player 1
    int roll_2 = 0;  //Dice roll for player 2
    int player1 = 0;  //Holding score of player 1
    int player2 = 0;  //Holding score of player 2
    int input = 0;   //Any input>0 to play the game
    string P1;
    string P2;
    cout<<"Player 1, enter your name: " ;
    cin>>P1;
    cout<<"Player 2, enter your name: " ;
    cin>>P2;
    for(int i = 1; i<=100; i++)
    {
        squares[i] = i;          //Gives the squares values to check which player reaches squares[100] first
    }
    do
    {
        cout<<"Press 1 to continue: ";
        cin>>input;
        cout<<endl;
        system("CLS");
        cout<<"   LADDERS     " <<endl;  //Printing ladders
        cout<<"Start"  <<" :\t"  <<"End" <<endl;
        cout<<L1 <<"    :\t" <<Le1 <<endl;
        cout<<L2 <<"    :\t" <<Le2 <<endl;
        cout<<L3 <<"    :\t" <<Le3 <<endl;
        cout<<L4 <<"    :\t" <<Le4 <<endl;
        cout<<L5 <<"    :\t" <<Le5 <<endl;
        cout<<endl;
        cout<<"   SNAKES     " <<endl;
        cout<<"Start"  <<" :\t"  <<"End" <<endl;
        cout<<S1 <<"    :\t" <<Se1 <<endl;
        cout<<S2 <<"    :\t" <<Se2 <<endl;
        cout<<S3 <<"    :\t" <<Se3 <<endl;
        cout<<S4 <<"    :\t" <<Se4 <<endl;
        cout<<S5 <<"    :\t" <<Se5 <<endl;
        cout<<endl;
          for(int i = 0; i<10; i++)    //Prints board to display the positions of players on it
        {
            for(int j = 0; j<10; j++)   //system("CLS") prints a new board every time i.e. updates the positions
            {
                if(player1 != arr[i][j] && player2 != arr[i][j])
                    cout << setw(4) << arr[i][j];
                if(player1 == arr[i][j])
                    cout << setw(4) <<Color(12,"P1");
                    Color(); //sets the color to default
                if(player2 == arr[i][j])
                    cout << setw(4) <<Color(13,"P2") ;
                    Color();
            }
            cout << endl;
        }
        cout<<endl;
        cout<<P1 <<", it is your turn to play: ";
        cin>>input;              //holds the players input > 1 to play the game and 0 to quit
        roll_1 = roll_dice();
        cout<<"P1: " <<P1 <<endl;
        cout<<"P2: " <<P2 <<endl;
        cout<<endl;
        if((roll_1+player1)>100)    //if the final value of players is greater than 100 then the players remain on their old positions
        {                           //else update their positions
            player1 = player1;

        }
        else
        {
            squares[player1] = player1;
            player1 = player1 + roll_1;
        }

           if(player1==L1)     //Checks for ladders and Snakes
             {
               player1 = Le1;
               cout<<"Player 1 climbed a ladder!" <<endl;
             }

            else if(player1==L2)
             {
               player1 = Le2;
               cout<<"Player 1 climbed a ladder!" <<endl;
             }
            else if(player1==L3)
             {
               player1 = Le3;
               cout<<"Player 1 climbed a ladder!" <<endl;
             }
            else if(player1==L4)
             {
               player1 = Le4;
               cout<<"Player 1 climbed a ladder!" <<endl;
             }
            else if(player1==L5)
             {
               player1 = Le5;
               cout<<"Player 1 climbed a ladder!" <<endl;
             }
            else if(player1==S1)
             {
               player1 = Se1;
               cout<<"Player 1 ran into a snake!" <<endl;
             }
            else if(player1==S2)
             {
               player1 = Se2;
               cout<<"Player 1 ran into a snake!" <<endl;
             }
            else if(player1==S3)
             {
               player1 = Se3;
               cout<<"Player 1 ran into a snake!" <<endl;
             }
            else if(player1==S4)
             {
               player1 = Se4;
               cout<<"Player 1 ran into a snake!" <<endl;
             }
            else if(player1==S5)
             {
               player1 = Se5;
               cout<<"Player 1 ran into a snake!" <<endl;
             }
        if(input!=0)
        {
            cout<<P1 <<" rolled: " <<roll_1 <<endl <<"Position of " <<P1 <<": " <<player1 <<endl;
        }
       cout << "Press 1 to proceed ";
       cin >> input;
        system("CLS");
        cout<<"   LADDERS     " <<endl;  //Printing ladders
        cout<<"Start"  <<" :\t"  <<"End" <<endl;
        cout<<L1 <<"    :\t" <<Le1 <<endl;
        cout<<L2 <<"    :\t" <<Le2 <<endl;
        cout<<L3 <<"    :\t" <<Le3 <<endl;
        cout<<L4 <<"    :\t" <<Le4 <<endl;
        cout<<L5 <<"    :\t" <<Le5 <<endl;
        cout<<endl;
        cout<<"   SNAKES     " <<endl;
        cout<<"Start"  <<" :\t"  <<"End" <<endl;
        cout<<S1 <<"    :\t" <<Se1 <<endl;
        cout<<S2 <<"    :\t" <<Se2 <<endl;
        cout<<S3 <<"    :\t" <<Se3 <<endl;
        cout<<S4 <<"    :\t" <<Se4 <<endl;
        cout<<S5 <<"    :\t" <<Se5 <<endl;
        cout<<endl;
          for(int i = 0; i<10; i++)
        {
            for(int j = 0; j<10; j++)
            {
                if(player1 != arr[i][j] && player2 != arr[i][j])
                    cout << setw(4) << arr[i][j];
                if(player1 == arr[i][j])
                    cout << setw(4) <<Color(12,"P1");
                    Color();
                if(player2 == arr[i][j])
                    cout << setw(4) <<Color(13,"P2") ;
                    Color();
            }
            cout << endl;
        }
        cout<<endl;
        cout<<"P1: " <<P1 <<endl;
        cout<<"P2: " <<P2 <<endl;
        cout<<endl;
        cout<<P2 <<", it is your turn to play: ";
        cin>>input;
        roll_2 = roll_dice();
        if((roll_2+player2)>100)
        {
            player2 = player2;
        }
        else
        {
            squares[player2] = player2;
            player2 = player2 + roll_2;
        }


            if(player2==L1)
             {
               player2 = Le1;
               cout<<"Player 2 climbed a ladder!" <<endl;
             }
            else if(player2==L2)
             {
               player2 = Le2;
               cout<<"Player 2 climbed a ladder!" <<endl;
             }
            else if(player2==L3)
             {
               player2 = Le3;
               cout<<"Player 2 climbed a ladder!" <<endl;
             }
            else if(player2==L4)
             {
               player2 = Le4;
               cout<<"Player 2 climbed a ladder!" <<endl;
             }
            else if(player2==L5)
             {
               player2 = Le5;
               cout<<"Player 2 climbed a ladder!" <<endl;
             }
            else if(player2==S1)
             {
               player2 = Se1;
               cout<<"Player 2 ran into a snake!" <<endl;
             }
            else if(player2==S2)
             {
               player2 = Se2;
               cout<<"Player 2 ran into a snake!" <<endl;
             }
            else if(player2==S3)
             {
               player2 = Se3;
               cout<<"Player 2 ran into a snake!" <<endl;
             }
            else if(player2==S4)
             {
               player2 = Se4;
               cout<<"Player 2 ran into a snake!" <<endl;
             }
            else if(player2==S5)
             {
               player2 = Se5;
               cout<<"Player 2 ran into a snake!" <<endl;
             }
            if(input!=0)
            {
              cout<<P2 <<" rolled: " <<roll_2 <<endl;
              cout<<"Position of " <<P2 <<": " <<player2 <<endl;
            }


        squares[player1] = 1;
        squares[player2] = 2;  //just to check which player reaches 100 first
        progress = check_progress();


        }while(progress == 0 && input!=0 );
        if(squares[100]==1)
        {
            cout<<P1 <<" won!" <<endl;
        }else if(squares[100]==2)
        {
            cout<<P2 <<" won!" <<endl;
        }
        cin.get();
        cin.ignore();

        return 0;
    }










int roll_dice()
{
    srand(time(0));
    int x = 0;
    x = (1+(rand()%6));
    return x;
}
int check_progress()
{
    if( squares[100] == 1 || squares[100] == 2)
    {
        return 1;
    }
    else

    {
        return 0;
    }

}

