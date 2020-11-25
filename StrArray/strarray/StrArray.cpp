#include<iostream>
#include <string.h>
//#include <stdio.h>
//#include <stdlib.h>
 #include <cstring>



using namespace std;

int main()
{
char str1[20] = "hello";
char str2[20] = " programmers";
strcat(str1,str2);
strcat(str1," Good bye programmers....");

cout <<"str1:" << str1 << endl;
cout <<strlen(str1) << endl;



/*


cout << "Content-type:text/html\r\n\r\n";
cout << "<html>\n";
cout << "<head>\n";
cout << "<title>Hello World - First CGI Program</title>\n";
cout << "</head>\n";
cout << "<body>\n";
cout << "<h2>Hello World! This is my first CGI program</h2>\n";
cout << "</body>\n";
cout << "</html>\n";

*/


return 0;
}


