// MapleMini.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main(signed int argc, char* argv[])
{
	rang::setControlMode(rang::control::Auto);
	SetConsoleTitleA("MapleSeed Command Line");

	auto dc = DownloadClient("http://api.tsumes.com/title/000500001010EC00");

	Decrypt((char*)argv[0]);
    return Decrypt::ret;
}

