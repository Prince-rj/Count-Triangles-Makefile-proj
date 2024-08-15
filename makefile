all:exe1 exe2 output1 output2  apptestcases.o library.o exe

exe:output
	./output
	
output: main.cpp library.o app.o
	g++ main.cpp -o output

exe2:output2
	./output2 >op2.txt
exe1: output1
	./output1 > op1.txt
output2:library.o app.o
	g++ libTestCases.cpp -o output2
output1:app.o library.o
	g++ apptestcases.cpp -o output1
app.o: app.cpp library.o
	g++ -c app.cpp
library.o: library.cpp
	g++ -c library.cpp

clean:
	rm -f *.o output1 output2 op1.txt op2.txt output	
