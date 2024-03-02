build: solution.c
	gcc solution.c -o solution -fPIC -ldl

test: build
	gcc test.c -o libTest.so -fPIC -shared

clean:
	-rm solution libTest.so 2>/dev/null
