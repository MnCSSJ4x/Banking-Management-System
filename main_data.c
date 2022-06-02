//Code to create flat files for data storage and populate it with some data automatically based 
//on user input 
#include "data.h"

int main(){
    int fd=open("Admin_User",O_RDWR | O_CREAT,0744);
	int choice=0;
	admin a;
	printf("Enter the name of the admin: ");
	scanf(" %s",a.uname);
	printf("Enter the password(max 10 char): ");
	scanf(" %s",a.password);
	a.id=1000;
	printf("Your userID is : %d\n",a.id);
	write(fd,&a,sizeof(a));
	printf("Do you want to continue\n(0 to No, 1 to Yes)? ");
	scanf("%d",&choice);
	while(choice){
		printf("Enter the name of the admin: ");
		scanf(" %[^\n]",a.uname);
		printf("Enter the password(max 10 char): ");
		scanf(" %[^\n]",a.password);
		a.id=getAdmin();
		printf("Your userID is : %d\n",a.id);
		write(fd,&a,sizeof(admin));
		printf("Do you want to continue\n(0 to No, 1 to Yes)? ");
		scanf("%d",&choice);
	}
	close(fd);

	fd=open("Normal_User",O_RDWR | O_CREAT,0744);
	choice=1;
	normal n;
	printf("Enter the name of the normal user: ");
	scanf(" %[^\n]",n.name);
	printf("Enter the password(max 10 char): ");
	scanf(" %[^\n]",n.password);
	n.id=1000;
	n.balance=1000;
	n.account_number=(n.id-1000)+100000;
	printf("Your userID is : %d\n",n.id);
	strcpy(n.details,"ACTIVE");
	write(fd,&n,sizeof(normal));
	printf("Do you want to continue\n(0 to No, 1 to Yes)? ");
	scanf("%d",&choice);
	while(choice){
		printf("Enter the name of the normal user: ");
		scanf(" %[^\n]",n.name);
		printf("Enter the password(max 10 char): ");
		scanf(" %[^\n]",n.password);
		n.id=getNormal();
		n.balance=1000;
		n.account_number=(n.id-1000)+100000;
		printf("Your userID is : %d\n",n.id);
		strcpy(n.details,"ACTIVE");
		write(fd,&n,sizeof(normal));
		printf("Do you want to continue\n(0 to No, 1 to Yes)? ");
		scanf("%d",&choice);
	}
	close(fd);

	fd=open("Joint_User",O_RDWR | O_CREAT,0744);
	choice=1;
	joint newJUser;
	printf("Enter the first joint user name: ");
	scanf(" %[^\n]",newJUser.name1);
	printf("Enter the second joint user name: ");
	scanf(" %[^\n]",newJUser.name2);
	printf("Enter the password(max 10 char): ");
	scanf(" %[^\n]",newJUser.password);
	newJUser.id=1000;
	newJUser.balance=1000;
	newJUser.account_number=(newJUser.id-1000)+100000;
	printf("Your userID is : %d\n",newJUser.id);
	strcpy(newJUser.details,"ACTIVE");
	write(fd,&newJUser,sizeof(joint));
	printf("Do you want to continue\n(0 to No, 1 to Yes)? ");
	scanf("%d",&choice);
	while(choice){
		printf("Enter the first joint user name: ");
		scanf(" %[^\n]",newJUser.name1);
		printf("Enter the second joint user name: ");
		scanf(" %[^\n]",newJUser.name2);
		printf("Enter the password(max 10 char): ");
		scanf(" %[^\n]",newJUser.password);
		newJUser.id=getJoint();
		newJUser.balance=1000;
		newJUser.account_number=(newJUser.id-1000)+100000;
		printf("Your userID is : %d\n",newJUser.id);
		strcpy(newJUser.details,"ACTIVE");
		write(fd,&newJUser,sizeof(joint));
		printf("Do you want to continue\n(0 to No, 1 to Yes)? ");
		scanf("%d",&choice);
	}
	close(fd);
	return 0;
}

