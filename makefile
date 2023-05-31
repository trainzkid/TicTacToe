NAME = TicTacToe
CXX = g++
CXXFLAGS = -std=c++23
SOURCES_DIR = sources
BUILD_DIR = build
LIBS =
SOURCES = $(wildcard $(SOURCES_DIR)/*.cpp)
OBJECTS = $(SOURCES:%.cpp=%.o)

.PHONY: all

all: $(BUILD_DIR)/$(NAME)

$(BUILD_DIR)/$(NAME): $(OBJECTS)
	$(CXX) -o $@ $^ $(LIBS)

$(OBJECTS): $(SOURCES_DIR)/%.o: $(SOURCES_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $< $(LIBS)
