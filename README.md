# mll

Experimental C++ app to convert CoNLL file to list of sentences that can be further used in machine learning / NLP tools and frameworks.

## Building

````bash
make app
./app < ./path/to/some/file.conll
```

## Example

```bash
cat slovenian-std.conll | head -n 10
```

Gives CoNLL table

```
1 Bil biti  Verb  Verb-copula VForm=participle|Tense=past|Number=singular|Gender=masculine|Voice=active 8 Pred  _ _
2 je  biti  Verb  Verb-copula VForm=indicative|Tense=present|Person=third|Number=singular|Negative=no 1 AuxV  _ _
3 jasen jasen Adjective Adjective-qualificative Degree=positive|Gender=masculine|Number=singular|Case=nominative|Definiteness=no  7 Atr _ _
4 , , PUNC  PUNC  _ 3 Coord _ _
5 mrzel mrzel Adjective Adjective-qualificative Degree=positive|Gender=masculine|Number=singular|Case=nominative|Definiteness=no  3 Atr _ _
6 aprilski  aprilski  Adjective Adjective-ordinal Degree=positive|Gender=masculine|Number=singular|Case=nominative  7 Atr _ _
7 dan dan Noun  Noun-common Gender=masculine|Number=singular|Case=nominative  1 Sb  _ _
8 in  in  Conjunction Conjunction-coordinating  Formation=simple  0 Coord _ _
9 ure ura Noun  Noun-common Gender=feminine|Number=plural|Case=nominative 11  Sb  _ _
10  so  biti  Verb  Verb-copula VForm=indicative|Tense=present|Person=third|Number=plural|Negative=no 11  AuxV  _ _
```

With [mll](https://github.com/otobrglez/mll)...

```bash
./app < slovenian-std.conll | head -n 10
```

You get back this,...

```
 Bil je jasen , mrzel aprilski dan in ure so bile trinajst .
 Winston Smith je imel brado zakopano v prsi , da bi ušel strupenemu vetru , ko je stopil skozi steklena vrata bloka Zmaga , vendar ne dovolj hitro , da ne bi vrtinec peščenega prahu vstopil skupaj z njim .
 Veža je smrdela po kuhanem zelju in starih , cunjastih predpražnikih .
 Na eni strani je bil na steno pribit barven , za notranjo opremo prevelik plakat .
 Prikazoval je preprosto ogromen , več kot meter velik obraz : obraz moškega pri petinštiridesetih , s košatimi črnimi brki in z ostro začrtanimi , čednimi potezami .
 Winston se je napotil proti stopnicam .
 Ni bilo vredno preskusiti dvigala .
 Še v najboljših časih je redko delovalo , zdaj pa so električni tok v dnevnih urah odklapljali .
 To je sodilo k ekonomski kampanji v pripravah za Teden sovraštva .
 Stanovanje je bilo v sedmem nadstropju in Winston , ki je imel devetintrideset let in krčni tvor nad desnim gležnjem , je stopal počasi in spotoma večkrat počival .
```


## Author

- [Oto Brglez](http://github.com/otobrglez)
