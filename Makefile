# Makefile criado por Gustavo Bacagine <gustavo.bacagine@protonmail.com>
#
# Data de criação: 03/06/2020
# Data da última modificação: 03/06/2020 
#
# Programa criado para a aula de Sistemas Operacionais lecionado
# pela professora Ana Travasso.
# Este programa foi criado para poder estudar o uso de semaforos.
#
# Git Hub: https://github.com/Bacagine/Semaforo

TARGET  = semaforo
SRCDIR  = ./src
INCDIR  = ./include
OBJDIR  = ./obj
BINDIR  = ./bin
SRC     = $(wildcard $(SRCDIR)/*.c)
INC     = -I $(INCDIR)
OBJ     = $(addprefix $(OBJDIR)/,main.o developers.o)
BIN     = $(BINDIR)/$(TARGET)
RM      = rm -rf
CC      = gcc
#CFLAGS  = -W -Wall -g -lm -lncurses

all: $(OBJDIR) $(BINDIR) $(BIN)

$(OBJDIR):
	mkdir $(OBJDIR)
$(BINDIR):
	mkdir $(BINDIR)
	
$(BIN): $(OBJ)
	$(CC) -o $@ $(OBJ) $(CFLAGS)
$(OBJDIR)/main.o: $(SRCDIR)/main.c
	$(CC) -c $< $(INC) -o $@ $(CFLAGS)
$(OBJDIR)/developers.o: $(SRCDIR)/developers.c $(INCDIR)/developers.h
	$(CC) -c $< $(INC) -o $@ $(CFLAGS)
run: all
	@$(BIN)
clean:
	$(RM) $(OBJ)
mrproper: clean
	$(RM) $(OBJDIR)
	$(RM) $(BINDIR)

.PHONY: all run clean mrproper
