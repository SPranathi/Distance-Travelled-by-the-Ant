/**Distance Travelled by Ant
Books in a library shelf are arranged as shown below and an ant travels on the top of the books 
from front cover of nth book to the back cover of mth book. 
The ant may travel in either direction (left or right) of the shelf. 
Assume that all the books in the shelf are of uniform thickness and 
thickness of the covers are negligible.

Given the direction in which the ant moves, the value of ‘m’, ‘n’ and 
thickness of one book, write a program to find the distance travelled by the ant. 
For example, when the ant travels from 7th book to the 12th book from 
left side to right side of the shelf, thickess of one book is 3 cm then the distance 
travelled by the ant is 12cm and when the ant travels from 5th book to 13th book from the right side of the shelf to the left side of the shelf and thinckess of one book is 2.5 cm then the ant will travel 22.50 cm. Print two decimal places of the distance travelled by tha ant.

Input Format

First line contains the direction of movement of ant, ‘l’ indicates that the ant moves from left to right side of the shelf and ‘r’ indicates that the ant moves from right to left side of the shelf

Next line cotains the value of ‘n’

Next line cotains the value of ‘m’

Next line contains the thickess of the book

Output Format

Print the distance travelled by the ant, d. Print only two decimal places for dstance

"""
input=
l
7
12
3
output=12.00
-----------------
input=
r
5
13
2.5
output=22.50
---------------
input=
l
9
17
1.5
output=10.50
----------------
input=
r
2
18
2.5
output=42.50
""" 
**/
#include<stdio.h>
void main(){
    int n,m;
    float t,out;
    char s;
    scanf("%c",&s);
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%f",&t);
    if(s=='l'){
        out=(m-n-1)*t;
        printf("%.2f",out);}
    else if(s=='r'){
        out=(m-n+1)*t;
        printf("%.2f",out);
    }
}