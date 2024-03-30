%: %.cpp
	g++ -I .. -lX11 -lpthread -o $@ $<
