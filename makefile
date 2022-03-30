bank: main.cpp money.o account.o
	g++ -o bank main.cpp money.o account.o

account: account.cpp account.h
	g++ -c account.cpp

money: money.cpp money.h
	g++ -c money.cpp

clean:
	rm bank *.o