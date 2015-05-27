CC = gcc 
OUT = graph_storage
all:Adj_list.h
	$(CC) -o $(OUT) $(OUT).c 
debug:
	$(CC) -g $(OUT).c -o $(OUT)
clean:
	rm $(OUT)

