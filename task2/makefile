CXX=g++

CXXFLAGS=-Wall -g

TARGET=task2

TARGET_DEL=task2

SRCS=task2.cpp

OBJS=$(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm $(TARGET_DEL) $(OBJS)
