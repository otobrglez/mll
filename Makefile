.PHONY: clean

CC=c++
# -pedantic
BASE_FLAGS= -std=c++14 -Wall -Wextra
LDFLAGS= -I/usr/local/Cellar/boost/1.62.0/include -I/opt/local/include
LINKFLAGS=
# LINKFLAGS= -l boost_system
FLAGS=$(BASE_FLAGS) $(LDFLAGS) $(LINKFLAGS)

app: clean
	$(CC) -o app $(FLAGS) app.cpp

clean:
	rm -rf app
