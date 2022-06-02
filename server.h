#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<unistd.h>
#include<stdbool.h>
#include<string.h>
#include<fcntl.h>
#include <pthread.h>
#include<arpa/inet.h>

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

normal getNormalUser(int ID);
joint getJointUser(int ID);
admin getAdmin(int ID);
bool checkNormalUser(normal u);
bool checkJointUser(joint u);
bool checkAdmin(admin u);
bool depositMoney(int acc_type,int ID,float amnt);
bool withdrawMoney(int acc_type,int ID,float amnt);
float getBalance(int acc_type,int ID);
bool alterPass(int acc_type,int ID,char newPwd[10]);
bool addNormalUser(normal r);
bool addJointUser(joint j);
bool deleteNormalUser(int ID);
bool deleteJointUser(int ID);
bool modifyNormalUser(normal n);
bool modifyJointUser(joint j);
void server(int new_sd);
void *connection(void *nsd);


