CC = gcc
CFLAGS = -pedantic -Wall -pthread
TARGETS = arg creation deadlock joinThread mutex mutexCond mutexDyna noMutex processVal processValRef nonThread threadId threadVal 

all: $(TARGETS)

arg: argThread.c
	$(CC) $(CFLAGS) -o arg argThread.c

creation: creationThread.c
	$(CC) $(CFLAGS) -o creation creationThread.c

deadlock: deadlock.c
	$(CC) $(CFLAGS) -o deadlock deadlock.c

joinThread: joinThread.c
	$(CC) $(CFLAGS) -o joinThread joinThread.c

mutex: mutex.c
	$(CC) $(CFLAGS) -o mutex mutex.c

mutexCond: mutex_cond.c
	$(CC) $(CFLAGS) -o mutexCond mutex_cond.c

mutexDyna: mutex_dyna.c
	$(CC) $(CFLAGS) -o mutexDyna mutex_dyna.c

noMutex: no_mutex.c
	$(CC) $(CFLAGS) -o noMutex no_mutex.c

processVal: processVal.c
	$(CC) $(CFLAGS) -o processVal processVal.c

processValRef: processValref.c
	$(CC) $(CFLAGS) -o processValRef processValref.c

nonThread: programmeNonThread.c
	$(CC) $(CFLAGS) -o nonThread programmeNonThread.c

threadId: threadID.c
	$(CC) $(CFLAGS) -o threadId threadID.c

threadVal: threadVal.c
	$(CC) $(CFLAGS) -o threadVal threadVal.c


clean:
	rm -f $(TARGETS)

