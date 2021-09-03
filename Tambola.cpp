#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include<time.h> 



#include<conio.h>
using namespace std;

int i, j, k;int star[50]={0};  int n;    //star is to store a mid position
int  corner_up1[50]={0},corner_up2[50]={0},corner_dow1[50]={0},corner_dow2[50]={0};    //all four varible for store position of corners
string d1 = "The Early 5 Dividend   ", d2 = " The Top Row Dividend    ", d3 = "The bottom Row Dividend    ", d4 = "The Middle Row Dividend   ";
string d5 = "The Corners Dividend   ", d6 = " The Corners With Star Dividend   ", d7 = "The First house Dividend   ", d8 = "The second House Dividend   ";

void MakeTicket(int (*t)[3][9], int size, int *tot);    //to make a tickets
void ShowTicket(int (*t1)[3][9], int size1);   //to show a tickets
void GenerateNo(int, int *tot, int (*t)[3][9]);   //to generate random numbers after tickets had been made
void TicMark(int, int (*t)[3][9], int,string *s,int *cont);  //tic mark the numbers in tickets
void CheckResult(int (*tic)[3][9], int size, string *);  // to check the results
void ShowResult(string *,int);  //to show the results

int main()
{
    srand(time(0));
    cout << "______________________________________________" << endl;
    cout << "****************   TAMBOLA   ****************" << endl;
    cout << "______________________________________________" << endl;
    cout << endl;
    cout << "how many players want to play Tambola game :";
    cin >> n;
    int total[n * 15 + 1] = {0};
    int ticket[n][3][9];
    MakeTicket(ticket, n, total);
    ShowTicket(ticket, n);
    GenerateNo(n, total, ticket);
    return 0;
}
void MakeTicket(int (*t)[3][9], int size, int *tot)
{

    int temp, m, ck, count[10] = {0}, in = 1,u=0;
    for (i = 0; i < size; i++)           //all tickets are initialize to  0
    {
       
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 9; k++)
            {
                t[i][j][k] = 0;
            }
        }
    }

    for (i = 0; i < size; i++)
    {
         u=0;
        for (j = 0; j < 3; j++)
        {
            k = 0;
            while (k < 5)
            {
                m = rand() % 10;
                if(k==0&&j==0)                   //to store a corner position of tickets
                {
                  corner_up1[i]=m;
                  corner_dow1[i]=m;
                }
                if(j==0)
                {
                    if(m< corner_up1[i])
                    corner_up1[i]=m;
                }
                if(j==0)
                {
                    if(m>corner_up2[i])
                    corner_up2[i]=m;
                }
                if(j==2)
                {
                    if(m<corner_dow1[i])
                    corner_dow1[i]=m;
                }
                if(j==2)
                {
                    if(m>corner_dow2[i])
                    corner_dow2[i]=m;
                }
                switch (m)
                {
                case 0:
                    if (count[0] == 0)   ////check the repetition of position
                    {
                        temp = rand() % 10 + 1;
                        for (ck = 0; ck <= j - 1; ck++)     //check the repetition of number
                        {
                            if (temp == t[i][ck][m])
                                break;
                        }
                        if (ck == j)
                        {
                            t[i][j][m] = temp;  //store in tickets
                            tot[in] = temp;    //store in tot to genetare random numbers among them
                            in++;
                            k++;
                            count[0]++;
                             if(j==1)
                             {
                                 u++;
                                 if(u==3)      // for store a mid position of middle line 
                                 {
                                      star[i]=m;
                                 }
                             }
                        }
                    }
                    break;

                case 1:
                    if (count[1] == 0)
                    {
                        temp = rand() % 10 + 11;
                        for (ck = 0; ck <= j - 1; ck++)
                        {
                            if (temp == t[i][ck][m])
                                break;
                        }
                        if (ck == j)
                        {
                            t[i][j][m] = temp;
                            tot[in] = temp;
                            in++;
                            k++;
                            count[1]++;
                            if(j==1)
                             {
                                 u++;
                                 if(u==3)
                                 {
                                      star[i]=m;
                                 }
                             }
                        }
                    }
                    break;

                case 2:
                    if (count[2] == 0)
                    {
                        temp = rand() % 10 + 21;
                        for (ck = 0; ck <= j - 1; ck++)
                        {
                            if (temp == t[i][ck][m])
                                break;
                        }
                        if (ck == j)
                        {
                            t[i][j][m] = temp;
                            tot[in] = temp;
                            in++;
                            k++;
                            count[2]++;
                            if(j==1)
                             {
                                 u++;
                                 if(u==3)
                                 {
                                      star[i]=m;
                                 }
                             }
                        }
                       
                    }
                    break;

                case 3:
                    if (count[3] == 0)
                    {
                        temp = rand() % 10 + 31;
                        for (ck = 0; ck <= j - 1; ck++)
                        {
                            if (temp == t[i][ck][m])
                                break;
                        }
                        if (ck == j)
                        {
                            t[i][j][m] = temp;
                            tot[in] = temp;
                            in++;
                            k++;
                            count[3]++;
                            if(j==1)
                             {
                                 u++;
                                 if(u==3)
                                 {
                                      star[i]=m;
                                 }
                             }
                        }
                        
                    }
                    break;

                case 4:
                    if (count[4] == 0)
                    {
                        temp = rand() % 10 + 41;
                        for (ck = 0; ck <= j - 1; ck++)
                        {
                            if (temp == t[i][ck][m])
                                break;
                        }
                        if (ck == j)
                        {
                            t[i][j][m] = temp;
                            tot[in] = temp;
                            in++;
                            k++;
                            count[4]++;
                            if(j==1)
                             {
                                 u++;
                                 if(u==3)
                                 {
                                      star[i]=m;
                                 }
                             }
                        }
                        
                    }
                    break;

                case 5:
                    if (count[5] == 0)
                    {
                        temp = rand() % 10 + 51;
                        for (ck = 0; ck <= j - 1; ck++)
                        {
                            if (temp == t[i][ck][m])
                                break;
                        }
                        if (ck == j)
                        {
                            t[i][j][m] = temp;
                            tot[in] = temp;
                            in++;
                            k++;
                            count[5]++;
                            if(j==1)
                             {
                                 u++;
                                 if(u==3)
                                 {
                                      star[i]=m;
                                 }
                             }
                        }
                    }
                    break;

                case 6:
                    if (count[6] == 0)
                    {
                        temp = rand() % 10 + 61;
                        for (ck = 0; ck <= j - 1; ck++)
                        {
                            if (temp == t[i][ck][m])
                                break;
                        }
                        if (ck == j)
                        {
                            t[i][j][m] = temp;
                            tot[in] = temp;
                            in++;
                            k++;
                            count[6]++;
                            if(j==1)
                             {
                                 u++;
                                 if(u==3)
                                 {
                                      star[i]=m;
                                 }
                             }
                        }
                    }
                    break;

                case 7:
                    if (count[7] == 0)
                    {
                        temp = rand() % 10 + 71;
                        for (ck = 0; ck <= j - 1; ck++)
                        {
                            if (temp == t[i][ck][m])
                                break;
                        }
                        if (ck == j)
                        {
                            t[i][j][m] = temp;
                            tot[in] = temp;
                            in++;
                            k++;
                            count[7]++;
                            if(j==1)
                             {
                                 u++;
                                 if(u==3)
                                 {
                                      star[i]=m;
                                 }
                             }
                        }
                    }
                    break;

                case 8:
                    if (count[8] == 0)
                    {
                        temp = rand() % 10 + 81;
                        for (ck = 0; ck <= j - 1; ck++)
                        {
                            if (temp == t[i][ck][m])
                                break;
                        }
                        if (ck == j)
                        {
                            t[i][j][m] = temp;
                            tot[in] = temp;
                            in++;
                            k++;
                            count[8]++;
                            if(j==1)
                             {
                                 u++;
                                 if(u==3)
                                 {
                                      star[i]=m;
                                 }
                             }
                        }
                    }
                    break;

                default:
                    break;
                }
            }
            for (int h = 0; h < 9; h++)
            {
                count[h] = 0;
            }
            
        }
    }
}
void ShowTicket(int (*t1)[3][9], int size1)
{
    for (i = 0; i < size1; i++)
    {
        cout << '\n'
             << "                Ticket of Player " << i + 1 << "                  " << endl;
        cout << "________________________________________" << endl;
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 9; k++)
            {
                if (t1[i][j][k] == '~')
                {
                    cout << " " << (char)t1[i][j][k] << " "
                         << "|";
                }
                else
                {
                    cout << " " << t1[i][j][k] << " "
                         << "|";
                }
            }
            cout << endl;
            cout << "________________________________________" << endl;
        }
    }
    cout<<'\n'<<"Press f To Generate New Number"<<endl; 
}
void GenerateNo(int size, int *nos, int (*t)[3][9])
{
    int x = size * 15, k = 0, i = 0, index[2000] = {0}, check_rep[size] = {0};
    string st[size] ;
    int cnt[size] ;
    for(int n=0;n<size;n++)
    {
        cnt[n]=0;
    }
    while (k<x)
    {
        
        index[i] = rand() % (x) + 1;
        for (j = 0; j <= i - 1; j++)
        {
            if (index[j] == index[i])  //to check the repetiton of the numbers
                break;
        }

        if (j == i)
        {
            getch();
            cout << '\n'
                 << "The New number is : " << nos[index[i]] << endl;
            TicMark(nos[index[i]],t,size,st,cnt);
            k++;
        }
        i++;
    }
    cout<<'\n'<<"                  GAME OVER                  "<<endl;
    ShowResult(st,size);
}
int flag6 = 0,flag7=0, flag8 = 0,flag = 0, flag1 = 0, flag2 = 0, flag3 = 0, flag4 = 0,flag5 = 0;
void TicMark(int no, int (*t)[3][9], int size,string *s,int *cont)
{
    
    int a, b, c;
    for (a = 0; a < size; a++)
    {
        for (b = 0; b < 3; b++)
        {
            for (c = 0; c < 9; c++)
            {
                if (t[a][b][c] == no)
                {
                    t[a][b][c] = '~';  //the numbers are tic by ~
                    cont[a]++;      //for dividend results check
                    if (flag8 == 0)
                    {
                        if (cont[a] == 5)
                        {
                             cout <<'\n'<< "                  hurryy !!!           " << '\n'
                                 <<'\n'<< " Player " << a + 1 << "   Get a early Five  dividend  " << endl;
                            cout <<'\n'<< "  The ticket of all players are " << endl;
                            ShowTicket(t, size);
                            flag8++;
                            s[a]= d1;
                        }
                    }
                    CheckResult(t, size, s);
                    if(cont[a]==15 && flag6==0)
                    {
                           cout <<'\n'<< "                  hurryy !!!           " << '\n'
                                 <<'\n'<< " Player " << a + 1 << "   Get a First House  dividend  " << endl;
                            cout <<'\n'<< "  The ticket of all players are " << endl;
                            ShowTicket(t, size);
                            flag6++;
                             s[a]+= d7;
                    }
                    else if(cont[a]==15 && flag7==0)
                    {
                           cout <<'\n'<< "                  hurryy !!!           " << '\n'
                                 << '\n'<<" Player " << a + 1 << "   Get a second House  dividend  " << endl;
                            cout <<'\n'<< "  The ticket of all players are " << endl;
                            ShowTicket(t, size);
                            flag7++;
                             s[a]+= d8;
                    }
                }
            }
        }
    }
}
void CheckResult(int (*tic)[3][9], int size, string *s1)
{

    int p=0, q=0, r=0;
    if (flag1 == 0)
    {
        for (p = 0; p < size; p++)
        {
            flag = 0;
            for (r = 0; r < 9; r++)
            {
                if (tic[p][0][r] == '~'||tic[p][0][r] == 0)
                {
                    flag++;
                }
                else
                break;
            }
              
            if (flag == 9)
            {
                cout <<'\n'<<  "           hurryy !!!        " << '\n'
                     <<'\n'<< "  Player " << p + 1 << "   Get a Top Row Dividend" << endl;
                cout << "     The ticket of all players are   " << endl;
                ShowTicket(tic, size);
                s1[p] += d2;
                flag1++;
            }
         
        }
    }
    
    if (flag2 == 0)
    {
        for (p = 0; p < size; p++)
        {
            flag = 0;
            for (r = 0; r < 9; r++)
            {
                if (tic[p][2][r] == '~'||tic[p][0][r] == 0)
                {
                    flag++;
                }
                  else
                break;
            }
            if (flag == 9)
            {
                  cout <<'\n'<<  "           hurryy !!!        " << '\n'
                     <<'\n'<< "  Player " << p + 1 << "   Get a Bottom Row Dividend" << endl;
                cout << "     The ticket of all players are   " << endl;
                ShowTicket(tic, size);
                s1[p] += d3;
                flag2++;
            }
        }
    }
     if (flag3 == 0)
    {
        for (p = 0; p < size; p++)
        {
            flag = 0;
            for (r = 0; r < 9; r++)
            {
                if (tic[p][1][r] == '~'||tic[p][1][r] == 0)
                {
                    flag++;
                }
                else
                break;
            }
            if (flag == 9)
            {
                 cout <<'\n'<<  "           hurryy !!!        " << '\n'
                     <<'\n'<< "  Player " << p + 1 << "   Get a Middle Row Dividend" << endl;
                cout << "     The ticket of all players are   " << endl;
                ShowTicket(tic, size);
                s1[p] += d4;
                flag3++;
            }
        }
    }
     if (flag4 == 0)
    {
        for (p = 0; p < size; p++)
        {
            if(tic[p][0][corner_up1[p]]=='~' && tic[p][0][corner_up2[p]]=='~' && tic[p][2][corner_dow1[p]]=='~' && tic[p][2][corner_dow2[p]]=='~')
            {
                flag4++;
                 cout <<'\n'<<  "           hurryy !!!        " << '\n'
                     <<'\n'<< "  Player " << p + 1 << "   Get a Corner Dividend" << endl;
                cout << "     The ticket of all players are   " << endl;
                ShowTicket(tic, size);
                s1[p] += d5;

            }
        }
           
    }
    if (flag5 == 0)
    {
        for (p = 0; p < size; p++)
        {
            if(tic[p][0][corner_up1[p]]=='~' && tic[p][0][corner_up2[p]]=='~' && tic[p][2][corner_dow1[p]]=='~' && tic[p][2][corner_dow2[p]]=='~'&&tic[p][1][star[p]]=='~')
            {
                flag5++;
                   cout <<'\n'<< "           hurryy !!!        " << '\n'
                     <<'\n'<< "  Player " << p + 1 << "   Get a Corner with Star Dividend" << endl;
                cout << "     The ticket of all players are   " << endl;
                ShowTicket(tic, size);
                s1[p] += d6;

            }
        }
           
    }
}
void ShowResult(string *res,int tot)
{
    string s;
      cout<<'\n'<<"THE WINING DIVIDENDS OF PLAYERS ARE "<<endl;
    for(i=0;i<tot;i++)
    {
        if(res[i]==s)
        {
            cout<<'\n'<<i+1<<')'<<"   No Wins"<<endl;
        }
        else
        {
        cout<<'\n'<<i+1<<')'<<"  " <<res[i]<<endl;
        }
    }
    cout<<'\n'<<"        THANKS FOR PLAYING THE GAME     "<<endl;
}
