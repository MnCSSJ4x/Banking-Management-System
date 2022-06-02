#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

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

int getNormal();
int getJoint();
int getAdmin();

