#ifndef tools_h
	#define tools_h tools_h

   /***************************************************************************
    *  clearBuffer
    *  Diese Funktion dient zum Loeschen des Tastaturpuffers
    *  Parameter: keine
    *             
    *  Ergebnis : void
    *             
    ***************************************************************************/
	void clearBuffer();


    /***************************************************************************
    *  askAgain
    *  Fragt den, ob er das Programm wiederholen möchte
    *  Parameter: Row, Col: Zeile und Spalte, in der die Benutzerfrage steht
    *             
    *  Ergebnis : 1, wenn der Benutzer die Frage der Wiederholung mit j, oder
    * 		  J beantwortet und 0, wenn mit n, oder N
    *             
    ***************************************************************************/
	int askAgain();
	
   /***************************************************************************
    *  InputOutput
    *  Diese Funktion liest ein String ein, zaehlt wie oft die extended ACSII-
	*  Werte darin vorkommen und gibt dies in einer Tabelle aus
    *  Parameter: *Zeichenzaehler, Anzahl der einzelnen ASCII-Werte in Array
	*             *Texteingabe, String der Benutzereingabe
    *             
    *  Ergebnis : void
    *             
    ***************************************************************************/
	int InputOutput(int *, unsigned char *);


#endif
