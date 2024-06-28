#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <rapidjson/document.h>
#include <rapidjson/filereadstream.h>
#include <string>

#define _ver "0.1"

using namespace std;

int main()
{

    printf("Welcome to 'Text City'\n");
    printf("The version is %s \n", _ver);

    int Bankrupt = 1;

    FILE* fp = fopen("Building.json", "r");

    char readBuffer[65536];

    rapidjson::FileReadStream is(fp,readBuffer,sizeof(readBuffer));

    rapidjson::Document d;
    d.ParseStream(is);

    fclose(fp);

    cout << d["buildings"].GetString() << endl;
    
    /*while (Bankrupt) {


    }*/

    return 0;
}