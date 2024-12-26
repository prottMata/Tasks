CXX=g++

CXXFLAGS=-Wall -g

TARGET=task1

TARGET_DEL=task1

SRCS=task1.cpp

OBJS=$(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm $(TARGET_DEL) $(OBJS)
