Algoritmo "Problema 2"
// Disciplina   : Introdu??o a Programa??o
// Professor   : Cleziel
// Descri??o   : Recebe dois valores, x e y e troca seus valores entre si.
// Autor(a)    : Lucas Leonardo Nobrega dos Santos
// Data atual  : 18/09/2022
Var
// Se??o de Declara??es das vari?veis 
x, y, aux : inteiro

Inicio
// Se??o de Comandos, procedimento, fun??es, operadores, etc... 
escreva("Digite o valor de x: ")
leia(x)

escreva("Agora o de y: ")
leia(y)

escreval("x vale", x, " e y vale", y)

aux <- x
x <- y
y <- aux

escreval("Trocando os valores, agora x vale", x, " e y vale", y)

Fimalgoritmo