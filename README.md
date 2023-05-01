# Logistic Sequences

This is the repo for the codebase of the final project made for our Calculus course.
<br>

The program written in `main.cpp` generates term of the sequences based on some factors and saves them in a `csv` file. Every set of terms for every sequence is it saved in another `csv` accordingly.

To generate another result the data below (what is between < >) should be modified in your code as you please: 
```
int n=<NUMBER OF TERMS>;
double p0[2]={<TERM p0 OF EVERY SEQUENCE>};
double k[2]={<THE k OF EVERY SEQUENCE>};
char outNr[100][2]={<THE NUMBER OF THE DATA TERM ex: "1">};
```
Also, keep in mind that if you want your data to be saved accordingly, you should also modify:
<br>
```char out[256] ="<ABSOLUTE PATH TO THE FOLDER>\\logistic_sequences\\terms\\terms";```

In the `graph.tex` are made the graphs necessary for interpreting the results. Every graph is made using the code:
<br>

```
\begin{tikzpicture}
\begin{axis}
\addplot table [x=b, y=a, col sep=comma] {../terms/<NAME OF TERMS FILE ex term1>.csv};
\end{axis}
\end{tikzpicture}
```

For every term file it should be added a graph (manually). The distance between the terms is 0.5, not 1.