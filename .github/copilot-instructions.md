## Istruzioni rapide per gli agenti AI

Repository: semplice raccolta di esercizi in C per lezioni (file come `esercizio 1.c`, `esercizio 3`, ecc.). Obiettivo: programmi console standalone, uno per esercizio.

Cosa ci si aspetta da un commit rapido
- Fixare errori di sintassi evidenti (es. parentesi mancanti, punti e virgola, `int main()` strutturato correttamente).
- Rendere i programmi compilabili con gcc (`-Wall -Wextra -std=c11`) senza introdurre nuove warning evidenti.
- Preservare i prompt/terminologia in italiano (es. "inserisci il prezzo pieno:").

Pattern ricorrenti e file da osservare
- `README.md`: lista degli esercizi e loro descrizione — aggiornalo se cambi nomi file o numerazione.
- File sorgente: nomi come `esercizio 1.c` (nota: possono contenere spazi). Cerca `esercizio*.c` o file che iniziano con "esercizio".
- Tipico snippet da correggere: uso di `scanf` senza controllo del valore di ritorno, formati `%f` per float, mancata `return 0;` in `main`.

Comandi utili (esempi specifici)
Compilare il file (attenzione agli spazi nel nome):

```bash
gcc -Wall -Wextra -std=c11 "esercizio 1.c" -o "esercizio 1"
./"esercizio 1"
```

Raccomandazione: rinominare file per rimuovere spazi (git mv) e aggiornare `README.md`:

```bash
git mv "esercizio 1.c" esercizio_1.c
gcc -Wall -Wextra -std=c11 esercizio_1.c -o esercizio_1
```

Linee guida specifiche per le modifiche
- Mantieni i messaggi in italiano e le stringhe utente così come sono, a meno che non sia esplicitamente richiesto di tradurre.
- Quando sistemi `scanf`, aggiungi un controllo del valore di ritorno. Esempio:

```c
if (scanf("%f", &prezzo_pieno) != 1) {
    printf("Input non valido\n");
    return 1;
}
```

- Aggiungi l'include della libreria standard per I/O (stdio.h) e assicurati che main sia corretto: int main(void) { /* ... */ return 0; }.
- Evita grandi refactor non richiesti. Se vuoi rinominare file o cambiare API (es. trasformare input da scanf a argomenti cli), segnala nel commit e aggiorna il `README.md`.

Controlli di accettazione per una modifica automatica
1) Il file compilato con il comando gcc sopra non introduce nuovi warning significativi.
2) I prompt sono mantenuti in italiano.
3) Non cambiare la logica degli esercizi senza una spiegazione nel commit.

Dove cercare altri esempi
- Apri `README.md` per capire quale esercizio corrisponde a quale file.
- Cerca nel repository per file che iniziano con `esercizio` per individuare programmi simili e riutilizzare pattern di input/output.

Limitazioni e assunzioni
- Non esiste un sistema di build o test automatici nel repository; le verifiche sono manuali via `gcc`/esecuzione.
- Presumo programmi in C, singoli file per esercizio. Se trovi cartelle o progetti diversi, evidenzialo in PR.

Se qualcosa non è chiaro
- Chiedi al maintainer quale esercizio deve essere toccato prima di grandi refactor (es. rinomina file o aggiunta di test).

Esempio concreto dal repo
- `esercizio 1.c` contiene:
  - richieste all'utente in italiano (es. "inserisci il prezzo pieno:"),
  - dichiarazioni di variabili in italiano (`prezzo_pieno`, `sconto_valore`),
  - problemi di sintassi (parentesi/parsing `scanf`).

Grazie: inserisci qui una breve nota nel PR che descriva i cambi principali (sintassi, sicurezza input, rinomina file se applicata).
