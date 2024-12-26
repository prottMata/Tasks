CXX=g++

CXXFLAGS=-Wall -g

TARGET=task3

TARGET_DEL=task3

SRCS=task3.cpp

OBJS=$(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm $(TARGET_DEL) $(OBJS) 
