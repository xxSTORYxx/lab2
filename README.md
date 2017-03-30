# lab2


Describe：
---------
A C++ program that can read in an "infile" to make some calculations.

After that,it will output the data on "outfile".


How does it compile：
--------------------
First we can create an infile.

we read out the content in the readfile for the afterward calculation.

We create an Elo.cpp for functioning the Elo rating system and also create an Elo.h for telling others what is in the class Elo.

Elo.cpp will contain those member functions in class Elo.

We create an main.cpp which includes Elo.h so that we can use the member functions in the class Elo.

Remark:We shall include Elo.h in both Elo.cpp and main.cpp for prepocessing.

After that,we shall connect the three things together (Elo.cpp,Elo.h,main.cpp).

To do so,we use those commands:

g++ -c Elo.cpp     // Create an Elo.o

g++ -c main.cpp    // Create an main.o

g++ -o Main main.o Elo.o     // Create an execution file names Main

After these steps,we can do so.

Example：
--------
infile
32	1613	1609
0
0.5
0.5
0
0
0

outfile
1613	1609
1597	1625
1598	1624
1599	1623
1584	1638
1570	1652
1558	1664
