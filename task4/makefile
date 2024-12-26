CXX=g++

CXXFLAGS=-Wall -g

TARGET=task4

TARGET_DEL=task4

SRCS=task4.cpp

OBJS=$(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm $(TARGET_DEL) $(OBJS) 
