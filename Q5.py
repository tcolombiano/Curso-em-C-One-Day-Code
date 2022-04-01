'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''
#5. Quantos segundos há em 3 horas, 23 minutos e 17 segundos?
#Se 1h tem 3600s e 1m tem 60s, podemos admitir que: Em 3 horas tem 3*3600s + 23minutos tem x segundos mais o resto dos 17 segundos

somasegundos=(3600*3);
minutosprasegundos=23*60;
totalsegundos=somasegundos+minutosprasegundos+17; # poderia ter feito o cálculo direto usando separadores matemáticos, fiz assim pra ficar organizado.
print ('A soma total de segundos  é aproximadamente:',totalsegundos); 

