#include <iostream>
 using namespace std;
int choice();
long int toBinary(long int a);
long int toOctal(long int a);
long int toHex(long int a);

int main ()
{
 int convert=choice();

 switch (convert)
 {
  case 0:
  toBinary ();
  break;

  case 1:
  toOctal ();
  break;

  case 2:
  toHex ();
  break;
 }
  return 0;
}

long int choice ()
{
 int convert;
 cout<<"Enter Your Choice of Conversion";
 cout<<"\nConvert the decimal into the following:";
 cout<<"\n0-[B]inary";
 cout<<"\n1-[O]ctal";
 cout<<"\n2-[H]exadecial";
 cin>>convert;
 return convert;
}

long int toBinary (long int a)
{
 long int num;
 long int answer=0;

 cout<<"Please enter a decimal";
 cin>>num;

 while (num>0)
 {
  answer=a%2;
  a=a/2;
  cout <<answer<<" ";
  }
 return answer;
}

long int toOctal(long int a)
{
		long int num;
		long int answer=0;

		 cout<<"Please enter a decimal: ";
		 cin>>num;

			 while(num>0)
			 {
			 answer=a%8;
			 a=a/8;
			 cout<<answer<< " ";
			 }

 }
long int toHex (long int a)
{
	long int num;
	int answer[]=0;
	int ctr;

	 cout<<"Please enter a decimal";
	 cin>>num;


	  num=a%16;
	  ctr++;
	  answer[ctr]=num;


	  for (int ctr=a;ctr>0;ctr--)
	  {
	  cout<<answer[ctr];
	  }
	  return num;
 }

