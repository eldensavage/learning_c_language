cd ~

apt-get install gcc
wget http://mirror.cs50.net/library50/c/library50-c-5.zip
unzip library50-c-5.zip
rm -f library50-c-5.zip
cd library50-c-5
gcc -c -ggdb -std=c99 cs50.c -o cs50.o
ar rcs libcs50.a cs50.o
chmod 0644 cs50.h libcs50.a
mkdir -p /usr/local/include
chmod 0755 /usr/local/include
mv -f cs50.h /usr/local/include
mkdir -p /usr/local/lib
chmod 0755 /usr/local/lib
mv -f libcs50.a /usr/local/lib
cd ..
rm -rf library50-c-5

apt-get install clang nodejs

apt-get install git

git clone https://github.com/robotmayo/check50.git

echo "alias check50='/usr/bin/node ~/check50/SOURCES/opt/check50/bin/'" >> .bash_aliases

echo "alias make50='make CC=clang CFLAGS="-ggdb3 -O0 -std=c99 -Wall -Werror" LDLIBS="-lcs50 -lm"'" >> .bash_aliases
