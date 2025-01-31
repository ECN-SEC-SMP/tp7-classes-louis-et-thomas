EXE=prog.out
CC=g++
FLAGS=-Wall -g

INCLUDE=include
SRC=src
BIN=build

all: main.o Point.o
	@mkdir -p ${BIN}
	${CC} ${FLAGS} ${BIN}/main.o ${BIN}/Point.o -o ${EXE}

main.o : ${SRC}/main.cpp
	@mkdir -p ${BIN}
	${CC} ${FLAGS} -I $(shell pwd)/${INCLUDE} ${SRC}/main.cpp -o ${BIN}/main.o -c

Point.o : ${SRC}/Point.cpp
	@mkdir -p ${BIN}
	${CC} ${FLAGS} -I $(shell pwd)/${INCLUDE} ${SRC}/Point.cpp -o ${BIN}/Point.o -c


clean :
	rm -f ${EXE} ${BIN}/*.o

run :
	make && echo "\n==== ${EXE} ====\n" && ./${EXE}