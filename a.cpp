
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
int count=0,count1=0;
int countinam(int &count)
{
string temp,b;
ifstream fd("pirmas.csv");
getline(fd,temp);
istringstream line(temp);
while(getline(line,b,','))
{
  count++;
}
fd.close();
return count;
}
int countinam1(int &count1)
{
string temp;
ifstream fd("pirmas.csv");

while(getline(fd,temp,'\n'))
{
  count1++;
}
count1--;
fd.close();
return count1;
}
void talpiname(string m[])
{
  string temp;
  ifstream fd("pirmas.csv");
for(int i=1;i<=count;i++)
{
  if(i==count)
  {
    getline(fd,temp,'\n');
    m[i]=temp;
  }
  else
  {
getline(fd,temp,',');
m[i]=temp;
}
}
}

int main()
{
  string m[100];
countinam(count);
countinam1(count1);
talpiname(m);
cout << m[7];

}
