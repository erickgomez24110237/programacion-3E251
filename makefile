PROYECTO = primo
LIB := -lftxui-component -lftxui-dom -lftxui-screen
CXX := -std=c++17
SRC := src
INCLUDE := include
BIN := bin
EXE := $(BIN)/$(PROYECTO)

$(EXE) : $(SRC)/memoria.cpp	
	c++ $< -o $@ $(LIB) $(CXX) -I$(INCLUDE)

run : $(EXE)
	./$<

clean : 
	rm $(BIN)/*


archivo: bin/archivo
	./$<

bin/archivo: src/archivo.cpp
	c++ $< -o $@ -I$(INCLUDE)

binario: bin/binario
	./$<

bin/binario: src/binario.cpp
	c++ $< -o $@ -I$(INCLUDE)

std: bin/std
	./$<

bin/std: src/std.cpp
	c++ $< -o $@ -I$(INCLUDE)

vector: bin/vector
	./$<

bin/vector: src/vector.cpp
	c++ $< -o $@ -I$(INCLUDE)

map: bin/map
	./$<

bin/map: src/map.cpp
	c++ $< -o $@ -I$(INCLUDE)

set: bin/set
	./$<

bin/set: src/set.cpp
	c++ $< -o $@ -I$(INCLUDE)

