# GERADOR DE SCRAMBLE 3X3 RUBIK'S CUBE

import random
import time

movimentos = ["R", "R'", "R2","L", "L'", "L2","U", "U'", "U2","B", "B'", "B2","F", "F'", "F2","D", "D'", "D2"]
eixo = {"R": "x", "L": "x","U": "y", "D": "y","F": "z", "B": "z"}

red = "\033[91m"
green = "\033[92m"
reset = "\033[0m"

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

input(f"\nAperte {green}ENTER{reset} para começar o timer:")
start_time = time.time()
    
input(f"Aperte {red}ENTER{reset} para encerrar o timer!")
elapsed_time = time.time() - start_time
    
print("{:.3f} s".format(elapsed_time))
