#ifndef CLIENT_H
#define CLIENT_H

#include <fstream>
#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <regex>
#include <fstream>
#include <string.h>
#include <netinet/in.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <netinet/in.h>
#include <arpa/inet.h>

void help();
void handle_transfer(int socket);
int get_connection(struct sockaddr_in dest);
unsigned long get_translated_addr(char *address);
int init_connection(int port,char *address);
int check_num_args(char *arg);
void check_args(int argc, char **argv);

#endif
