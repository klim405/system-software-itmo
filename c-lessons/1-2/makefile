build: solution.c solution.h
	gcc -shared -o libsolution.so -fPIC solution.c

test: build
	gcc test.c -L . -l solution -o test

clean:
	-rm test libsolution.so 2>/dev/null
