#include<stdio.h>
#include<fstream.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<iomanip.h>
void start();
void s2time();
void osload();
void stime();
void login();
void about();
void fin();
void load1();
void load2();
void load3();
void load4();
void guess();
void read1();
void read2();
void stats();
void load5();
void inst();
void del();
void drul();
void typo();
void thnk();
void blin();
void vcricket();
void game(int);
void explorer();
void dayf();
void f();
int fall(int);
class app
{private  : int i,j,l;
public:
 void game(int);

 }a; ///class ending!
void app:: game(int z)
{clrscr();
int opt,i;
for(i=0;i<27;i++)
{_setcursortype(_NOCURSOR);
if(z==1)
goto mm;
textcolor(BROWN);
clrscr();
gotoxy(i,12);
cout<<"Welome ";
delay(15);
}
for(i=0;i<=12;i++)
{clrscr();
gotoxy(27,12);
cout<<"Welcome ";

gotoxy(35,i);
cout<<"To ";
delay(30);
}
for(i=24;i>11;i--)
{clrscr();
gotoxy(27,12);
cout<<"Welcome To ";
gotoxy(38,i);
cout<<"AV ";
delay(30);
}
for(i=0;i<=12;i++)
{clrscr();
gotoxy(27,12);
cout<<"Welcome To AV";

gotoxy(41,i);
cout<<"App ";
delay(30);
}
for(i=54;i>44;i--)
{clrscr();
gotoxy(27,12);
cout<<"Welcome To AV App";
gotoxy(i,12);
cout<<"Player ";
delay(30);
}
getch();
app:
textcolor(GREEN);
clrscr();
stime();
gotoxy(1,1);
textattr(3);
cprintf("Enter the number of an app to open");
textattr(8);
gotoxy(2,3);
cprintf("\n\t\t                  Installed apps");
cout<<"\n\n1. Typo.(A typing app)\t\t2. Mind Freak!\n\n3. Friendship calc \3\t\t4. DRUL [mind game]\n\n5. GuEsS mE NoT\t\t\t6. Day finder\n\n7. Virtua Cricket\t\t8.Exit";
_setcursortype(_NORMALCURSOR);
gotoxy(24,13);
cin>>opt;
switch(opt)
{
mm:
case 1:{textcolor(CYAN);clrscr();
load1();load2();load3();load4();load5();
fin();
del();
blin();
typo();
try:
clock_t start, end;float s1,s2,s3,s4,p1,p2,p3,p4,score1,score2,score3,score4,speed;
int total;
clrscr();
textcolor(RED);
char name[100];
cprintf("Enter name:\n");
_setcursortype(_NORMALCURSOR);
cin>>name;
clrscr();
gotoxy(1,1);
textcolor(WHITE);
cout<<"Hi, \n";
cprintf(name);
inst();
clrscr();
//round1();
_setcursortype(_NOCURSOR);
textcolor(YELLOW);
	delay(400);
	gotoxy(33,1);
	cprintf("ROUND - 1");
       char ch0[33]="123523433";
 char str[]="I love my country";
char ch1[1000]="213542345";
_setcursortype(_NOCURSOR);
gotoxy(1,3);
delay(1000);
textcolor(WHITE);
cprintf(" type ");
delay(200);
textcolor(CYAN);
cprintf(" I love my country\n");
textcolor(YELLOW);
gotoxy(1,4);
delay(500);
cprintf("\n Press enter When ready !\n\n");
getch();
_setcursortype(_SOLIDCURSOR);
cin.getline(ch1,100);
gotoxy(8,7);
start=clock();
cin.getline(ch0,100);
end=clock();
int o=0;
for(int i=0;i<strlen(ch0);i++)
{if(ch0[i]==str[i])
o++;}
float time=(end-start)/CLK_TCK;
s1=time;
p1=strlen(ch0)-o;
//round2;
textcolor(CYAN);
clrscr();
_setcursortype(_NOCURSOR);
textcolor(YELLOW);
	delay(400);
	gotoxy(33,1);
	cprintf("ROUND - 2");
	gotoxy(1,3);
delay(1000);
textcolor(WHITE);
cprintf(" type ");
delay(200);
textcolor(CYAN);
cprintf("The police secretly filmed the conversation which he had with the head of the criminal underworld.\n");
char str1[]="The police secretly filmed the conversation which he had with the head of the criminal underworld.";
textcolor(YELLOW);
gotoxy(1,4);
delay(100);
cprintf("\n Press enter When ready !\n\n");
getch();
_setcursortype(_SOLIDCURSOR);
gotoxy(7,7);
int e=0;
time=0;
end=0;
start=0;
start=clock();
cin.getline(ch1,1000);
end=clock();
time=(end-start)/CLK_TCK;
for(i=0;i<strlen(ch1);i++)
{if(ch1[i]==str1[i])
e++;}
s2=time;
p2=strlen(ch1)-e;
//round3;
textcolor(CYAN);
clrscr();
char ch2[10000]="12343432";
_setcursortype(_NOCURSOR);
textcolor(YELLOW);
	delay(500);
	gotoxy(33,1);
	cprintf("ROUND - 3");
	gotoxy(1,3);
delay(1000);
textcolor(WHITE);
cprintf(" type: ");
delay(100);
textcolor(CYAN);
cprintf("\n Nasiruddin had a shed behind his house. It had no lights. One night he went to the shed and lost his ring there. He went out into the well-lit street and began to look around.");
char str2[]="Nasiruddin had a shed behind his house. It had no lights. One night he went to the shed and lost his ring there. He went out into the well-lit street and began to look around.";
textcolor(YELLOW);
gotoxy(1,7);
delay(500);
cprintf("\n Press enter When ready !\n\n");
getch();
_setcursortype(_SOLIDCURSOR);
gotoxy(1,6);
int t=0;
time=0;
end=0;
start=0;
start=clock();
gotoxy(9,9);
cin.getline(ch2,1000);
end=clock();
time=(end-start)/CLK_TCK;
for(i=0;i<strlen(ch2);i++)
{if(ch2[i]==str2[i])
t++;}s3=time;
p3=strlen(ch2)-t;
//round4;
textcolor(CYAN);
clrscr();
char ch3[10000]="1254435543";
_setcursortype(_NOCURSOR);
textcolor(YELLOW);
	delay(500);
	gotoxy(33,1);
	cprintf("ROUND - 4");
	gotoxy(34,2);
	cout<<"Overlap !";
gotoxy(1,4);
delay(1000);
textcolor(WHITE);
cprintf(" type \n");
delay(100);
highvideo();
gotoxy(1,5);
textcolor(CYAN);
cprintf("The ancient Olympic Games were held every four years. One of the legends about the Olympics revolves around Hercules, the Greek hero. According to the story, the gods ordered Hercules to clean the Augean stables. The stables were filthy as they had not been cleaned for a year. Hercules was to finish the task in a single day. It was an impossible task for an ordinary man!\n");
char str3[]="The ancient Olympic Games were held every four years. One of the legends about the Olympics revolves around Hercules, the Greek hero. According to the story, the gods ordered Hercules to clean the Augean stables. The stables were filthy as they had not been cleaned for a year. Hercules was to finish the task in a single day. It was an impossible task for an ordinary man!";
textcolor(YELLOW);
gotoxy(1,3);
delay(500);
cprintf(" Press enter When ready !\n\n");
getch();
_setcursortype(_SOLIDCURSOR);
gotoxy(1,5);
int u=0;
time=0;
end=0;
start=0;
start=clock();
cin.getline(ch3,1000);
end=clock();
time=(end-start)/CLK_TCK;
for(i=0;i<strlen(ch3);i++)
{if(ch3[i]==str3[i])
u++;}
p4=strlen(ch3)-u;
s4=time;
clrscr();
fin();
clrscr();
int lu=strlen(ch0)+strlen(ch1)+strlen(ch2)+strlen(ch3);
 float ul=s1+s2+s3+s4;
int strl=strlen(str)+strlen(str1)+strlen(str2)+strlen(str3);
speed=(strlen(ch0)+strlen(ch1)+strlen(ch2)+strlen(ch3))/(s1+s2+s3+s4);
total=p1+p2+p3+p4;
textcolor(YELLOW);clrscr();
stats();
delay(400);
gotoxy(17,3);
cout<<name;
delay(400);
gotoxy(17,4);
cout<<lu<<"/"<<strl;
delay(400);
gotoxy(17,5);
cout<<total;
delay(400);
gotoxy(17,6);
cout<<setprecision(2)<<ul;
delay(400);
gotoxy(17,7);
cout<<speed;

getch();
_setcursortype(_NORMALCURSOR);
char y;
gotoxy(17,9);
cout<<"Do u wish to try again ? (Y,N) ";
cin>>y;
if(y=='y'||y=='Y')
goto try;
else
{if(z==1)
break;
else
goto app; }
}//case 1 (typo) ending...
case 2:{ _setcursortype(_NOCURSOR);
read1();read2();
int a,ans;
m:
textcolor(GREEN);
_setcursortype(_NOCURSOR);clrscr();
cout<<"1. Keep a 2 digit number (20-99) in your mind.\n\n ex: 23";
getch();clrscr();
cout<<"2. Add them \n\n ex: 2+3= '5'";
getch();clrscr();
cout<<"3. Now subtract the obtained number from the initial number\n\n ex: 23-5= '18'";
getch();clrscr();
cout<<"4. Now you will be remained by 2 digits\n\n ex: 1 & 8";
getch();clrscr();
_setcursortype(_NORMALCURSOR);
cout<<"5. From these two digits \n\n ex: 1 or 8 \n\nType any number (only one not both the digits !)";
cout<<"\n";
cin>>a;
clrscr();
ans=9-a;
cout<<"\n \2 the other number is: "<<ans<<" \2";
      delay(500);
      gotoxy(1,5);
      textcolor(CYAN);
      cprintf("Surprised!!! ? Want to try again ? (Y,N)\n\n");
      gotoxy(1,6);
      char q;
      cin>>q;
      if(q=='y'||q=='Y')
      goto m;
      else
      goto app;     }//case 2 ending///
case 3:f();
goto app;

      case 4:
       drul();goto app;
       case 5: guess(); goto app;
       case 6:
       textcolor(WHITE);
       dayf();goto app;
       case 7: vcricket();goto app;
       case 8: explorer();
       default:goto app;      }//switch case ending!
      }
//////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////
void main()
{
start();
}

///////////////////////////////////////////////////////////////////////////
	void explorer()
       {
       e:
       _setcursortype(_NORMALCURSOR);
       textbackground(BLACK);
      textcolor(WHITE);
     clrscr();int j; s2time();
      textcolor(GREEN);
      for(int z=1;z<=80;z++)
     { gotoxy(z,2);
      cprintf("_");}
      textcolor(BLUE);
      for(z=1;z<=25;z++)
     { gotoxy(64,z);
      cprintf("³");}
      gotoxy(4,1);
      textcolor(CYAN);
      cprintf("Explorer");
      gotoxy(68,1);
      cprintf("Menu");
      textcolor(YELLOW);
      gotoxy(4,6);
      cprintf("   |^^^|");
      gotoxy(4,7);
      cprintf("   |___|");
      textcolor(GREEN);
      gotoxy(4,7);
      cprintf("1.");
      gotoxy(7,8);
      cprintf("Apps");
      textcolor(YELLOW);
      gotoxy(14,6);
      cprintf("   |^^^|");
      gotoxy(14,7);
      cprintf("   |___|");
       textcolor(GREEN);
	gotoxy(14,7);
      cprintf("2.");
       gotoxy(17,8);
      cprintf(" New ");
      gotoxy(17,9);
      cprintf("folder");
     gotoxy(66,4);
     cprintf("3.About");
      textcolor(RED);
      gotoxy(66,6);
      cprintf("4.Turn off\n");

       //stime();
       gotoxy(4,11);
      cin>>j;
      int p;char yes;
      switch(j)
      {case 1:
      {f: clrscr();
	 s2time();
      textcolor(GREEN);
      for(int z=1;z<=80;z++)
     { gotoxy(z,2);
      cprintf("_");}
      textcolor(BLUE);
      for(z=1;z<=25;z++)
     { gotoxy(64,z);
      cprintf("³");}
	gotoxy(4,1);
      textcolor(CYAN);
      cprintf("Explorer\n");
      gotoxy(68,1);
      cprintf("Menu");
      textcolor(YELLOW);
      gotoxy(4,6);
      cprintf("   |^^^|");
      gotoxy(4,7);
      cprintf("   |___|");
      textcolor(GREEN);
      gotoxy(4,7);
      cprintf("1.");
      gotoxy(7,8);
      cprintf("A.a.p");
      gotoxy(66,4);
      cprintf("2.Go back");
      gotoxy(7,10);
      cin>>p;
      switch(p)
      {case 1:{a.game(0);
      goto e;
       }
      case 2:goto e;
      default: cout<<"inv";goto f; }}
case 2:{textcolor(GREEN);
clrscr();cout<<"empty folder\n\n";textcolor(RED);
cprintf("Press any key to go back\n");
getch(); goto e;}
case 3:about();
////////////////////////////////////////////////////////////////////////
//case 4:clrscr();ps.get();getch();goto e;
case 4:{textcolor(YELLOW);clrscr();
textcolor(RED);
gotoxy(18,12);
cprintf("1. Shutdown");
textcolor(GREEN);
cprintf("  2. Restart");
textcolor(CYAN);
cprintf("  3. Jump To THE BEGINNING  ");
cout<<"4.cancel";
int sh,z;
gotoxy(38,14);
cin>>sh;
if(sh==1)
{_setcursortype(_NOCURSOR);
textcolor(RED);
clrscr();
 for(z=0;z<4;z++)
  {textcolor(RED);highvideo(); clrscr();gotoxy(28,12);
  cout<<"Deleting your settings";
 delay(100);cout<<".";delay(100);cout<<".";delay(100);cout<<".";
   delay(50);
 }
for(z=0;z<4;z++)
  {textcolor(RED);highvideo(); clrscr();gotoxy(28,12);
  cout<<"System is shuting down";
 delay(100);cout<<".";delay(100);cout<<".";delay(100);cout<<".";
   delay(50);
 }
delay(20);clrscr();
exit(0);
}
else if(sh==2)
{_setcursortype(_NOCURSOR);
textcolor(GREEN);
clrscr();
for(z=0;z<4;z++)
  {clrscr();gotoxy(28,12); cout<<"Saving your settings";
 delay(100);cout<<".";delay(100);cout<<".";delay(100);cout<<".";
   delay(50);
 }
for(z=0;z<4;z++)
  {clrscr();gotoxy(28,12); cout<<"System restarting";
 delay(100);cout<<".";delay(100);cout<<".";delay(100);cout<<".";
   delay(50);
 }
osload();
goto e; }
else if(sh==3)
{_setcursortype(_NOCURSOR);
clrscr();
start();

goto e; }
else
goto e;
}
default: goto e;}
}
////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
void start()
{s:
int choice;
long int coin,n,b1=0,b2=0,b3=0,b4=0;
start:_setcursortype(_NORMALCURSOR);
ifstream coins("Coins");
coins>>n;
if(n>100000)
{ofstream coi("Coins");  n=0;
coi<<n;}
textbackground(BLACK);
textcolor(3);
clrscr();
clrscr();
textcolor(YELLOW);
cprintf("PLAY, EARN & UNLOCK");cout<<"\n\n";
textcolor(BROWN);
cprintf("coins= ");
cout<<n<<"\n\n";
cout<<"1.Earn\n2.Unlock\n3.Exit!\n\n";
textcolor(GREEN);
cprintf("UNLOCKABLES");textcolor(RED);gotoxy(50,10);cprintf("9.RESET PROGRESS !");
cout<<"\n\n5.Load .H Operating System\n6.Typo (typing app)\n7.Virtua Cricket\n8.Day finder\n";
cin>>choice;   int c;
switch(choice)
{case 1:c=fall(0);
ifstream coins("Coins");
ofstream coi("Coins");
coins>>n;
n+=c;
coi<<n;
coins.close();
coi.close();
goto start;
case 2:int buy;
textcolor(LIGHTGREEN);
clrscr();
cout<<"1 .H Operating System [collection of all apps] - 50 coins\n\n2 Typo - 30 coins\n\n";
cout<<"3 Virtua Cricket - 30   coins\n\n4 Day finder - 10 coins\n\n";
cout<<"5 Go Back\n\n";
cin>>buy;if(buy==5) goto start;
coins>>n;

if(buy==1&&n>=50)
{cout<<"Purchase succesful !\n";n-=50;ofstream coi("Coins");
coi<<n;b1=1;coi.close();ofstream unl1("u1");unl1<<b1;unl1.close();
}
else if(buy==2&&n>=30)
{cout<<"Purchase succesful !\n";n-=30;
ofstream coi("Coins");
coi<<n;b2=1;coi.close();ofstream unl2("u2");unl2<<b2;unl2.close();
}
else if(buy==3&&n>=30)
{ofstream coi("Coins");
cout<<"Purchase succesful !\n";n-=30;
coi<<n;  b3=1;coi.close();ofstream unl3("u3");unl3<<b3;unl3.close();
}
else if(buy==4&&n>=10)
{ofstream coi("Coins");
cout<<"Purchase succesful !\n";n-=10;
coi<<n;   b4=1;coi.close();ofstream unl4("u4");unl4<<b4;unl4.close();
}
else
cout<<"\nNoT Enough Coins\n";  getch();coi.close();coins.close();
 goto s;
case 3:break;

case 4:int ha;
 textcolor(LIGHTGRAY); clrscr();
 for(int i=0;i<=2715;i++)
 {ha=random(2);
 if(i==2000)
 cout<<7;
 if(i==2200)
 cout<<6;
 if(i==2400)
 cout<<9;
 if(i==2600)
 cout<<8;
 else
 cout<<ha;delay(1);
}
 int j,a=0;
 gotoxy(32,8);
 textcolor(RED);
cprintf("Enter password");
gotoxy(38,10);
cprintf("----");
gotoxy(38,10);
cin>>a;
if(a==7698)
{textcolor(GREEN+BLINK);
gotoxy(32,12);
cprintf("HACK Successfull");getch();}
else
{textcolor(RED+BLINK);
gotoxy(34,12);
cprintf("HACK FAILED");getch();}
textcolor(GREEN);
clrscr();
if(a==7698)
{ifstream coins("Coins");
coins>>n;
cout<<"Current coins= "<<n<<" \n\n";
cout<<"ENTER AMOUNT TO ADD  (Limit: 10000)\n";
cin>>coin;
n+=coin;
ofstream coi("Coins");
coi<<n;
coi.close();
coins.close();
goto start;}
goto start;
case 5: clrscr();
ifstream un1("u1");
un1>>b1;
if(b1==1)
{osload();
login();
explorer();}
else
{cout<<"BuY and then Open\n";
getch();
}
un1.close();
goto start;

case 6:clrscr();
ifstream un2("u2");
un2>>b2;
if(b2==1)
{app k;
k.game(1);}

else
{cout<<"BuY and then Open\n";
getch();
}
un2.close();
goto start;
case 7: clrscr();
ifstream un3("u3");
un3>>b3;
if(b3==1)
vcricket();
else
{cout<<"BuY and then Open\n";
getch();
}
un3.close();
goto start;

case 8:
textcolor(CYAN);
clrscr();
ifstream un4("u4");
un4>>b4;
if(b4==1)
dayf();
else
{cout<<"BuY and then Open\n";
getch();
}
un4.close();
goto start;
case 9:clrscr();int res;
cout<<"Are You Sure You Want To RESET Your Current Progress ?\n";
cout<<"\n1.Yes\t\t2.No\n";
cin>>res;
if(res==1)
{fall(1);
int reset1,reset2,reset3,reset4,reset5,reset6,reset7;
ifstream coins("Coins");
coins>>reset1;reset1=0;
ofstream coi("Coins");
coi<<reset1;
ifstream un1("u1");
un1>>reset2;reset2=0;
ofstream unl1("u1");
unl1<<reset2;

ifstream un2("u2");
un2>>reset3;reset3=0;
ofstream unl2("u2");
unl2<<reset3;

ifstream un3("u3");
un3>>reset4;reset4=0;
ofstream unl3("u3");
unl3<<reset4;

ifstream un4("u4");
un4>>reset5;reset5=0;
ofstream unl4("u4");
unl4<<reset5;
goto start;}
else
goto start;
default:goto start;}/////////switch ending...
ofstream coi("Coins");
coi<<n;
coins.close();
coi.close();exit(0);
}


      void osload()
      {_setcursortype(_NOCURSOR);
      textcolor(CYAN);
     clrscr();
      highvideo();
      gotoxy(30,10);
      cout<<" Operating system ";
      gotoxy(28,10);
      textcolor(GREEN);
      cprintf(".h");
      textcolor(RED);
      gotoxy(30,11);
      cprintf("    2014 Basic");
      for(int i=1;i<=80;i++)
 {delay(50);

 textattr(16);
  gotoxy(i,24);
 cprintf(" ");
}}

  int fall(int rese)
{int h;int point;
ifstream high1("Bsttt");
high1>>point; high1.close();
if(point>10000)
{ofstream high("Bsttt");
 point=0;high<<point;high.close();}
if(rese==0)
{
ifstream high1("Bsttt");
high1>>point;
h=point;
textcolor(LIGHTGREEN);
clrscr();
cout<<"Just type letters you see to earn coins\n\n";
cout<<"Each point is equal to 1 coin !\1";getch();
randomize();
int a;point=0;
for(int i=1;i<=1000;i++)
{textcolor(LIGHTGREEN);
_setcursortype(_NOCURSOR);
clrscr();int n=(random(25)+97);
char ch=n;
int d,q=random(40)+3,w=random(40)+3;
textcolor(LIGHTMAGENTA);
gotoxy(45,1);
cprintf("points=    ");
gotoxy(54,1);
cout<<point;
cout<<"\n";
gotoxy(q,w+1);
cout<<ch;
a=getch(); d=a;
if(d==n)
point++;
else
goto e;
}e: clrscr();
if(h<point)
{ofstream high("Bsttt");
h=point;
high<<h;
high.close();
}
high1>>h;
high1.close();
gotoxy(38,12);
{textcolor(WHITE+BLINK);
cprintf("GAME OVER");}
gotoxy(40,14);
cout<<"points= "<<point;
if(point>=h)
h=point;
gotoxy(40,16);
cout<<"High score= "<<h;
getch();
}
else if(rese==1)
{int p;
ifstream high1("Bsttt");
high1>>p; p=0;
ofstream high("Bsttt");
high<<p;high1.close();high.close();
}
return point;}

  void about()
  {_setcursortype(_NOCURSOR);
  textcolor(LIGHTRED);
  clrscr();
  gotoxy(1,1);
  cprintf("O.S name       : ");
  textcolor(GREEN);
  cprintf(".h");
       textattr(3);
  cout<<"\n\nProgrammer     : ";cprintf("Abhishek.K");

  gotoxy(1,8);
  textcolor(LIGHTBLUE);
  cprintf("\n--> A simple and basic theme of Simple Operating system using C & C++");
  getch();
  explorer();}

void stats()
{textcolor(GREEN);
gotoxy(35,1);
cprintf("Player stats");
gotoxy(1,3);
cprintf(" Player name  : ");
gotoxy(1,4);
cprintf(" Letters typed: ");
gotoxy(1,5);
cprintf(" Wrongly typed: ");
gotoxy(1,6);
cprintf(" Total Time   : ");
gotoxy(22,6);
cprintf("s");
gotoxy(1,7);
cprintf(" Typing speed : ");
gotoxy(21,7);
cprintf("l/s");
 }
void gameover()
{textcolor(RED+BLINK);
clrscr();
_setcursortype(_NOCURSOR);
gotoxy(30,10);
cout<<"GAME OVER !!!";
getch();}
void typo()
{textbackground(BLACK);
textcolor(GREEN);
_setcursortype(_NOCURSOR);
clrscr();
cout<<"\n\n\n\n";
cout<<" TTTTTTTTTT        YYY          YYY        PPPPPPPPPP     OOOOOOOOOOOOO\n";
cout<<" TTTTTTTTTT         YYY        YYY         PPPPPPPPPP     OOOOOOOOOOOOO\n";
cout<<"     TT              YYY      YYY          PP      PP     OOO       OOO\n";
cout<<"     TT               YYY    YYY           PP      PP     OOO       OOO\n";
cout<<"     TT                YYYYYYYY            PPPPPPPPPP     OOO       OOO   \n";
cout<<"     TT                 YYYYYY             PPPPPPPPPP     OOO       OOO  \n";
cout<<"     TT                   YY               PP             OOO       OOO  \n";
cout<<"     TT                   YY               PP             OOO       OOO  \n";
cout<<"     TT                   YY               PP             OOO       OOO   \n";
cout<<"     TT                   YY               PP             OOOOOOOOOOOOO  \n";
cout<<"     TT                   YY               PP             OOOOOOOOOOOOO\n";
textcolor(CYAN);
cout<<"\n\n";
gotoxy(32,17);
delay(200);
highvideo();
cprintf("It's not about how U type,\n");
gotoxy(42,19);
delay(200);
cprintf("It's about how FAST u type !");
    getch();}
    void del()
    {_setcursortype(_NOCURSOR);
    textcolor(GREEN);clrscr();
    cout<<"\n\n\n\n";
delay(500);
cout<<" TTTTTTTTTT        YYY          YYY        PPPPPPPPPP     OOOOOOOOOOOOO\n";
delay(200);
cout<<" TTTTTTTTTT         YYY        YYY         PPPPPPPPPP     OOOOOOOOOOOOO\n";
delay(185);
cout<<"     TT              YYY      YYY          PP      PP     OOO       OOO\n";
delay(165);
cout<<"     TT               YYY    YYY           PP      PP     OOO       OOO\n";
delay(145);
cout<<"     TT                YYYYYYYY            PPPPPPPPPP     OOO       OOO   \n";
delay(125);
cout<<"     TT                 YYYYYY             PPPPPPPPPP     OOO       OOO  \n";
delay(105);
cout<<"     TT                   YY               PP             OOO       OOO  \n";
delay(95);
cout<<"     TT                   YY               PP             OOO       OOO  \n";
delay(75);
cout<<"     TT                   YY               PP             OOO       OOO   \n";
delay(55);
cout<<"     TT                   YY               PP             OOOOOOOOOOOOO  \n";
delay(25);
cout<<"     TT                   YY               PP             OOOOOOOOOOOOO\n";
     clrscr();}
void blin()
{textbackground(BLACK);
textcolor(GREEN+BLINK);
_setcursortype(_NOCURSOR);
clrscr();
cout<<"\n\n\n\n";
cout<<" TTTTTTTTTT        YYY          YYY        PPPPPPPPPP     OOOOOOOOOOOOO\n";
cout<<" TTTTTTTTTT         YYY        YYY         PPPPPPPPPP     OOOOOOOOOOOOO\n";
cout<<"     TT              YYY      YYY          PP      PP     OOO       OOO\n";
cout<<"     TT               YYY    YYY           PP      PP     OOO       OOO\n";
cout<<"     TT                YYYYYYYY            PPPPPPPPPP     OOO       OOO   \n";
cout<<"     TT                 YYYYYY             PPPPPPPPPP     OOO       OOO  \n";
cout<<"     TT                   YY               PP             OOO       OOO  \n";
cout<<"     TT                   YY               PP             OOO       OOO  \n";
cout<<"     TT                   YY               PP             OOO       OOO   \n";
cout<<"     TT                   YY               PP             OOOOOOOOOOOOO  \n";
cout<<"     TT                   YY               PP             OOOOOOOOOOOOO\n";
delay(1500);  clrscr();}
void read1()
{clrscr();
 _setcursortype(_NOCURSOR);
 gotoxy(30,10);
 cout<<"LOADING";
   for(int i=0;i<7;i++)
  {clrscr();gotoxy(30,10); cout<<"Loading Mind Freak";
   delay(100);cout<<".";delay(100);cout<<".";delay(100);cout<<".";
   delay(50);
 }}
void read2()
{clrscr();
 _setcursortype(_NOCURSOR);
 gotoxy(30,10);
 cout<<"LOADING";
   for(int i=0;i<8;i++)
  {clrscr();gotoxy(30,10); cout<<"Loading Mind readers";
   delay(100);cout<<".";delay(100);cout<<".";delay(100);cout<<".";
   delay(50);
 } }
void inst()
{
textcolor(RED+BLINK);
gotoxy(31,1);
cprintf("---INSTRUCTIONS---");
textcolor(CYAN);
{
gotoxy(1,2);
cprintf("\n\n 1. This App consists of 4 rounds.\n");
gotoxy(1,4);
cprintf("\n\n 2. Each space given between each word, Matters a lot (be aware) !\n");
gotoxy(1,6);
cprintf("\n\n 3. Use enter key to start and end the TIMER.\n");
gotoxy(1,8);
cprintf("\n\n 4. Don't forget to use upper cases wherever needed !\n");
gotoxy(1,10);
cprintf("\n\n 5. The last round is an overlaping round where the words typed are overlaped \n  on the printed passage!\n");
gotoxy(1,12);
cprintf("\n\n 6. If a BLINKING CURSOR appears then it says that the time count has started ! ");
gotoxy(1,14);
_setcursortype(_SOLIDCURSOR);
cprintf("\n\n    BLINKING CURSOR, ex: ");
}getch();}
void load1()
{clrscr();
 _setcursortype(_NOCURSOR);
 gotoxy(30,10);
 cout<<"LOADING";
   for(int i=0;i<4;i++)
  {clrscr();gotoxy(30,10); cout<<"Loading TYPO";
 delay(100);cout<<".";delay(100);cout<<".";delay(100);cout<<".";
   delay(50);
 }}
 void load2()
{clrscr();
 _setcursortype(_NOCURSOR);
 gotoxy(30,10);
 cout<<"LOADING";
   for(int i=0;i<4;i++)
  {clrscr();gotoxy(30,10); cout<<"Loading Characters";
 delay(100);cout<<".";delay(100);cout<<".";delay(100);cout<<".";
   delay(50);
 }}
 void load3()
{clrscr();
 _setcursortype(_NOCURSOR);
 gotoxy(30,10);
 cout<<"LOADING";
   for(int i=0;i<4;i++)
  {clrscr();gotoxy(30,10); cout<<"Loading levels";
   delay(100);cout<<".";delay(100);cout<<".";delay(100);cout<<".";
   delay(50);
 }}void load4()
{clrscr();
 _setcursortype(_NOCURSOR);
 gotoxy(30,10);
 cout<<"LOADING";
   for(int i=0;i<4;i++)
  {clrscr();gotoxy(30,10); cout<<"Loading arrays";
 delay(100);cout<<".";delay(100);cout<<".";delay(100);cout<<".";
   delay(50);
 }}
//////////////////////////////////Guess me not//////////////////////////////
void guess()
{q1: textcolor(LIGHTBLUE);
randomize();int chances[100];
int p,r[20];int n[20];
int g=-1;///7 chances!(:
for(int u=0;u<=10;u++)
{_setcursortype(_NOCURSOR);clrscr();
gotoxy(28,12);
cout<<"    GuEsS mE nOt";
gotoxy(1,25);
cout<<"  starting";delay(80);cout<<".";
delay(80);cout<<".";
delay(80);cout<<".";
delay(80);cout<<".";}
clrscr(); _setcursortype(_NORMALCURSOR);
cout<<"Enter number of Players\n";
cin>>p;     char name[20][20];
for(int j=0;j<p;j++)
{cout<<"Enter Name of player "<<j+1<<endl;
cin>>name[j];
}
for(j=0;j<p;j++)
{textcolor(LIGHTBLUE);
n[j]=random(100);g=-1;
chances[j]=0;clrscr();
textcolor(YELLOW);
cprintf(name[j]);
cout<<" Start GuEsSiNg ! (0-99)\n";
for(int i=1;i<=7;i++)
{
if(g>(n[j]+10)&&g!=-1)
cout<<"BiG GuEsS !           \n";
else if((g>n[j])&&(g<=(n[j]+10))&&g!=-1)
cout<<"BiG, but close!          \n";
else if(g<=(n[j]-10)&&g!=-1)
cout<<"SMaLL GuEsS !           \n";
else if((g<n[j])&&(g>=(n[j]-10))&&g!=-1)
cout<<"Small , yet close!           \n";
if(i==6)
cout<<"Come oN YoU Should be knowing it by this time !           \n";
cin>>g;
chances[j]++;
if(g==n[j])
{r[j]=1;cout<<"\nWELL DONE "<<name[j]<<"\n";getch();break;}
else if(g!=n[j]&&i==6)
{r[j]=0;cout<<"\n Sorry "<<name[j]<<" your Chances are over ):";
 cout<<"\n However the number was "<<n[j];
 cout<<"\n Better luck next time (:";getch();break;}
}
}
textcolor(GREEN);
clrscr();
char ch;int e;
for(int l=0;l<p;l++)
if(r[l]==1)
{textcolor(YELLOW);
cprintf(name[l]);
cout<<" took "<<chances[l]<<" chances to GuEsS "<<n[l]<<" (:\n\n";
}
for(l=0;l<p;l++)
if(r[l]!=1)
{textcolor(YELLOW);
cprintf(name[l]);
textcolor(RED);
cprintf(" FAILED ");cout<<"to GuEsS "<<n[l]<<" ):\n\n";
}

cout<<"\nWell U know Who WON/LOST \1 !!!";
getch();clrscr();
cout<<"Want to GuEsS again (Y/N) \n";
cin>>ch;
if(ch=='y'||ch=='Y')
goto q1;
}

 void load5()
{clrscr();
 _setcursortype(_NOCURSOR);
 gotoxy(30,10);
     for(int i=0;i<4;i++)
  {clrscr();gotoxy(30,10); cout<<"Arranging strings";
 delay(100);cout<<".";delay(100);cout<<".";delay(100);cout<<".";
   delay(50);
 }}
 void login()
 {    textbackground(BLACK);
      textcolor(WHITE);
      _setcursortype(_NORMALCURSOR);
      clrscr();int t;   char name[21],pass[21];
      for(t=28;t<=50;t++)
     { gotoxy(t,10);
      cout<<"Í";}
      gotoxy(27,10);
      cout<<"É";
      for(t=28;t<=50;t++)
     { gotoxy(t,16);
      cout<<"Í";}
      gotoxy(51,10);
      cout<<"»";
      gotoxy(27,16);
      cout<<"È";
      for(t=11;t<=15;t++)
     { gotoxy(27,t);
      cout<<"º";}
      for(t=11;t<=15;t++)
     { gotoxy(51,t);
      cout<<"º";}
      gotoxy(51,16);
      cout<<"¼";
      lowvideo();   cin.ignore();
      gotoxy(30,12);
      cout<<"Username:";
      gotoxy(30,14);
      cout<<"Password:";
      gotoxy(40,12);
      cin.getline(name,20);
      gotoxy(40,14);
      int y=0;int enter;
      while(enter!=13)
      {pass[y]=getch();
      cout<<"*";
      enter=pass[y];
      y++;
      };
if(strcmp(name,"AbI")==0)
{
_setcursortype(_NOCURSOR);
       clrscr();
       for(int i=0;i<8;i++)
  {  clrscr();
  gotoxy(28,12);
      cout<<"Signing in as Admin";
  cout<<".";delay(100);cout<<".";delay(100);cout<<".";
   delay(50);
   }
}
   else if(strcmp(name,"zq")!=0)
  {clrscr();

      for(int i=0;i<8;i++)
  {
   _setcursortype(_NOCURSOR);
    gotoxy(28,12);
    clrscr();
   gotoxy(28,12);
   cout<<"Signing in as Guest";
   cout<<".";delay(100);cout<<".";delay(100);cout<<".";
  }


      }

 }
 void fin()
 {clrscr();
 _setcursortype(_NOCURSOR);
 gotoxy(30,10);
 textcolor(CYAN+BLINK);
 cprintf("Press any key");
 getch();textcolor(CYAN); }
 void stime()
{time_t t = time(NULL);
 tm* timePtr = localtime(&t);
 gotoxy(65,1);
 cout << "Date: " <<(timePtr->tm_mday)<<"/"<< (timePtr->tm_mon)+1 <<"/"<< (timePtr->tm_year)+1900<< endl;
 gotoxy(65,2);
 cout << "Time: " <<timePtr->tm_hour<<":"<< (timePtr->tm_min)<<endl;}

void s2time()
{
 textcolor(LIGHTBLUE);clrscr();
 time_t t = time(NULL);
 tm* timePtr = localtime(&t);
 gotoxy(67,25);
 cout<<(timePtr->tm_mday)<<"/"<< (timePtr->tm_mon)+1 <<"/"<< (timePtr->tm_year)+1900<< endl;
 gotoxy(68,23);
 cout<<timePtr->tm_hour<<":"<<timePtr->tm_min<<endl;
}

void f()
{
int i,j,n;
char a[30],b[30];
textcolor(CYAN);
clrscr();
randomize();
n=random(101);
textcolor(GREEN); char y[10];
cin.getline(y,10);
gotoxy(2,1);
cprintf("Enter your name");
gotoxy(2,2);
cin.getline(a,20);
gotoxy(2,4);
cprintf("Enter your friend's name");
gotoxy(2,5);
cin.getline(b,20);
clrscr();
 _setcursortype(_NOCURSOR);
 gotoxy(30,10);
   for(i=0;i<10;i++)
 {clrscr();gotoxy(30,10); cprintf("CALCULATING");
 delay(100);cout<<".";delay(100);cout<<".";delay(100);cout<<".";
   delay(50);}
clrscr();
for(i=0;i<n;i++)
{
delay(50);
textcolor(CYAN);
clrscr();
gotoxy(36,10);
cout<<i;textcolor(RED);
cprintf("%");}
getch();
}
void drul()
{start:
clock_t start, end;
randomize();
textcolor(BROWN);
clrscr();
int a;
int c[]={72,75,80,77};
int n,ch,g,p=0,life=3;
gotoxy(30,8);
cout<<"1.START THE GAME";
gotoxy(30,10);
cout<<" 2.INSTRUCTIONS";
gotoxy(30,12);
cout<<"    3.QUIT";
gotoxy(30,14);
cin>>ch;
switch(ch)
{
case 1: clrscr();
start=clock();
do
{a=random(4);
n=c[a];
if(n==72)
cout<<"UP   \n";
if(n==75)
cout<<"LEFT \n";
if(n==80)
cout<<"DOWN \n";
if(n==77)
cout<<"RIGHT\n";
g=getche();
g=getch();

if(g==n)
{p++;
textcolor(GREEN);
gotoxy(13,p);
cprintf("\3\n");
gotoxy(1,p+1);
}
else
{life-=1;
textcolor(RED);
gotoxy(13,p);
cprintf("\3\n");
gotoxy(1,p+1);

}
}while(life!=0);
end=clock();
float time=(end-start)/CLK_TCK;
float score=p/time,s;                 int d=score*100;
cout<<"\n\t\tTime  = "<<time<<" sec";
cout<<"\n\t\tPOINTS= "<<p<<" SCORE: "<<d;
ifstream hsc("score.txt");
hsc>>s;
if(s>1000||s<0)
{
ofstream hsc1("score.txt");
s=0;
hsc1<<s;
hsc1.close();
}
hsc>>s;
if(score>s)
{ofstream hsc1("score.txt");
hsc1<<score;cout<<"\nHIGH SCORE!!!!!!!";
hsc1.close();
}
hsc.close();
getch();
goto start;
case 2:clrscr();cout<<"You have 3 lives\n";getch();
goto start;
case 3:break;
default: goto start;
}
}

void vcricket()
{start:
textcolor(CYAN);
int level,hh;clrscr();
ifstream hs("hscore.txt");
hs>>hh;
hs.close();
textcolor(GREEN);
gotoxy(32,5);
cprintf("Virtua Cricket\n");
gotoxy(27,7);
cout<<"Select Difficulty level\n";
gotoxy(56,7);
cout<<"High Score: "<<hh;
textcolor(MAGENTA);
gotoxy(35,9);
cprintf("1.EASY\n");
textcolor(WHITE);
gotoxy(35,10);
cprintf("2.MEDIUM\n");
textcolor(RED);
gotoxy(35,11);
cprintf("3.HARD\n");
textcolor(BROWN);
gotoxy(28,25);
cprintf("Press 4 and enter to EXIT\n");
gotoxy(37,13);
cin>>level;
switch(level)
{
case 1:game(15);   break;
case 2:game(42); break;
case 3:game(73);   break;
case 4:break;
default: goto start;
};
if(level!=4)
goto start;
}

void game(int a)
{
textcolor(MAGENTA);
randomize();
clrscr();
int i,out=0,n,pscore=0,req;int pl=0,target=random(25)+a,cpu[]={4,1,2,5,3,6,4,1,2,3,6,5,4,1,2,5,6,3,2,5,4,1,2,3,6,5,1,5,4,2,5,6,4,2,3,1,4,5,6,1,2,3,4,5,6,5,4,1,2,3,6};;
gotoxy(1,1);
cout<<"Score more than "<<target<<" to win!";
gotoxy(3,3);
cout<<"Player";
gotoxy(40,3);
cout<<"Cpu\n";
gotoxy(49,5);
cout<<"Target= "<<target+1;
i=5;
while(out==0)
{o:
gotoxy(49,8);
cout<<"Score= "<<pscore;   req=target-pscore+1;
gotoxy(49,10);
cout<<"Required= "<<req<<" \n";

n=random(50);
gotoxy(5,i);
cin>>pl;
if(pl<1||pl>6)
{
cout<<"U are allowed to score only between 1-6\n";
i+=2;goto o;
}

gotoxy(41,i);
cout<<cpu[n];
if(pl==cpu[n])
{out=1; break;}
pscore+=pl;

gotoxy(49,8);
cout<<"Score= "<<pscore;   req=target-pscore+1;
gotoxy(49,10);
cout<<"Required= "<<req<<" \n";

if(target<pscore)
{cout<<"\nU Win !!!\n"; break;}
i++;

}
int hh=0;
ifstream h1("hscore.txt");
h1>>hh;

if(hh<0||hh>200)
{ofstream h2("hscore.txt");
 hh=0;
 h2<<hh;
 h2.close();
}
if(pscore>hh)
{
ofstream h2("hscore.txt");
hh=pscore;
h2<<hh;
h2.close();
cout<<"\nCongrats... You Set a New High Score !\n";
}
h1.close();

 cout<<"\nSCORE= "<<pscore;
 if(target>pscore)
 cout<<"\nU lose\n";
 else if(target<pscore)
 cout<<"\n";
 else
 cout<<"ITS a TIE\n";
  getch();
}
void dayf()
{
st:
int date,mon,year,b[13]={0,1,4,4,0,2,5,0,3,6,1,4,6},c,d;
char day[8][11]=
{"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
clrscr();
printf("Enter dd/mm/yyyy (with slash)\n");
scanf("%d/%d/%d",&date,&mon,&year);
if(date>31)
{
	cout<<"\nInvalid Date\n";getch();
	goto st;
}
else if(date>29&&mon==2&&( (year%4==0&&year%100!=0) || year%400==0))
{
	cout<<"\nInvalid Date\n";getch();
	goto st;
}
else if(date>28 && year%4!=0)
{
	cout<<"\nInvalid Date\n";getch();
	goto st;
}

if(mon>12)
{
	cout<<"\nInvalid Month\n";
	goto st;
}
d=date+year%100+(year%100)/4+b[mon];
if( (year%4==0&&year%100!=0) || year%400==0)
d-=1;
if(year>=2000)
d-=1;
c=d%7;
printf("%s",day[c]);
getch();

}