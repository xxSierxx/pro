#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file("C:/Users/12345/Desktop/pro/Text.txt");
    char from;
    cout<<"Enter the replaceable: "<<endl;
    cin>>from;
    char to;
    cout<<"Enter replacement: "<<endl;
    cin>>to;
    char ch;
    size_t pos=0;
    if (file.is_open())
    {
        file.unsetf(ios_base::skipws);

        while( file.get(ch) ){
            if (ch==from)
            {
                file.rdbuf()->pubseekoff(pos, ios::beg, ios::out);
                file.rdbuf()->sputc(to);


            }
            pos++;

        }
    }
    return 0;
}
