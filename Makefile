CC = gcc 
OUT = graph_storage
all:Adj_list.h
	$(CC) -o $(OUT) $(OUT).c -I .
debug:
	$(CC) -g $(OUT).c -o $(OUT) -I .
clean:
	rm $(OUT)

