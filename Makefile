all:
	g++ -std=c++11 *.cpp -o release
debug:
	g++ -g -std=c++11 *.cpp -o debug
