# Tic-Tac-Toe Game

## Descriere
Acesta este un joc simplu de Tic-Tac-Toe implementat în C++, unde doi jucători (X și O) joacă alternativ până când unul câștigă sau se ajunge la egalitate.

## Cerințe
- **Compilator C++**: (de exemplu, `g++`)
- **Make**: pentru a automatiza compilarea
- **Git**: pentru gestionarea versiunilor

## Instalare și Rulare

1. Clonează repo-ul:
    ```bash
    git clone <URL_REPO>
    cd TicTacToe
    ```

2. Compilează proiectul:
    ```bash
    make
    ```

3. Rulează jocul:
    ```bash
    ./TicTacToe
    ```

## Utilizare
- La început, Jucătorul 1 alege un marker (X sau O).
- Jucătorii aleg pe rând un slot de la 1 la 9 pentru a plasa markerul pe tablă.
- Jocul verifică câștigătorul după fiecare mutare.

## Curățare
Pentru a șterge fișierele obiect și executabilul, rulează:
```bash
make clean
