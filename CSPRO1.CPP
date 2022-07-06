//C++ Program assignment Management
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<iomanip.h>
#define PI 3.14
int global=10;
void ko(int xo)
{
cout<<"Square of "<<xo<<" is = "<<xo*xo;
}
void msg1()
{
cout<<"\nHii this is function of a function program :)";
}
void kml()
{
char name[25];
cout<<"Enter your name = ";
gets(name);
if(strlen(name)==0)
{
cout<<"Good morning name(default) Have a nice day..!!\";";
}
else
{
cout<<"Good morning "<<name<<"Have a nice day...!!!!";
}
}
void msg()
{
cout<<"Thanks";
}
int rm(int x)
{
randomize();
int k=random(x+1);
return(k);
}
void not(int x1,int y3)
{
int z2;
z2=x1+y3;
cout<<"The addition of nos.is="<<z2;
}
int no2()
{
int add;
cout<<"Enter a=";
cin>>add;
return add;
}
int no3()
{
int bad;
cout<<"Enter b=";
cin>>bad;
return bad;
}
int rec(int facto,int value=1)
{
	if(facto==1)
	{
	return(value);
	}
	else
	{
	value=facto*value;
	facto--;
	facto=rec(facto,value);
	}
}
void f1()
{
cout<<"Hii i am simple function (function 1)";
}
int f2()
{
cout<<"Hii i m a function 2";
}
void f3(int x)
{
cout<<"Hii i am a function with argument";
}
int f4(int y)
{
cout<<"Hi i am function with argument and with return type";
}
int summ(int x2,int y2)
{
cout<<"The addition of the numbers is =";
int k2;
k2=x2+y2;
return(k2);
}
struct emp
{
char nme[20];
int age;
float sal;
};
void swap2(int &xp,int &yp)
{
int ta;
ta=xp;
yp=ta;
cout<<"During Swapping ="<<xp<<"\t"<<yp;
}
void swap(int xi,int yo)
{
int tb;
tb=xi;
yo=tb;
cout<<"During Swapping ="<<xi<<"\t"<<yo;
}
struct st
{
char namee[20];
int maths,chemistry;
	void inpu()
	{
	cout<<"\nEnter your name =";
	gets(namee);
	cout<<"Enter your marks in chem =";
	cin>>chemistry;
	cout<<"Enter your marks in maths =";
	cin>>maths;
	}
	void outpu()
	{
	cout<<"\n\nYour name is =";
	puts(namee);
	cout<<"Your marks in chem ="<<chemistry;
	cout<<"\nYour marks in math is ="<<maths;
	}
};
void sqr(int a2)
{
cout<<"The square of the sum is ="<<a2*a2;
}
struct named
{
int xon;
float yon;
char zon;
}obj;
void ktt(int global)
{
cout<<"Value of global (outside) is ="<<::global;
cout<<"\nValue of function global is ="<<global;
}
char *NAME ={"YOUR NAME"};
char *setname()
{
char *names;
cout<<"Please enter your name = ";
gets(names);
NAME=names;
return(names);
}
void greet(char name[])
//void greet(char NAME[])
{
cout<<"Hii "<<NAME<<" Welcome!!";
}

void fun(int xi)
{
cout<<"Repeat of the sentence.\n";
xi--;
	if(xi==0)
	{
	getch();
	exit(0);
	}
	else
	{
	fun(xi);
	}
}
void main()
{
clrscr();
int opt;
cout<<"\t\t\t\tMENU OF PROGRAMS (LIST)\n\nThis program is very helpful to user as it helps user to analyze the program";
cout<<"\n  very clearly and gives detail about the programs and their outputs.";
cout<<"\n\n\tHOPE THE PROGRAM IS CLEAR AND IS ABLE TO CLEAR DOUBTS ABOUT C++";

getch();
clrscr();
xxx:
cout<<"1.Adding two numbers\t\t2.Find bigger value\n3.Date of Birth program\t\t4.Use of Unary operator\n5.Using Reference variable\t6.Use of constant variable";
cout<<"\n7.Print Alpha.using Ascii code\t8.Arithmetic Operations\n9.Eligibility for Marriage\t10.Even odd program";
cout<<"\n11.Array Salary Program\t\t12.Determine Leap Year\n13.Add Digits of a number\t14.Print Table Series";
cout<<"\n15.Find Even and Odd Range\t16.Program running until user press n\n17.Nesting of Loops\t\t18.Program to find Prime number";
cout<<"\n19.Find palindrome number\t20.Find area of circle\n21.Check input value\t\t22.Change the case of alphabet\n";
cout<<"23.Use of string.h header File\t24.Find power,square root,values of angles\n25.";
cout<<"Reverse string\t\t26.Program of Linear Search\n27.Program using randomize\t28.Swapping of first word with second\n29.Matrix Fixed Static Initial.";
cout<<"\t30.Adding Horizontal rows of Matrix\n";
cout<<"31.Ascii code structure 1\t32.Ascii code structure 2\n33.Function squaring program\t34.";
cout<<"Implementation of function\n35.Random Function Program\t36.Adding two values with help of Function\n37.Adding and squaring\t\t";
cout<<"38.Use of Global Variable\n39.Using Default Argument\t40.All types of Function\n41.Use of Recursive Function\t42.";
cout<<"Greet the user\n43.Find factorial of the number\t44.Use of Typedef function\n45.Input name and Greet user";
cout<<"\t46.Use of Struct datatype\n47.Provide Employee info.\t48.Student's Report\n49.Call by value\t\t50.Call by Reference";
getch();
clrscr();
cout<<"\nChoose any Program whose coding and output you want to know by their respective numbers. =";
cin>>opt;
clrscr();
switch(opt)
{
case 1: //Adding two values
int xat,yat;
cout<<"#include<iostream.h>\n#include<conio.h>\nvoid main()\n{\n";
cout<<"int x,y;\nclrscr();\ncout<<\"Enter any value for x and y\";\n";
cout<<"cin>>x>>y;\nclrscr();\ncout<<(x+y);\ncout<<\"End of program\";";
cout<<"\ngetch();\n}";
getch();
clrscr();
cout<<"Output=>\nEnter any value for x and y=";
cin>>xat>>yat;
   if(xat>0||yat>0)//&& ||
   {
   cout<<"The Addition of both is ="
   <<(xat+yat);
   }
   cout<<"\nEnd of program";

break;
case 2: //Find bigger value
int xr,yr,zr,maxr;
cout<<"#include<iostream.h>\n#include<conio.h>\nvoid main()\n{";
cout<<"\nint x,y,z,max;\ncout<<\"Enter three no.s=\";\ncin>>x>>y>>z;";
cout<<"\ncout<<\"The largest among x,y &z is=>\";\nmax=x;\nif(y>max)\n{";
cout<<"\nmax=y;\n}\nelse if(z>max)\n{\nmax=z;\n}\ncout<<\"The largest of \"<<x<<\" , \"<<y<<\" and \"<<z<<\" is =\"<<max;";
cout<<"\ngetch();\n}";
getch();
clrscr();
cout<<"Output=>\nEnter three no.s=";
cin>>xr>>yr>>zr;
maxr=xr;
if(yr>maxr)
{
maxr=yr;
}
else if(zr>maxr)
{
maxr=zr;
}
cout<<"\n"<<"The largest of "<<xr<<" , "<<yr<<" and "<<zr<<" is ="<<maxr;
break;
case 3:
cout<<"//Date of birth program\n#include<iostream.h>\t#include<conio.h>\nvoid main()\n{ clrscr();";
cout<<"\nint DD,MM,YYYY;\ncout<<\"Enter the date of your birth (DD)=\";\ncin>>DD;";
cout<<"\ncout<<\"Enter the maonth of your birth (MM)=\";\ncin>>MM;\ncout<<\"Enter the year of your birth (YYYY)=\";";
cout<<"\ncin>>YYYY;\ncout<<\"Your date of Birth is following =\";\nswitch(MM)\n{case 1:cout<<DD<<\"/ January /\"<<YYYY;";
cout<<"\tbreak;\ncase 2:\tcout<<DD<<\"/ February /\"<<YYYY;\tbreak;\ncase 3:\tcout<<DD<<\"/ March /\"<<YYYY;\tbreak;\ncase 4:";
cout<<"\tcout<<DD<<\"/ April /\"<<YYYY;\tbreak;\ncase 5:\tcout<<DD<<\"/ May /\"<<YYYY;\tbreak;\ncase 6:\tcout<<DD<<\"/ June /\"<<YYYY;";
cout<<"\tbreak;\ncase 7:\tcout<<DD<<\"/ July /\"<<YYYY;\tbreak;\ncase 8:\tcout<<DD<<\"/ August /\"<<YYYY;\tbreak;\ncase 9:\tcout<<DD<<\"/ September /\"<<YYYY;";
cout<<"break;\ncase 10:cout<<DD<<\"/ October /\"<<YYYY;\tbreak;\ncase 11:cout<<DD<<\"/ November /\"<<YYYY;\tbreak;\ncase 12:cout<<DD<<\"/ December /\"<<YYYY;\tbreak;";
cout<<"\ndefault:cout<<\"Invalid\";\t\tbreak;\n}\ngetch(); }";
getch();
clrscr();
cout<<"OUTPUT=>";
int DD,MM,YYYY;
cout<<"Enter the date of your birth (DD)=";
cin>>DD;
cout<<"\nEnter the maonth of your birth (MM)=";
cin>>MM;
cout<<"\nEnter the year of your birth (YYYY)=";
cin>>YYYY;
cout<<"\nYour date of Birth is following =";
	if(MM==1)
	{
	cout<<DD<<"/ January /"<<YYYY;
	}
	else if(MM==2)
	{
	cout<<DD<<"/ February /"<<YYYY;
	}
	else if(MM==3)
	{
	cout<<DD<<"/ March /"<<YYYY;
	}
	else if(MM==4)
	{
	cout<<DD<<"/ April /"<<YYYY;
	}
	else if(MM==5)
	{
	cout<<DD<<"/ May /"<<YYYY;
	}
	else if(MM==6)
	{
	cout<<DD<<"/ June /"<<YYYY;
	}
	else if(MM==7)
	{
	cout<<DD<<"/ July /"<<YYYY;
	}
	else if(MM==8)
	{
	cout<<DD<<"/ August /"<<YYYY;
	}
	else if(MM==9)
	{
	cout<<DD<<"/ September /"<<YYYY;
	}
	else if(MM==10)
	{
	cout<<DD<<"/ October /"<<YYYY;
	}
	else if(MM==11)
	{
	cout<<DD<<"/ November /"<<YYYY;
	}
	else if(MM==12)
	{
	cout<<DD<<"/ December /"<<YYYY;
	}
	else
	{
	cout<<"Invalid";
	}
break;
case 9:  //Eligibility for marriage
cout<<"//Eligibility for marriage\n#include<iostream.h>\n#include<conio.h>\nvoid main()\n{\nclrscr();";
cout<<"//\nchar gender;\tint age;\ncout<<\"cout<<\"Please enter your gender\";\ncin>>gender;\nif(gender=='m'|| gender=='M')";
cout<<"\n\t{ cout<<\"Please enter your age=\";\n\tcin>>age;\n\t\tif(age>=21)\n\t\t{cout<<\"Eligible\";\n\t\t}\n\t\telse\n\t\t{cout<<\"Not\";\n\t\t}";
cout<<"\n\t}\n\telse if(gender=='f'|| gender=='F')\n\t{cout<<\"Please enter your age=\";\n\tcin>>age;\n\t\tif(age>=18)\n\t\t{cout<<\"Eligible\";\n\t\t}";
cout<<"\n\t\telse\n\t\t{cout<<\"Not Eligible\";\n\t\t}\n\t}\n\telse\n\t{cout<<\"Invalid value.\";\n\t}\ngetch(); }";
getch();
clrscr();
char gender2;
int age2;
cout<<"OUTPUT=>\n";
cout<<"Please enter your gender =";
cin>>gender2;
	if(gender2=='m'|| gender2=='M')
	{
	cout<<"Please enter your age=";
	cin>>age2;
		if(age2>=21)
		{
		cout<<"Eligible";
		}
		else
		{
		cout<<"Not Eligible";
		}
	}
	else if(gender2=='f'|| gender2=='F')
	{
	cout<<"Please enter your age=";
	cin>>age2;
		if(age2>=18)
		{
		cout<<"Eligible";
		}
		else
		{
		cout<<"Not Eligible";
		}
	}
	else
	{
	cout<<"Invalid value.";
	}
break;
case 5:
cout<<"//Program using Reference variable\n#include<iostream.h>\n#include<conio.h>\nvoid main()\n{\nclrscr();";
cout<<"\nint x=90;\nint &ref=x;\ncout<<\"Reference value is =\"<<ref<<\"\nValue of x is=\"<<x;";
cout<<"\nx=100;\ncout<<\"\nReference value is =\"<<ref<<\"\nValue of x is =\"<<x;\ngetch();\n}";
getch();
clrscr();
cout<<"OUTPUT=>\n";
int xrr=90;
int &ref=xrr;
	cout<<"Reference value is ="<<ref<<"\nValue of x is="<<xrr;
	xrr=100;
	cout<<"\nReference value is ="<<ref<<"\nValue of x is ="<<xrr;
break;
case 6: //Use of constant variable
cout<<"//Use of constant variable\n#include<iostream.h>\n#include<conio.h>\nvoid main()\n{\nclrscr();";
cout<<"\ncout<<\"Use of constant integer.\";\nconst int x=10;\ncout<<\"Value of constant x is =\"<<x;";
cout<<"\nconst int y=50;\ncout<<\"Value of constant y is =\"<<y;\nconst char c='a';";
cout<<"\ncout<<\"Value of constant c is =\"<<c;\ngetch();\n}";
getch();
clrscr();
cout<<"OUTPUT=>\n";
cout<<"Use of constant integer.\n";
const int xar=10;
cout<<"Value of constant x is ="<<xar;
const int yar=50;
cout<<"\nValue of constant y is ="<<yar;
const char car='a';
cout<<"\nValue of constant c is ="<<car;
break;
case 7:
cout<<"//Printing Alphabet using Ascii code\n#include<iostream.h>\n#include<conio.h>\nvoid main()\n{\nclrscr();";
cout<<"\nint a;\n\tfor(a=97; a<=(97+25); a++)\n\t{\n\tcout<<(char)a;\n\t}\ngetch();\n}";
getch();
clrscr();
int aam;
	for(aam=97; aam<=(97+25); aam++)
	{
	cout<<"\t"<<(char)aam;
	}

break;
case 8:
cout<<"//\n#include<iostream.h>\n#include<conio.h>\nvoid main()\n{\nclrscr();";
cout<<"\nint a,b,c,opt;\ncout<<\"Please enter a value for a=\";\ncin>>a;\ncout<<\"Please enter the value for b=\";";
cout<<"\ncin>>b;\ncout<<\"Please enter 1 for addition,2 for substraction\";\ncin>>opt\nif(opt==1)\n{\n";
cout<<"c=a+b;\ncout<<\"The sum is=\"<<c;\n}\nelse if(opt==2)\n{\nc=a-b;\ncout<<\"The difference is=\"<<c;\n}";
cout<<"\nelse\n{\ncout<<\"Invalid no.\";\n}\ngetch();\n}";
getch();
clrscr();
cout<<"OUTPUT=>\n";
int ak,bk,ck,optk;
cout<<"Please enter a value for a=";
cin>>ak;
cout<<"\nPlease enter the value for b=";
cin>>bk;
cout<<"\nPlease enter 1 for addition\n2 for substraction = ";
cin>>optk;
if(optk==1)
{
ck=ak+bk;
cout<<"\nThe sum is="<<ck;
}
else if(optk==2)
{
ck=ak-bk;
cout<<"\nThe difference is="<<ck;
}
else
{
cout<<"\nInvalid no.";
}

break;
case 4:
cout<<"//Using Unary Operator\n#include<iostream.h>\n#include<conio.h>\nvoid main()\n{\nclrscr();";
cout<<"\nint x;\nint y;\nclrscr();\nx=2;\nx + ++x;\ncout<<\"Value of x =\"<<x;";
// Effect of cascading output over unary operator
cout<<"\nx=8;\ncout<<\"Different value of x =\"<<++x<<\",\"<<x<<\",\"<<x++<<\",\"<<--x;\nint c;";
//Assignment operator and shorthand notation
cout<<"\nx=10;\nx/=90;\ncout<<\"Value of x after operation is =\"<<x;\ngetch();\n}";
int xml;
int yml;
getch();
clrscr();
xml=2;
xml + ++xml;
cout<<"OUTPUT=>\n"<<"Value of x ="<<xml;
// Effect of cascading output over unary operator
xml=8;
cout<<"\nDifferent value of x ="<<++xml<<","<<xml<<","<<xml++<<","<<--xml;
int cml;
//Assignment operator and shorthand notation
xml=10;
xml/=90;
cout<<"\nValue of x after operation is ="<<xml;

break;
case 10: //Even odd program
cout<<"//Program to check even and odd\n#include<iostream.h>\n#include<conio.h>\nvoid main()\n{\nclrscr();";
cout<<"\nint x;\ncout<<\"Please enter the number\";\ncin>>x;\nif(x%2==0)\n{\ncout <<\"even\";\n}";
cout<<"\nelse if(x%2!=0)\n{\ncout<<\"odd\";\n}\nelse\n{\ncout<<\"0\";\n}\ngetch();\n}";
getch();
clrscr();
int baa,xaa;
cout<<"Please enter the number =";
cin>>xaa;
if(xaa%2==0)
{
cout <<"Number is even";
}
else if(xaa%2!=0)
{
cout<<"Number is odd";
}
else
{
cout<<"0";
}
break;
case 11://A Program For Array

float salary[10];
clrscr();
	//Static Initilisation
	salary[0]=10000;
	salary[1]=15000.50;
	salary[2]=20000;
	salary[3]=37000;
	salary[4]=38000;
	salary[5]=40000.50;
	salary[6]=41000.50;
	salary[7]=45000;
	salary[8]=48000;
	salary[9]=50000;
cout<<"//A Program For Array\n#include<iostream.h>\n#include<conio.h>";
cout<<"\nvoid main()\n{\n//Declaration of Array\nfloat salary[10];";
cout<<"\nclrscr();\n\t//Static Initilisation\n\tsalary[0]=10000;\n\t";
cout<<"salary[1]=15000.50;\n\tsalary[2]=20000;\n\tsalary[3]=37000;\n\t";
cout<<"salary[4]=38000;\n\tsalary[5]=40000.50;\n\tsalary[6]=41000.50;\n\t";
cout<<"salary[7]=45000;\n\tsalary[8]=48000;\n\tsalary[9]=50000;";
cout<<"\ncout<<\"Salary of Employee-> \"<<salary[6];\ngetch();\n}";
getch();
clrscr();
	cout<<"\nOUTPUT->";
	cout<<"\nSalary of Employee-> "<<salary[6];

break;

case 12://A Program to Determine Leap Year
clrscr();
cout<<"//A Program to Determine Leap Year\n#include<iostream.h>\n";
cout<<"#include<conio.h>\nvoid main()\n{\nint YYYY;\nclrscr();\n";
cout<<"cout<<\"Enter the year you want to find=> \";\ncin>>YYYY;\n";
cout<<"\tif(YYYY%4==0)\n\t{\n\tcout<<YYYY<<\" is a leap year.\";\n\t}\n";
cout<<"\telse\n\t{\n\tcout<<YYYY<<\" is not a leap year.\";\n\t}\n";
cout<<"getch();\n}";
getch();
clrscr();
cout<<"\nOUTPUT->";
cout<<"\nEnter the year you want to find=> ";
cin>>YYYY;
	if(YYYY%4==0)
	{
	cout<<YYYY<<" is a leap year.";
	}
	else
	{
	cout<<YYYY<<" is not a leap year.";
	}

break;

case 13://A Program to Add Digits of a Number

long int no,no1,temp=0;
clrscr();
cout<<"//A Program to Add Digits of a Number\n#include<iostream.h>\n";
cout<<"#include<conio.h>\nvoid main()\n{\nlong int no,no1,temp=0;\nclrscr();";
cout<<"\ncout<<\"Enter a number of your choice=> \";\ncin>>no;\nno1=no;\n";
cout<<"\twhile(no!=0)\n\t{\n\ttemp+=no%10;\n\tno=no/10;\n\t}\n";
cout<<"\tcout<<\"The sum of the digits of \"<<no1<<\" is=> \"<<temp;\n";
cout<<"getch();}";
	 getch();
	 clrscr();
cout<<"\n\nOUTPUT->";
cout<<"\nEnter a number of your choice=> ";
cin>>no;
no1=no;
	while(no!=0)
	{
	temp+=no%10;
	no=no/10;
	}
	cout<<"The sum of the digits of "<<no1<<" is=> "<<temp;

break;

case 14://A Program to Find the Range of Tables

int y,x;
clrscr();
cout<<"//A Program to Find the Range of Tables\n#include<iostream.h>\n";
cout<<"#include<conio.h>\nvoid main()\n{\nint y,x;\nclrscr();\n";
cout<<"cout<<\"Enter any number of your choice=> \";\ncin>>x;\n";
cout<<"cout<<\"Range of tables starting from \"<<x;\n";
cout<<"\t//Using for loop\n\tfor(y=1; y<=10; y++)\n\t{\n";
cout<<"\tcout<<(x)<<\" x \"<<y<<\" = \"<<(x)*y;\n";
cout<<"\tcout<<\"\\t\" <<(x+1)<<\" x \"<<y<<\" = \"<<(x+1)*y;\n";
cout<<"\tcout<<\"\\t\" <<(x+2)<<\" x \"<<y<<\" = \"<<(x+2)*y;\n";
cout<<"\tcout<<\"\\t\" <<(x+3)<<\" x \"<<y<<\" = \"<<(x+3)*y;\n";
cout<<"\tcout<<\"\\t\" <<(x+4)<<\" x \"<<y<<\" = \"<<(x+4)*y<<endl;\n";
cout<<"\t}\ngetch();\n}";
 getch();
 clrscr();

cout<<"\n\OUTPUT->";
cout<<"\nEnter any number of your choice=> ";
cin>>x;
cout<<"Range of tables starting from "<<x<<"\n\n";
	//Using for loop
	for(y=1; y<=10; y++)
	{
	cout<<(x)<<" x "<<y<<" = "<<(x)*y;
	cout<<"\t" <<(x+1)<<" x "<<y<<" = "<<(x+1)*y;
	cout<<"\t" <<(x+2)<<" x "<<y<<" = "<<(x+2)*y;
	cout<<"\t" <<(x+3)<<" x "<<y<<" = "<<(x+3)*y;
	cout<<"\t" <<(x+4)<<" x "<<y<<" = "<<(x+4)*y<<endl;
	}

break;

case 15://A Program to Find the Even and Odd Range

int t,s,e;
clrscr();
cout<<"//Program to Find the Even and Odd Range\n#include<iostream.h>\n";
cout<<"#include<conio.h>\nvoid main()\n{\nint t,s,e;\nclrscr();\n";
cout<<"cout<<\"Start=> \";\ncin>>s;\n";
cout<<"cout<<\"End=> \";\ncin>>e;\n";
cout<<"\t//Using while loop\n\tt=s;\n\twhile(t<=e)\n\t{\n\t";
cout<<"cout<<t<<\"\\t\";\n\tt++;\n\t}\ngetch();\n}";
getch();
clrscr();

cout<<"\nOUTPUT->\n";
cout<<"Start=> ";
cin>>s;
cout<<"End=> ";
cin>>e;
	//Using while loop
	t=s;
	while(t<=e)
	{
	cout<<t<<"\t";
	t++;
	}

break;

case 16://A Program Which Will Execute Until User Presses n

char c;
clrscr();
cout<<"//A Program Which Will Execute Until User Presses n\n";
cout<<"#include<iostream.h>\n#include<conio.h>\nvoid main()\n{\nchar c;\n";
cout<<"clrscr();\n\t//Using do while loop\n\tdo\n\t{\n\t";
cout<<"cout<<\"Enter any character->\";\n\tcin>>c\n\t}while(c!='n');\n";
cout<<"getch();\n}";
getch();
clrscr();

cout<<"\nOUTPUT->\n";
	 //Using do while loop
	 do
	 {
	 cout<<"Enter any character-> ";
	 cin>>c;
	 }while(c!='n');

break;

case 17:/*A Program to Draw a Given Structure
	 *
	***
       *****
      *******
      */

int i,j,k,l;
clrscr();
cout<<"/*Program to Draw a Given Structure";
cout<<"\n    *";
cout<<"\n   ***";
cout<<"\n  *****";
cout<<"\n *******";
cout<<"\n*/\n#include<iostream.h>\n#include<conio.h>\nvoid main()\n{\n";
cout<<"int i,j,k,l;\nclrscr();\n\t//Nesting of Loops\n";
cout<<"\tfor(i=0; i<=5; i++)\n\t{\n\t\tfor(j=5; j>=i; j--)\n\t\t{\n";
cout<<"\t\tcout<<\"\";\n\t\t}\n\t\tfor(k=0; k<=i*2; k++)\n\t\t{\n";
cout<<"\t\tcout<<\"*\";\n\t\t}\n\t\tfor(l=5; l>=i; l--)\n\t\t{\n";
cout<<"\t\tcout<<\"\";\n\t\t}\n\tcout<<\"\\n\";\n\t}\ngetch();\n}";
getch();
clrscr();

cout<<"\nOUTPUT->\n";
	//Nesting of Loops
	for(i=0; i<=5; i++)
	{
		for(j=5; j>=i; j--)
		{
		cout<<" ";
		}
		for(k=0; k<=i*2; k++)
		{
		cout<<"*";
		}
		for(l=5; l>=i; l--)
		{
		cout<<" ";
		}
	cout<<"\n" ;
	}

break;

case 18://A Program to Find Out Prime Number

int m,n, count=0;
clrscr();
cout<<"//A Program to Find Out Prime Number\n#include<iostream.h>\n";
cout<<"#include<conio.h>\nvoid main()\n{\nint m,n, count=0;\nclrscr();\n";
cout<<"cout<<\"A PROGRAM TO CHECK PRIME NUMBER\";\n";
cout<<"cout<<\"\\n\\nEnter any number of your choice=> \";\ncin>>n;\n";
cout<<"\tfor(m=1; m<=n; m++)\n\t{\n\t\tif(n%m==0)\n\t\t{\n\t\tcount++;\n";
cout<<"\t\t}\n\t}\n\tif(count==2)\n\t{\n\t";
cout<<"cout<<n<<\" is a prime number.\";\n\t}\n\telse\n\t{\n\t";
cout<<"cout<<n<<\" is not a prime number.\";\n\t}\ngetch();\n}";
getch();
clrscr();

cout<<"\nOUTPUT->\n";
cout<<"A PROGRAM TO CHECK PRIME NUMBER";
cout<<"\n\nEnter any number of your choice=> ";
cin>>n;
	for(m=1; m<=n; m++)
	{
		if(n%m==0)
		{
		count++;
		}
	}
	if(count==2)
	{
	cout<<n<<" is a prime number.";
	}
	else
	{
	cout<<n<<" is not a prime number.";
	}

break;

case 19://A Program to Check Palandrome Number

int r=0, dig;
long int nn;
clrscr();
cout<<"//A Program to Check Palandrome Number\n#include<iostream.h>\n";
cout<<"#include<conio.h>\nvoid main()\n{\nint r=0, dig;\nlong int nn;\n";
cout<<"clrscr();\ncout<<\"Enter a number=> \";\ncin>>nn;\nint n1=n;\n";
cout<<"\twhile(nn!=0)\n\t{\n\tdig=n%10;\n\tr=(r*10)+dig;\n\tnn=nn/10;\n\t}\n";
cout<<"\t\tif(r==n1)\n\t\t{\n\t\tcout<<n1<<\" is a palandrome number.\";\n";
cout<<"\t\t}\n\t\telse\n\t\t{\n\t\tcout<<n1<<\" is not a palandrome number.\";";
cout<<"\n\t\t}\ngetch();\n}";
getch();
clrscr();

cout<<"\nOUTPUT->\n";
cout<<"Enter a number=> ";
cin>>nn;
int n1=nn;
	while(nn!=0)
	{
	dig=nn%10;
	r=(r*10)+dig;
	n1=nn/10;
	}
		if(r==n1)
		{
		cout<<n1<<" is a palandrome number.";
		}
		else
		{
		cout<<n1<<" is not a palandrome number.";
		}

break;

case 20://A Program to Find Area of Circle Using Macro

int R;
clrscr();
cout<<"//A Program to Find Area of Circle Using Macro\n#include<iostream.h>";
cout<<"\n#include<conio.h>\n#define PI 3.14\nvoid main()\n{\nint R;\n";
cout<<"clrscr();\ncout<<\"A PROGRAM TO FIND THE AREA OF A CIRCLE\\n\";\n";
cout<<"cout<<\"Enter the value for R=> \";\ncin>>R;\n";
cout<<"cout<<\"Area of circle is=> \";\ncout<<PI*R*R;\ngetch();\n}";
getch();
clrscr();

cout<<"\nOUTPUT->\n";
cout<<"A PROGRAM TO FIND THE AREA OF A CIRCLE\n";
cout<<"Enter the value for R=> ";
cin>>R;
cout<<"Area of circle is=> ";
cout<<PI*R*R;

break;

case 21://A Pro to Find Whether the Input Value is Alphabet, Digit or Symbol

char C;
clrscr();
cout<<"//A Pro to Find Whether the Input Value is Alphabet, Digit or Symbol\n";
cout<<"#include<iostream.h>\n#include<conio.h>\n#include<ctype.h>\n";
cout<<"void main()\n{\nchar C;\nclrscr();\ncout<<\"Enter the value for C=>\";";
cout<<"\ncin>>C;\n\tif(isalpha(C))\n\t{\n\tcout<<\"Alphabet\";\n\t}\n";
cout<<"\telse if(isdigit(C))\n\t{\n\tcout<<\"Digit\";\n\t}\n\telse\n\t{\n";
cout<<"\tcout<<\"Symbol\";\n\t}\ngetch();\n}";
getch();
clrscr();

cout<<"\nOUTPUT->\n";
cout<<"Enter the value for C=>";
cin>>c;
	if(isalpha(c))
	{
	cout<<"Alphabet";
	}
	else if(isdigit(c))
	{
	cout<<"Digit";
	}
	else
	{
	cout<<"Symbol";
	}

break;

case 22://A Program Using ctype.h Header File

char ch;
clrscr();
cout<<"//A Program Using ctype.h Header File\n#include<iostream.h>\n";
cout<<"#include<conio.h>\n#include<ctype.h>\nvoid main()\n{\nchar ch;\n";
cout<<"clrscr();\ncout<<\"Enter any alphabet=> \";\ncin>>ch;\n\t";
cout<<"if(islower(ch))\n\t{\n\tcout<<\"\\nIt is in lower case.\";\n\t";
cout<<"cout<<\"\\nAfter using toupper()=> \"<<(char)toupper(ch);\n\t}\n\t";
cout<<"else\n\t{\n\tcout<<\"\\nIt is in upper case.\";\n\t";
cout<<"cout<<\"\\nAfter using tolower()=> \"<<(char)tolower(ch);\n\t}\n";
cout<<"getch();\n}";
getch();
clrscr();

cout<<"\nOUTPUT->\n";
cout<<"Enter any alphabet=> ";
cin>>ch;
	if(islower(ch))
	{
	cout<<"\nIt is in lower case.";
	cout<<"\nAfter using toupper()=> "<<(char)toupper(ch);
	}
	else
	{
	cout<<"\nIt is in upper case.";
	cout<<"\nAfter using tolower()=> "<<(char)tolower(ch);
	}

break;

case 23://A Program Using string.h Header File

char a[]={"computer science"};
char b[]={"ASSIGNMENT"};
char s1[25], s2[25];

clrscr();
cout<<"//A Program Using string.h Header File\n#include<iostream.h>\n";
cout<<"#include<conio.h>\n#include<string.h\n#include<stdio.h>\nvoid main()";
cout<<"\n{\nchar a[]={\"computer science\"};\nchar b[]={\"ASSIGNMENT\"};\n";
cout<<"char s1[25], s2[25];\nclrscr();\n//Changes Lower case to Upper case\n";
cout<<"cout<<\"Using strupr()=> \"<<strupr(a);\n";
cout<<"//Changes Upper case to Lower case\n";
cout<<"cout<<\"\\n\\nUsing syrlwr()=> \"<<strlwr(b);\n";
cout<<"//Used to Copy the String\ncout<<\"\\n\\nEnter a word=> \";\n";
cout<<"gets(s1);\nstrcpy(s1,s2);\ncout<<\"Using strcpy()=> \"<<s2;\n";
cout<<"//Used to Concatenate Two Strings\ncout<<\"\\n\\nEnter first word=> \";";
cout<<"\ngets(s1);\ncout<<\"Enter second word=> \";\ngets(s2);";
cout<<"cout<<\"Using strcat()=> \"<<strcat(s1,s2);\n";
cout<<"//Used to Compare Two String Variables\n";
cout<<"cout<<\"\\n\\nEnter first string=> \";\ngets(s1);\n";
cout<<"cout<<\"Enter second string=> \";\ngets(s2);\n";
cout<<"cout<<\"Using strcmp()=> \"<<strcmp(s1,s2);\ngetch();\n}";
getch();
clrscr();

cout<<"\nOUTPUT->\n";
//Changes Lower case to Upper case
cout<<"Using strupr()=> "<<strupr(a);

//Changes Upper case to Lower case
cout<<"\n\nUsing syrlwr()=> "<<strlwr(b);

//Used to Copy the String
cout<<"\n\nEnter a word=> ";
gets(s1);
strcpy(s1,s2);
cout<<"Using strcpy()=> "<<s2;

//Used to Concatenate Two Strings
cout<<"\n\nEnter first word=> ";
gets(s1);
cout<<"Enter second word=> ";
gets(s2);
cout<<"Using strcat()=> "<<strcat(s1,s2);

//Used to Compare Two String Variables
cout<<"\n\nEnter first string=> ";
gets(s1);
cout<<"Enter second string=> ";
gets(s2);
cout<<"Using strcmp()=> "<<strcmp(s1,s2);

break;

case 24://A Program Using math.h Header File

int q,w;
clrscr();
cout<<"//A Program Using math.h Header File\n#include<iostream.h>\n";
cout<<"#include<conio.h>\n#include<math.h>\nvoid main()\n{\nint q,w;\n";
cout<<"clrscr();\n//Used to Find the Power\ncout<<\"Enter value for q \";\n";
cout<<"cin>>q;\ncout<<\"Enter value for w \";\ncin>>w;\n";
cout<<"cout<<\"Using pow()=> \"<<pow(q,w);\n//Used to Find the Square Root\n";
cout<<"cout<<\"\\n\\nEnter number to find its square root=> \";";
cout<<"cin>>q;\ncout<<\"The square root of this number is=> \"<<sqrt(q);\n";
cout<<"//Used to Find the Trigonometric Value\ncout<<\"\\n\\nEnter angle=> \";";
cout<<"\ncin>>q;\ncout<<\"The sin of \"<<q<<\" is=> \"<<sin(q);\n";
cout<<"cout<<\"\\n\\nEnter angle=> \";\ncin>>w;\n";
cout<<"cout<<\"The cos of \"<<w<<\" is=> \"<<cos(w);\ngetch();\n}";
getch();
clrscr();

cout<<"\nOUTPUT->\n";
//Used to Find the Power
cout<<"Enter value for q ";
cin>>q;
cout<<"Enter value for w ";
cin>>w;
cout<<"Using pow()=> "<<pow(q,j);

//Used to Find the Square Root
cout<<"\n\nEnter number to find its square root=> ";
cin>>q;
cout<<"The square root of this number is=> "<<sqrt(q);

//Used to Find the Trigonometric Value
cout<<"\n\nEnter angle=> ";
cin>>q;
cout<<"The sin of "<<q<<" is=> "<<sin(q);

cout<<"\n\nEnter angle=> ";
cin>>w;
cout<<"The cos of "<<w<<" is=> "<<cos(w);

break;

case 25://A Program to Reverse a String Without Using strrev()

char z[30];
int L,K;
clrscr();
cout<<"//A Program to Reverse a String Without Using strrev()\n";
cout<<"#include<iostream.h>\n#include<conio.h>\n#include<string.h>\n";
cout<<"#include<ctype.h>\n#include<stdio.h>\nvoid main()\n{\nchar z[30];\n";
cout<<"int L,K;\nclrscr();\ncout<<\"Enter a word=> \";\ngets(z);\n";
cout<<"L=strlen(z);\n\tfor(K=L-1; K>=0; K--)\n\t{\n\t";
cout<<"cout<<(char)toupper((char)z[K]);\n\t}\ngetch();\n}";
getch();
clrscr();

cout<<"\nOUTPUT->\n";
cout<<"Enter a word=> ";
gets(z);
L=strlen(z);
	for(K=L-1; K>=0; K--)
	{
	cout<<(char)toupper((char)z[K]);
	}

break;

case 26://A Program For Linear Search

int array[10];
int search,o;
clrscr();
cout<<"//A Program For Linear Search\n#include<iostream.h>\n#include<conio.h>";
cout<<"\nvoid main()\n{\nint array[10];\nint search,o;\nclrscr();\n";
cout<<"\tfor(o=0;o<10; o++)\n\t{\n\tcout<<\"Value \"<<i<<\"=>\";\n\t";
cout<<"cin>>array[o];\n\t}\n";
cout<<"cout<<\"Enter the value which you want to search=> \";\n";
cout<<"cin>>search;\n\tfor(o=0;o<10; o++)\n\t{\n";
cout<<"\t\tif(array[o]==search)\n\t\t{\n\t\tcout<<\"Element found\";\n\t\t";
cout<<"break;\n\t\t}\n\t}\ngetch();\n}";
getch();
clrscr();

cout<<"\nOUTPUT->\n";
	for(o=0;o<10; o++)
	{
	cout<<"Value "<<o<<"=>";
	cin>>array[o];
	}
cout<<"Enter the value which you want to search=> ";
cin>>search;
	for(o=0;o<10; o++)
	{
		if(array[o]==search)
		{
		cout<<"Element found";
		break;
		}
	}

break;

case 27://A Program Using Randomize

int I;
clrscr();
cout<<"//A Program Using Randomize\n#include<iostream.h>\n#include<conio.h>";
cout<<"\n#include<stdlib.h>\nvoid main()\n{\nint I;\nclrscr();\n\t";
cout<<"randomize();\n\tfor(I=0;I<7;I++)\n\t{\n\t\tswitch(I)\n\t\t{\n\t\t";
cout<<"case 0:\n\t\tcout<<\"round 1=> \";\n\t\t";
cout<<"cout<<random(6)<<\"\\n\";\n\t\tbreak;\n\t\tcase 1:\n\t\t";
cout<<"cout<<\"round 2=> \";\n\t\tcout<<random(6)<<\"\\n\";\n\t\tbreak;\n\t\t";
cout<<"case 2:\n\t\tcout<<\"round 3=> \";\n\t\tcout<<random(6)<<\"\\n\";\n";
cout<<"\t\tbreak;\n\t\tcase 3:\n\t\tcout<<\"round 4=> \";\n\t\t";
cout<<"cout<<random(6)<<\"\\n\";\n\t\tbreak;\n\t\tcase 4:\n\t\t";
cout<<"cout<<\"round 5=> \";\n\t\tcout<<random(6)<<\"\\n\";\n\t\tbreak;\n\t\t";
cout<<"case 5:\n\t\tcout<<\"round 6=> \";\n\t\tcout<<random(6)<<\"\\n\";\n";
cout<<"\t\tbreak;\n\t\tcase 6:\n\t\tcout<<\"round 7=> \";\n\t\t";
cout<<"cout<<random(6)<<\"\\n\";\n\t\tbreak;\n\t\t}\n\t}\ngetch();\n}";
getch();
clrscr();

cout<<"\nOUTPUT->\n";
	randomize();
	for(I=0;I<7;I++)
	{
		switch(I)
		{
		case 0:
		cout<<"round 1=> ";
		cout<<random(6)<<"\n";
		break;
		case 1:
		cout<<"round 2=> ";
		cout<<random(6)<<"\n";
		break;
		case 2:
		cout<<"round 3=> ";
		cout<<random(6)<<"\n";
		break;
		case 3:
		cout<<"round 4=> ";
		cout<<random(6)<<"\n";
		break;
		case 4:
		cout<<"round 5=> ";
		cout<<random(6)<<"\n";
		break;
		case 5:
		cout<<"round 6=> ";
		cout<<random(6)<<"\n";
		break;
		case 6:
		cout<<"round 7=> ";
		cout<<random(6)<<"\n";
		break;
		}
	}

break;

case 28://Swapping First Letter with Second Letter

int temp1,temp2,f,d;
char name[]={"abcdef"};
clrscr();
cout<<"//Swapping First Letter with Second Letter\n#include<iostream.h>\n";
cout<<"#include<conio.h>\n#include<stdio.h>\n#include<string.h>\nvoid main()";
cout<<"\n{\nint temp1,temp2,f,d;\nchar name[]={\"abcdef\"};\nclrscr();\n";
cout<<"\tcout<<\"\\nEnter a word=> \";\n\tfor(f=0; f<6; f++)\n\t{\n\t";
cout<<"cin>>name[f];\n\t}\n\t\tfor(f=0;f<6;f++)\n\t\t{\n\t\t\tif(f%2==0)\n";
cout<<"\t\t\t{\n\t\t\ttemp1=name[f];\n\t\t\t}\n\t\t\telse\n\t\t\t{\n\t\t\t";
cout<<"temp2=name[f];\n\t\t\tname[f]=temp1;\n\t\t\tname[f-1]=temp2;\n\t\t\t}";
cout<<"\n\t\t}\ncout<<\"After Swapping=> \";\nfor(f=0;f<6;f++)\n{\n";
cout<<"cout<<name[f];\n}\ngetch();\n}";
getch();
clrscr();

cout<<"\nOUTPUT->\n";
	cout<<"Enter a word=> ";
	for(f=0; f<6; f++)
	{
	cin>>name[f];
	}
		for(f=0;f<6;f++)
		{
			if(f%2==0)
			{
			temp1=name[f];
			}
			else
			{
			temp2=name[f];
			name[f]=temp1;
			name[f-1]=temp2;
			}
		}
cout<<"After Swapping=> ";
for(f=0;f<6;f++)
{
cout<<name[f];
}

break;

case 29://Matrix Fixed Static Initialisation

int v,g;
int X[][3]={{1,2,3},
	   {4,5,6},
	   {7,8,9}
	   };
int Y[][3]={{11,22,33},
	    {44,55,66},
	    {77,88,99}
	    };
clrscr();
cout<<"//Matrix Fixed Static Initialisation\n#include<iostream.h>\n";
cout<<"#include<conio.h>\nvoid main()\n{\nint v,g;\nint X[][3]={{1,2,3},\n";
cout<<"\t{4,5,6},\n\t{7,8,9}\n\t;};\nint Y[][3]={{11,22,33},\n\t";
cout<<"{44,55,66},\n\t{77,88,99}\n\t};\nclrscr();\n\t//First Matrix\n\t";
cout<<"cout<<\"-First Matrix-\\n\";\n\tfor(v=0;v<3;v++)\n\t{\n\t\t";
cout<<"for(g=0;g<3;g++)\n\t\t{\n\t\tcout<<X[v][g]<<\" \";\n\t\t}\n\t";
cout<<"cout<<\"\\n\";\n\t}\n\t//Second Matrix\n\t";
cout<<"cout<<\"\\n-Second Matrix-\\n\";\n\tfor(v=0;v<3;v++)\n\t{\n\t\t";
cout<<"for(g=0;g<3;g++)\n\t\t{\n\t\tcout<<Y[v][g]<<\" \";\n\t\t}\n\t";
cout<<"cout<<\"\\n\";\n\t}\n\t//Resultant Matrix\n\t";
cout<<"cout<<\"\\n-Resultant Matrix-\\n\";\n\tfor(v=0;v<3;v++)\n\t{\n\t\t";
cout<<"for(g=0;g<3;g++)\n\t\t{\n\t\tcout<<X[i][g]+Y[v][g]<<\" \";\n\t\t}\n";
cout<<"\tcout<<\"\\n\";\n\t}\ngetch();\n}";
getch();
clrscr();

cout<<"\nOUTPUT->\n";
	//First Matrix
	cout<<"-First Matrix-\n";
	for(v=0;v<3;v++)
	{
		for(g=0;g<3;g++)
		{
		cout<<X[v][g]<<" ";
		}
	cout<<"\n";
	}

	//Second Matrix
	cout<<"\n-Second Matrix-\n";
	for(v=0;v<3;v++)
	{
		for(g=0;g<3;g++)
		{
		cout<<Y[v][g]<<" ";
		}
	cout<<"\n";
	}

	//Resultant Matrix
	cout<<"\n-Resultant Matrix-\n";
	for(v=0;v<3;v++)
	{
		for(g=0;g<3;g++)
		{
		cout<<X[v][g]+Y[v][g]<<" ";
		}
	cout<<"\n";
	}

break;

case 30://Matrix Adding Rows

int u,p;
int A[][3]={{1,2,3},
	    {4,5,6},
	    {7,8,9}
	   };
	   int sum=0;
clrscr();
cout<<"//Matrix Adding Rows\n#include<iostream.h>\n#include<conio.h>\n";
cout<<"void main()\n{\nint u,j;\nint A[][3]={{1,2,3},\n\t{4,5,6},\n\t{7,8,9}";
cout<<"\n\t};\n\tint sum=0;\nclrscr();\n\tcout<<\"-Matrix-\\n\";\n\t";
cout<<"cout<<\"\\t-Horizontal Addition-\\n\";\n\tfor(u=0;u<3;u++)\n\t{\n\t\t";
cout<<"for(p=0;p<3;p++)\n\t\t{\n\t\tcout<<\"\\t\"<<x[u][p];\n\t\t";
cout<<"if(u==0||u==1||u==2)\n\t\t{\n\t\tsum+=x[u][p];\n\t\t}\n\t\t}\n\t";
cout<<"cout<<\"\\tEquals=>\"<<sum<<\"\\n\";\n\tsum=0;\n\t}\ngetch();\n}";
getch();
clrscr();

cout<<"\nOUTPUT->\n";
	cout<<"-Matrix-\n";
	cout<<"\t-Horizontal Addition-\n";
	for(u=0;u<3;u++)
	{
		for(p=0;p<3;p++)
		{
		cout<<"\t"<<A[u][p];
		if(u==0||u==1||u==2)
		{
		sum+=A[u][p];
		}
		}
	cout<<"\tEquals=>"<<sum<<"\n";
	sum=0;
	}

break;

case 31:
//Progran to print structure with help of ascii code(nesting of loops)
cout<<"//A program to print structure with help of ascii code\n#include<iostream.h>\n#include<conio.h>\n";
cout<<"nvoid main()\n{\n\nclrscr();\nint i,j,k;\n\tfor(i=0; i<4; i++)\n\t{\n\t\tfor(j=0; j<=i; j++)\n\t\t";
cout<<"{\n\t\tcout<<(char)(49+j);\n\t\t}\n\t}\ngetch();\n}";
getch();
clrscr();
cout<<"OUTPUT->\n";
int a1,a2,a3;
	for(a1=0; a1<4; a1++)
	{
		for(a2=0; a2<=a1; a2++)
		{
			cout<<(char)(49+a2);
		}
	cout<<"\n";
	}

break;

case 32:
//Program to print structure with help of ascii code(nesting of loops)
cout<<"//A program of ascii code\n#include<iostream.h>\n#include<conio.h>\nvoid main()\n{";
cout<<"\nclrscr();\nint i,j;\n\tfor(i=0; i<=4; i++)\n\t{\n\t\tfor(j=0; j<=i; j++)\n\t\t{";
cout<<"\n\t\tcout<<(char)(97+j);\n\t\t}\n\t}\ngetch();\n}";
getch();
clrscr();
cout<<"OUTPUT->\n";
int b1,b2;
	for(b1=0; b1<=4; b1++)
	{
		for(b2=0; b2<=b1; b2++)
		{
		cout<<(char)(97+b2);
		}
       cout<<"\n";
       }

break;

case 33:
//Function integer squaring program
cout<<"//Function integer squaring program\n#include<iostream.h>\n#include<conio.h>";
cout<<"\nvoid msg();\nint sq(int x);\nvoid main()\n{\nclrscr();\nint a;";
cout<<"\ncout<<\"Hi this is number squaring program.\";\ncout<<\"Plzz enter number for squaring=\";";
cout<<"\ncin>>a;\ncout<<sq(a);\nmsg();\ngetch();\n}\nint sq(int x)\n{\ncout<<\"The square of the no. is =\";";
cout<<"\nreturn(x*x);\n}\nvoid msg()\n{\ncout<<\"Thanks\";\n}";
getch();
clrscr();
int ad;
cout<<"OUTPUT->\n";
cout<<"Hi this is number squaring program.";
cout<<"\nPlzz enter number for squaring=";
cin>>ad;
sqr(ad);
cout<<"\n";
msg();
break;

case 34:
//Program of implementation of function
cout<<"//Program of implementation of function\n#include<iostream.h>";
cout<<"\n#include<conio.h>\nvoid msg();\nvoid main()\n{\nclrscr();";
cout<<"\ncout<<\"Hii this is function based program\";\n";
cout<<"for(int i=0; i<5; i++)\n{\nmsg();\n}\ngetch();\n}\nvoid msg()";
cout<<"\n{\ncout<<\"Hii this is function of a function program\";\n}";
getch();
clrscr();
cout<<"OUTPUT->\n";
cout<<"Hii this is function based program.\n";
int a4;
	for(a4=0; a4<5; a4++)
	{
	msg1();
	}

break;

case 35:
//Random Function Program
cout<<"//Random Function Program\n#include<iostream.h>\n#include<conio.h>\n#include<stdlib.h>";
cout<<"\nint rm(int x);\nvoid msg();\nvoid main()\n{\nclrscr();";
cout<<"\ncout<<\"Hii this is a function program\";\nint a;\ncout<<\"Please enter a number =\";";
cout<<"\ncin>>a;\ncout<<rm(a);\nmsg();\ngetch();\n}\nint rm(int x)\n";
cout<<"{  randomize();\nint k=random(x+1);\nreturn(k);\n}\nvoid msg()\n{\ncout<<\"Thanks\";}";
getch();
clrscr();
cout<<"Output->\n";
cout<<"Hii this is a function program";
int a6;
cout<<"\nPlease enter a number =";
cin>>a6;
cout<<rm(a6)<<"\n";
msg();
break;

case 36:
//Adding values with help of Function
cout<<"//Adding two values with help of function\n#include<iostream.h>\n#include<conio.h>\nint n(int x,int y);\nvoid main()\n";
cout<<"{\nclrscr();\nint a,b;\ncout<<\"Enter a=;\"\ncin>>a;\ncout<<\"Enter b=\";\ncin>>b;";
cout<<"\ncout<<n(a,b);\ngetch();\n}\nint n(int x,int y)\n{\nint z;\nz=x+y;\ncout<<\"The addition of nos.is=\"\nreturn(z);\n}";
getch();
clrscr();
cout<<"OUTPUT->\n";
int a7,b3;
cout<<"Enter a=";
cin>>a7;
cout<<"Enter b=";
cin>>b3;
not(a7,b3);
cout<<"\n";
msg();

break;

case 37:
//Adding and squaring the added value with help of function
cout<<"//Adding and Squaring Values\n#include<iostream.h>  #include<conio.h>  #include<math.h>\nint no(); int no1(); int sum(int x,int y);";
cout<<"  int sqr(int a);\nvoid main()\n{ clrscr(); int a,b,s;\na=no(); b=no1();";
cout<<"s=sum(a,b);\ncout<<s;\ncout<<sqr(s);  getch();\n}\nint no()\n{\tint a;\n\tcout<<\"Enter a=\";\n\tcin>>a;\n\treturn a;";
cout<<"\t}\nint no1()\n{\tint b;\n\tcout<<\"Enter b=\";\n\tcin>>b;\n\treturn b;\t}\nint sum(int x,int y)";
cout<<"\n{\tcout<<\"The addition of the numbers is =\";\n\tint k; k=x+y;\n\treturn(k);\t}";
cout<<"\nint sqr(int a)\n{\tcout<<\"The square of the sum is =\";\n\treturn(a*a);\t}";
getch();
clrscr();
cout<<"OUTPUT->\n";
int a8,b4;
a8=no2();
b4=no3();
cout<<summ(a8,b4)<<"\n";
sqr(summ(a8,b4));
cout<<"\n";
msg();

break;

case 38:
//Use of Global Variable
cout<<"//Use of Global variable\n#include<iostream.h>\n#include<conio.h>\nint global=10;";
cout<<"\nvoid k(int global)\n{\ncout<<\"Value of global (outside) is =\"<<::global;";
cout<<"\ncout<<\"Value of function global is =\"<<global;\n}\nvoid main()\n{\nclrscr();";
cout<<"\nint val;\ncout<<\"Enter the value for k =\";\ncin>>val;\nk(val);\ngetch();\n}";
getch();
clrscr();
int val;
cout<<"OUTPUT->\n";
cout<<"Enter the value for k =";
cin>>val;
ktt(val);
cout<<"\n";
msg();

break;

case 39:
//Program using Default Argument
cout<<"//Program using Default argument\n#include<iostream.h>\n#include<conio.h>\n\tvoid k(int x)\n\t{";
cout<<"\n\tcout<<\"Square of \"<<x<<\" is = \"<<x*x;\n\t}\nvoid main()\n{\nclrscr();\nint x;";
cout<<"\ncout<<\"Enter a value for x =\"";
cout<<"\ncin>>x;\ncout<<\"On giving values=\"; k(x);\ncout<<\"By Default x is 5 =\"; k(5);\ngetch();\n}";
getch();
clrscr();
int xo;
cout<<"OUTPUT->\n";
cout<<"Enter a value for x =";
cin>>xo;
cout<<"\nOn giving values= "; ko(xo);
cout<<"\nBy Default x is 5 =";ko(5);
cout<<"\n";
msg();

break;

case 40:
//Program of all kind of Functions
cout<<"//A program to show all type of functions\n#include<iostream.h>\n#include<conio.h>\n#include<stdlib.h>\nvoid f1();";
cout<<"  int f2();  void f3(int x); int f4(int y);\nvoid main()\n{ clrscr();\nf1();\t\tgetch();";
cout<<"\ncout<<f2();\tgetch();\nf3(3);\t\tgetch();\ncout<<f4(4);";
cout<<"\tgetch();\n}\n\tvoid f1()\n\t{\tcout<<\"Hii i am simple function (function 1)\";\n\t}\n\tint f2()\n\t{\t";
cout<<"cout<<\"Hii i m a function 2\";\n\t}\n\tvoid f3(int x)\n\t{\tcout<<\"Hii i am a function with argument\"\;";
cout<<"\n\t}\n\tint f4(int y)\n\t{\tcout<<\"Hi i am function with argument and with return type\";\n\t}";
getch();
clrscr();
cout<<"OUTPUT->\n";
f1();
cout<<"\n";
getch();
cout<<f2()<<"\n";
getch();
f3(3);
getch();
cout<<"\n"<<f4(4);
cout<<"\n";
msg();

break;

case 41:
//Program to use Recursive Function
cout<<"//Program to use recursive function\n#include<iostream.h>\n#include<conio.h>\n#include<stdlib.h>";
cout<<"\nvoid fun(int x)\n{\tcout<<\"Repeat of the sentence.\";\n\tx--;\n\tif(x==0)";
cout<<"\n\t{\n\tgetch();\n\t}\n\telse\n\t{\n\tfun(x);\n\t}\n}\nvoid main()\n{\nclrscr();";
cout<<"\nint a;\ncout<<\"Enter a number =\";\ncin>>a;\nfun(a);\ngetch();\n}";
getch();
clrscr();
cout<<"OUTPUT->\n";
int abc;
cout<<"Enter a number =";
cin>>abc;
fun(abc);
cout<<"\n";
msg();


break;

case 42:
//Program to Greet user
cout<<"//A program to greet the user #include<iostream.h>\n#include<conio.h>\n#include<stdio.h>\n#include<string.h>\nvoid k();\n";
cout<<"void main()\n{\nclrscr();\nk();\ngetch();\n}\nvoid k()\n{\nchar name[25];\ncout<<\"Enter your name = \";";
cout<<"\ngets(name);\n\tif(strlen(name)==0)\n\t{\n\tcout<<\"Good morning name(default) Have a nice day..!!\";";
cout<<"\n\t}\n\telse\n\t{\n\tcout<<\"Good morning \"<<name;<<\"Have a nice day...!!!!\";\n\t}";
getch();
clrscr();
cout<<"OUTPUT->\n";
kml();
cout<<"\n";
msg();

break;

case 43:
//Program to find Factorial using Recursive Function
cout<<"//A program to find factorial using recursive function\n#include<iostream.h>\n#include<conio.h>";
cout<<"\nint rec(int fact,int val=1)\n{\n\tif(fact==1)\n\t{\n\treturn(val);\n\t}\n\telse\n\t{\n\tval=fact*val;";
cout<<"\n\tfact--;\n\tfact=rec(fact,val);\n\t}\n}\nvoid main()\n{\nclrscr();\nint a\ncout<<\"Enter a number =\";";
cout<<"\ncin>>a;\ncout<<\"The Factorial of the given number is =\";\ncout<<rec(a);\ngetch();\n}";
getch();
clrscr();
cout<<"OUTPUT->\n";
int ant;
cout<<"Enter a number =";
cin>>ant;
cout<<"The Factorial of the given number is =";
cout<<rec(ant);
cout<<"\n";
msg();

break;

case 44:
//Program to make use of Typedef
cout<<"//A Program to make use of typedef\n#include<iostream.h>\n#include<conio.h>\n\nvoid main()\n{\ntypedef int INTEGER;\ntypedef char CHARACTER;";
cout<<"\nINTEGER x,y;\nCHARACTER c='A';\n//typedef use shows its result\n\nclrscr();\ncout<<\"INTEGER TYPEDEF\";";
cout<<"\ncout<<\"Enter x =\";\ncin>>x;\n\ncout<<\"Enter y =\";\ncin>>y;\ncout<<\"The total of both is = \"<<x+y;";
cout<<"\ncout<<\"CHARACTER TYPEDEF\";\ncout<<\"The Character in c is =\"<<c;\ngetch();\n}";
getch();
clrscr();
cout<<"OUTPUT->\n";
typedef int INTEGER;
typedef char CHARACTER;
INTEGER xa,ya;
CHARACTER ca='A';
//typedef use shows its result
cout<<"INTEGER TYPEDEF";
cout<<"\nEnter x =";
cin>>xa;
cout<<"Enter y =";
cin>>ya;
cout<<"The total of both is = "<<xa+ya;
cout<<"\n\n\nCHARACTER TYPEDEF";
cout<<"\nThe Character in c is ="<<ca;
cout<<"\n";
msg();

break;

case 45:
//Default Greeting Program
cout<<"//Default Greeting Program\n#include<iostream.h>  #include<conio.h>   #include<string.h>   #include<stdio.h>char *NAME={\"YOUR NAME\"};";
cout<<"\n\tchar *setname()\n\t{ char *name;\n\tcout<<\"Please enter your name=\";  gets(name);\n\tNAME=name;";
cout<<"  return(name); }\n\tvoid greet(char name[])\n\t{ cout<<\"Hii\"<<NAME<<\" Welcome!!\"; }";
cout<<"\n\nvoid main()\n{\nclrscr();\nchar *name;  int opt;\ncout<<\"Main Menu Please enter your choice =\";\ncout<<\"1. For entering name. \t2. For getting greetings\";";
cout<<"\ncin>>opt;\n\tswitch(opt)\n\t{ case 1:\n\tname=setname();  greet(name);";
cout<<"\n\tbreak;\n\tcase 2:greet(name);\n\tbreak;\n\t}\ngetch();\n}";
getch();
clrscr();
cout<<"OUTPUT->\n";
char *names;
int option;
cout<<"Main Menu Please enter your choice =";
cout<<"\n1. For entering name. \t2. For getting greetings\n";
cin>>option;
	switch(option)
	{
	case 1:
	names=setname();
	greet(names);
	break;
	case 2:greet(names);
	break;
	}
break;

case 46:
//Use of Struct datatype
cout<<"//Use of struct data type\n#include<iostream.h>\n#include<conio.h>\nstruct name\n{\nint x;";
cout<<"\nfloat y;\nchar z;\n}obj;\n\nvoid main()\n{\nclrscr();\nobj.x=100;\nobj.y=10.3;\nobj.z='a';";
cout<<"\ncout<<\"x is =\"<<obj.x;\ncout<<\"y is =\"<<obj.y;\ncout<<\"z is =\"<<obj.z;\ngetch();\n}";
getch();
clrscr();
cout<<"OUTPUT->\n";
obj.xon=100;
obj.yon=10.3;
obj.zon='a';
cout<<"x is ="<<obj.xon;
cout<<"\ny is ="<<obj.yon;
cout<<"\nz is ="<<obj.zon;
cout<<"\n";
msg();

break;

case 47:
//Program of Employee's Bio
cout<<"//Employee's Boi\n#include<iostream.h>\n#include<conio.h>\n#include<stdio.h>\n\tstruct emp\n\t{\n\tchar name[20];\tint age;  float sal;";
cout<<"\n\t};\nvoid main()\n{ clrscr();  emp obj1,obj2;\nobj1.age=18;\tobj1.sal=50000;\nobj2.age=20;\tobj2.sal=20000;";
cout<<"\n\ncout<<\"Enter your name=\";\ngets(obj1.name);\nputs(obj1.name);\ncout<<\"Your age is =\"";
cout<<"<<obj1.age;\ncout<<\"Your salary is =\"<<obj1.sal;\n\ncout<<\"Enter your name=\":\ngets(obj2.name);\n";
cout<<"puts(obj2.name);\ncout<<\"Your age is =\"<<obj2.age;\ncout<<\"Your salary is =\"<<obj2.sal;\ngetch();\n}";

getch();
clrscr();
cout<<"OUTPUT->";
emp obj1,obj2;
obj1.age=18;	obj1.sal=50000;
obj2.age=20;	obj2.sal=20000;

cout<<"\nEnter your name=";
gets(obj1.nme);
puts(obj1.nme);
cout<<"\nYour age is ="<<obj1.age;
cout<<"\nYour salary is ="<<obj1.sal;

getch();
clrscr();
cout<<"\nEnter your name=";
gets(obj2.nme);
puts(obj2.nme);
cout<<"\nYour age is ="<<obj2.age;
cout<<"\nYour salary is ="<<obj2.sal;
cout<<"\n";
msg();


break;

case 48:
//Use of Struct datatype to show report of student
cout<<"//Report of Student\n#include<iostream.h>\t#include<conio.h>\t#include<stdio.h>\nstruct st\n{\nchar name[20];  int math,chem;  float total,avg; \n\t";
cout<<"void input()\n\t{ cout<<\"Enter your name =\"; gets(name);\n\tcout<<\"Enter your marks in chem =\";\n\tcin>>chem;";
cout<<"\n\tcout<<\"Enter your marks in maths =\";\n\tcin>>math;\n\t}\n\tvoid output()\n\t{ cout<<\"Your name is =\"; puts(name);";
cout<<"\n\tcout<<\"Your marks in chem =\"<<chem;\n\tcout<<\"Your marks in math is =\"<<math;\n\t}\n};\nvoid main()\n{ st obj[2];";
cout<<"  clrscr();\n\tfor(int i=0; i<2; i++)\n\t{ obj[i].input(); }\n\tfor(i=0; i<2; i++)\n\t{ obj[i].output(); }\ngetch();\n}";
getch();
clrscr();
cout<<"OUTPUT->\n";
st objt[2];
	for(int it=0; it<2; it++)
	{
	objt[it].inpu();
	}
	for(it=0; it<2; it++)
	{
	objt[it].outpu();
	}
cout<<"\n";
msg();
break;

case 49: //Call By Value
cout<<"//Program of Call by value\n#include<iostream.h>\n#include<conio.h>\n";
cout<<"void main()\n{\nclrscr();int a=10;\nint b=20;\ncout<<a<<\"\\t\"<<b;\nswap(a,b);";
cout<<"\ncout<<a<<\"\\t\"<<b;getch();\n}\n\nvoid swap(int x,int y)\n{\nint t;\nt=x;\ny=t;\ncout<<x<<\\t\<<y;\n}";
getch();
clrscr();
cout<<"OUTPUT->\nCALL BY VALUE\n\n";
int apple=10;
int ball=20;
cout<<"Before Swapping ="<<apple<<"\t"<<ball<<"\n";
swap(apple,ball);
cout<<"\nAfter Swaping ="<<apple<<"\t"<<ball;
break;

case 50: //Call by Reference
cout<<"//Program of Call by reference\n#include<iostream.h>\n#include<conio.h>\n";
cout<<"void main()\n{\nclrscr();\n\nint a=10;\nint b=20;\ncout<<a<<\"\\t\"<<b;\nswap(a,b);";
cout<<"\ncout<<a<<\"\\t\"<<b;getch();\n}\n\nvoid swap(int &x,int &y)\n{\nint t;\nt=x;\ny=t;\ncout<<x<<\\t\<<y;\n}";
getch();
clrscr();
cout<<"OUTPUT->\nCALL BY REFERENCE PROGRAM\n\n";
int apple2=10;
int ball2=20;
cout<<"Before Swapping ="<<apple2<<"\t"<<ball2<<"\n";
swap2(apple2,ball2);
cout<<"\nAfter Swapping ="<<apple2<<"\t"<<ball2;
break;
default:
cout<<"Invalid Value.";
break;
}
getch();
clrscr();
	char cha;
	cout<<"Do you want to remain in program .\nPress Y or y\nelse Press any key =";
	cin>>cha;
		while(cha=='y' || cha =='Y')
		{
		goto xxx;
		}
getch();
}
