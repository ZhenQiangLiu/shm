/*
 * Ipc_shm.h
 *
 *  Created on: Mar 23, 2017
 *      Author: w
 */

#include <sys/types.h>
#include <sys/socket.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/wait.h>
#include <signal.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <ctype.h>
#include <unistd.h>
#include <fcntl.h>

#ifndef IPC_SHM_H_
#define IPC_SHM_H_

int shm_init(int *shmbuf);
int shm_read(int *shmbuf);
void shm_write(int *shmbuf);
void shm_free(int *shmbuf);

#endif /* IPC_SHM_H_ */
