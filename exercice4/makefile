# Makefile pour le projet

# Variables
CC = gcc                        # Le compilateur à utiliser
CFLAGS = -Wall -Wextra -pedantic # Options de compilation
TARGET = personnage             # Nom de l'exécutable final
SRC = main.c                   # Fichier source
OBJ = $(SRC:.c=.o)             # Fichiers objets

# Règle par défaut
all: $(TARGET)

# Règle pour créer l'exécutable
$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

# Règle pour compiler les fichiers source en fichiers objets
%.o: %.c struct.h
	$(CC) $(CFLAGS) -c $< -o $@

# Règle pour nettoyer les fichiers générés
clean:
	rm -f $(OBJ) $(TARGET)

.PHONY: all clean

