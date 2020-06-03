# Makefile criado por Gustavo Bacagine <gustavo.bacagine@protonmail.com>
#
# Data de criação: dd/mm/aaaa
# Data da última modificação: dd/mm/aaaa 
#
# Aqui deve vir uma breve esplicação sobre a aplicação
#
# Git Hub: https://github.com/Bacagine/nome_do_repositorio

TARGET  = semaforo
SRCDIR  = ./src
INCDIR  = ./include
OBJDIR  = ./obj
BINDIR  = ./bin
SRC     = $(wildcard $(SRCDIR)/*.c)
INC     = -I $(INCDIR)
OBJ     = $(addprefix $(OBJDIR)/,main.o semaforo.o developers.o)
BIN     = $(OBJDIR)/$(TARGET)
RM      = rm -rf
CC      = gcc
CFLAGS  = -W -Wall -g -lm -lncurses

all: $(OBJDIR) $(BINDIR) $(BIN)

$(OBJDIR):
	mkdir $(OBJDIR)
$(BINDIR):
	mkdir $(BINDIR)
	
$(BIN): $(OBJ)
	$(CC) -o $@ $(OBJ) $(CFLAGS)
$(OBJDIR)/main.o: $(SRCDIR)/main.c
	$(CC) -c $< $(INC) -o $@ $(CFLAGS)
$(OBJDIR)/semaforo.o: $(SRCDIR)/semaforo.c $(INCDIR)/semaforo.h
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
