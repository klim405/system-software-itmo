build: solution.c solution.h
	gcc -shared -o libsolution.so -fPIC solution.c

clean:
	-rm libsolution.so 2>/dev/null

test: build
	gcc test.c -L . -l solution -o test
