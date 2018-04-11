#include <stdio.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <string.h>

int main(){
  int cSocket;
  char message[1024];
  struct sockaddr_in serverAddr;
  socklen_t addr_size;

  cSocket = socket(PF_INET, SOCK_STREAM, 0);

  serverAddr.sin_family = AF_INET;
  serverAddr.sin_port = htons(5549);
  serverAddr.sin_addr.s_addr = inet_addr("192.168.44.131");
  memset(serverAddr.sin_zero, '\0', sizeof serverAddr.sin_zero);

  addr_size = sizeof serverAddr;
  connect(cSocket, (struct sockaddr *) & serverAddr, addr_size);

  printf("Put Some text : %s", message);
  scanf("%s", message);
  send(cSocket, message, 50, 0);
  recv(cSocket, message, 50, 0);

  printf("Server reply :%s", message);
  return 0;
  return 0;
}

