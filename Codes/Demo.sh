#!/bin/bash
#NOM    : Demo
#CLASSE : Threads
#OBJET  : réservé au Makefile
#AUTEUR	: Kowalski Roch
C='\033[44m'
E='\033[32m\033[1m'
W='\033[31m\033[1m'
N='\033[0m'
clear
echo "Démonstration du programme programmeNonThread.c" 
echo "-----------------------------------------------------------------------"
echo -e "Exécution de ${E}./nonThread ${N} :"
./nonThread
echo -e "Exécution finie ${N}"
echo -e "${E}             --> Enter pour continuer${N}"; read

echo "Démonstration du programme creationThread.c" 
echo "-----------------------------------------------------------------------"
echo -e "Exécution de ${E}./creation ${N} :"
./creation
echo -e "Exécution finie ${N}"
echo -e "${E}             --> Enter pour continuer${N}"; read

echo "Démonstration du programme threadID.c" 
echo "-----------------------------------------------------------------------"
echo -e "Exécution de ${E}./threadId ${N} :"
./threadId
echo -e "Exécution finie ${N}"
echo -e "${E}             --> Enter pour continuer${N}"; read

echo "Démonstration du programme joinThread.c" 
echo "-----------------------------------------------------------------------"
echo -e "Exécution de ${E}./joinThread ${N} :"
./joinThread
echo -e "Exécution finie ${N}"
echo -e "${E}             --> Enter pour continuer${N}"; read

echo "Démonstration du programme processVal.c" 
echo "-----------------------------------------------------------------------"
echo -e "Exécution de ${E}./processVal ${N} :"
./processVal
echo -e "Exécution finie ${N}"
echo -e "${E}             --> Enter pour continuer${N}"; read

echo "Démonstration du programme threadVal.c" 
echo "-----------------------------------------------------------------------"
echo -e "Exécution de ${E}./threadVal ${N} :"
./threadVal
echo -e "Exécution finie ${N}"
echo -e "${E}             --> Enter pour continuer${N}"; read

echo "Démonstration du programme processValRef.c" 
echo "-----------------------------------------------------------------------"
echo -e "Exécution de ${E}./processValRef ${N} :"
./processValRef
echo -e "Exécution finie ${N}"
echo -e "${E}             --> Enter pour continuer${N}"; read

echo "Démonstration du programme no_mutex.c" 
echo "-----------------------------------------------------------------------"
echo -e "Exécution de ${E}./noMutex ${N} :"
./noMutex
echo -e "Exécution finie ${N}"
echo -e "${E}             --> Enter pour continuer${N}"; read

echo "Démonstration du programme mutex.c" 
echo "-----------------------------------------------------------------------"
echo -e "Exécution de ${E}./mutex ${N} :"
./mutex
echo -e "Exécution finie ${N}"
echo -e "${E}             --> Enter pour continuer${N}"; read

echo "Démonstration du programme mutex_dyna.c" 
echo "-----------------------------------------------------------------------"
echo -e "Exécution de ${E}./mutexDyna ${N} :"
./mutexDyna
echo -e "Exécution finie ${N}"
echo -e "${E}             --> Enter pour continuer${N}"; read

echo "Démonstration du programme mutex_cond.c" 
echo "-----------------------------------------------------------------------"
echo -e "Exécution de ${E}./mutexCond ${N} :"
./mutexCond
echo -e "Exécution finie ${N}"
echo -e "${E}             --> Enter pour continuer${N}"; read

echo "Démonstration du programme deadlock.c" 
echo "-----------------------------------------------------------------------"
echo -e "Exécution de ${E}./deadlock ${N} :"
./deadlock 
echo -e "Exécution finie ${N}"
echo -e "${E}             --> Enter pour continuer${N}"; read


