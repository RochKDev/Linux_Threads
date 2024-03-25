# Linux Threads

Ce dépot contiens mon travail de recherche sur les threads Linux en C.
This repository contains my research work on Linux threads in C.

## Auteur

Kowalski Roch

## Instructions d'utilisation

### Génération du rapport PDF

Rendez-vous dans le dossier "Kowalski_Thread/report"

```bash
cd report
```

Pour compiler le rapport, executer :

```bash
pdflatex Kowalski_Thread.tex
```

Si la table des matières ne s'affiche pas, recompiler :

```bash
pdflatex Kowalski_Thread.tex
```

### Compilation des codes

Commencer par vous déplacer dans le dossier "Codes/" :

```bash
cd Codes
```

Avant d'exécuter le programme, assurez-vous de compiler le code source en utilisant le Makefile. Ouvrez un terminal et exécutez la commande suivante :

```bash
make
```

Changer les permissions du script Demo.sh :

```bash
chmod a+x Demo.sh
```

Ensuite executer le programme suivant :

```bash
./Demo.sh
```

La dernière commande du script vas provoquer un deadlock donc le script ne se finiras jamais.
Appuyer sur ctrl + c pour arreter le script.

Pour nettoyer tout les executebles :

```bash
make clean
```
