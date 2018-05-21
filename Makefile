all:
	cc -O3 cap.c -o cap

install:
	cp cap /usr/local/bin/cap
	chmod +x /usr/local/bin/cap

clean:
	rm cap
