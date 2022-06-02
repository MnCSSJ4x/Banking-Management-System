#include "data.h"

int getNormal(){
    int fd=open("Normal_User",O_RDONLY|0744);
	normal record;
	lseek(fd,-sizeof(normal),SEEK_END);
	read(fd,&record,sizeof(normal));
	close(fd);
	return record.id+1;

}
int getJoint(){
    int fd=open("Joint_User",O_RDONLY|0744);
	joint record;
	lseek(fd,-sizeof(joint),SEEK_END);
	read(fd,&record,sizeof(joint));
	close(fd);
	return record.id+1;
}
int getAdmin(){
    int fd=open("Admin_User",O_RDONLY|0744);
	admin record;
	lseek(fd,-sizeof(admin),SEEK_END);
	read(fd,&record,sizeof(admin));
	close(fd);
	return record.id+1;

}