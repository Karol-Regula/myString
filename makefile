myString: myString.c
	gcc myString.c -o myString

run: myString
	./myString

clean:
	rm *~
