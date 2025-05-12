
# bibliotheque-c


MEMBRES DU GROUPE 4 :
 
Ngassa:livre.c
Keumeze:struck-book.c
Ngougoure:struct.c
Tchatchoua: gestion.c
Ayukeba:search.c

DESCRIPTION:

gaddi@DESKTOP-CGMC237 MINGW64 ~/OneDrive/Desktop/projet_git
$ git clone https://github.com/more33aymehd/bibliotheque-C.git
Cloning into 'bibliotheque-C'...
fatal: unable to access 'https://github.com/more33aymehd/bibliotheque-C.git/': Could not resolve host: github.com

gaddi@DESKTOP-CGMC237 MINGW64 ~/OneDrive/Desktop/projet_git
$ git clone https://github.com/more33aymehd/bibliotheque-C.git
Cloning into 'bibliotheque-C'...
remote: Enumerating objects: 3, done.
remote: Counting objects: 100% (3/3), done.
remote: Total 3 (delta 0), reused 0 (delta 0), pack-reused 0 (from 0)
Receiving objects: 100% (3/3), done.

gaddi@DESKTOP-CGMC237 MINGW64 ~/OneDrive/Desktop/projet_git
$ ls
bibliotheque-C/

gaddi@DESKTOP-CGMC237 MINGW64 ~/OneDrive/Desktop/projet_git
$ cd bibliotheque-C/

gaddi@DESKTOP-CGMC237 MINGW64 ~/OneDrive/Desktop/projet_git/bibliotheque-C (main)
$ git branch dev

gaddi@DESKTOP-CGMC237 MINGW64 ~/OneDrive/Desktop/projet_git/bibliotheque-C (main)
$ git checkout test/memory-check
error: pathspec 'test/memory-check' did not match any file(s) known to git

gaddi@DESKTOP-CGMC237 MINGW64 ~/OneDrive/Desktop/projet_git/bibliotheque-C (main)
$ git checkout -b test/memory-check
Switched to a new branch 'test/memory-check'

gaddi@DESKTOP-CGMC237 MINGW64 ~/OneDrive/Desktop/projet_git/bibliotheque-C (test/memory-check)
$ git checkout main
Switched to branch 'main'
Your branch is up to date with 'origin/main'.

gaddi@DESKTOP-CGMC237 MINGW64 ~/OneDrive/Desktop/projet_git/bibliotheque-C (main)
$ git branch feature/io-file

gaddi@DESKTOP-CGMC237 MINGW64 ~/OneDrive/Desktop/projet_git/bibliotheque-C (main)
$ git checkout feature/io-file
Switched to branch 'feature/io-file'

gaddi@DESKTOP-CGMC237 MINGW64 ~/OneDrive/Desktop/projet_git/bibliotheque-C (feature/io-file)
$ touch gestion.c

gaddi@DESKTOP-CGMC237 MINGW64 ~/OneDrive/Desktop/projet_git/bibliotheque-C (feature/io-file)
$ nano gestion.c

gaddi@DESKTOP-CGMC237 MINGW64 ~/OneDrive/Desktop/projet_git/bibliotheque-C (feature/io-file)
$ git add .
warning: in the working copy of 'gestion.c', LF will be replaced by CRLF the next time Git touches it

gaddi@DESKTOP-CGMC237 MINGW64 ~/OneDrive/Desktop/projet_git/bibliotheque-C (feature/io-file)
$ git commit -m "Ajout du fichier gestion.c"
[feature/io-file dc085ae] Ajout du fichier gestion.c
 1 file changed, 12 insertions(+)
 create mode 100644 gestion.c

gaddi@DESKTOP-CGMC237 MINGW64 ~/OneDrive/Desktop/projet_git/bibliotheque-C (feature/io-file)
$ git push origin dev


Merge branch 'test/memory-check' of https://github.com/more33aymehd/bibliotheque-C into test/memory-check
Merge branch 'test/memory-check' of https://github.com/more33aymehd/bibliotheque-C into test/memory-check














