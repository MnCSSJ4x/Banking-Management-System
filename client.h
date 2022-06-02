#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<unistd.h>
#include<stdbool.h>

int currID;
int option;
typedef struct query{
	int query_num;
	int val ;
	float money ;

}query;
typedef struct normal{
	int id ; 
	char name[30];
	char password[10];
	int account_number; 
	float balance;
	char details[100];
} normal;
typedef struct joint{
	int id ;
	char name1[30];
	char name2[30];
	char password[10];
	int account_number;
	float balance;
	char details[100];
} joint;
typedef struct admin{
	int id;
	char uname[30];
	char password[10];

} admin;
void customer_menu(int socket_descriptor);
void joint_menu(int socket_descriptor);
void admin_menu(int socket_descriptor);
void deposit(int socket_descriptor);
void withdraw(int socket_descriptor);
void balanceEnquiry(int socket_descriptor);
void changePassword(int socket_descriptor);
void viewDetails(int socket_descriptor);
void addAccount(int socket_descriptor);
void deleteAccount(int socket_descriptor);
void modifyAccount(int socket_descriptor);
void searchAccount(int socket_descriptor);
void Menu(int socket_descriptor);
void options(int socket_descriptor);
