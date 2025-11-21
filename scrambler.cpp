# GERADOR DE SCRAMBLE 3X3 RUBIK'S CUBE

import random

movimentos = ["R", "R'", "R2","L", "L'", "L2","U", "U'", "U2","B", "B'", "B2","F", "F'", "F2","D", "D'", "D2"]
eixo = {"R": "x", "L": "x","U": "y", "D": "y","F": "z", "B": "z"}

scramble = []

for i in range(20):
    movimentos_validos = []

    for m in movimentos:
        face_atual = m[0]

        if len(scramble) >= 1:
            ultimo = scramble[len(scramble) - 1]
            face_ultimo = ultimo[0]
            if face_atual == face_ultimo:
                continue 

        if len(scramble) >= 2:
            eixo_ultimo = eixo[scramble[-1][0]]
            eixo_penultimo = eixo[scramble[-2][0]]
            eixo_atual = eixo[face_atual]

            if eixo_atual == eixo_ultimo == eixo_penultimo:
                continue

        movimentos_validos.append(m)

    mov_escolhido = random.choice(movimentos_validos)
    scramble.append(mov_escolhido)

print(' '.join(scramble))
