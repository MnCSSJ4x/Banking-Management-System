1) Compile the 3 type of code files in the following way 
	a) gcc main_data.c data.c -o data
 	b) gcc main_client.c client.c -o client
	c) gcc main_server.c server.c -lpthread -o server 
2) You will get 3 files : data,client,server
3) First run data to create files Admin_User,Normal_User,Joint_User. These files consist of the data for bank. You can populate it by following the prompts 
4) Run ./server and then ./client to test the code(for demo) 
