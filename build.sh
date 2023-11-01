#!/bin/sh

c_f="$PWD/ClientFiles_C"
emulator_f="$PWD/EmulatorFiles"

cd $c_f
sudo mkdir -p /usr/local/boson/client
sudo gcc -c -fPIC Client_API.c -o /usr/local/boson/client/Client_API.o
sudo gcc -c -fPIC Client_Dispatcher.c -o /usr/local/boson/client/Client_Dispatcher.o
sudo gcc -c -fPIC Client_Packager.c -o /usr/local/boson/client/Client_Packager.o
sudo gcc -c -fPIC Serializer_BuiltIn.c -o /usr/local/boson/client/Serializer_BuiltIn.o
sudo gcc -c -fPIC Serializer_Struct.c -o /usr/local/boson/client/Serializer_Struct.o
sudo gcc -c -fPIC UART_Connector.c -o /usr/local/boson/client/UART_Connector.o

cd /usr/local/boson/client
sudo mkdir -p /usr/local/boson/lib
sudo gcc -shared Client_API.o Client_Dispatcher.o Client_Packager.o Serializer_BuiltIn.o Serializer_Struct.o UART_Connector.o -o /usr/local/boson/lib/libbosonclient.so

cd $emulator_f
sudo mkdir -p /usr/local/boson/emulator
make
