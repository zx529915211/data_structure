#COMPILER			=	g++
#
SOURCES				=	$(wildcard ./*.cpp)
#OBJECTS				=	$(SOURCES:%.cpp=%.o)

#all:${OBJECTS}
#	COMPILER -o test
#
#${OBJECTS}:
#	${COMPILER} $@ ${@:%.o=%.cpp}



all:${SOURCES}
	g++ $^ -o main

clean:
	echo 666