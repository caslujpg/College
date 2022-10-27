Algoritmo "Problema 2"
// Disciplina   : Introdução a Programação
// Professor   : Cleziel
// Descrição   : Recebe dois valores, x e y e troca seus valores entre si.
// Autor(a)    : Lucas Leonardo Nobrega dos Santos
// Data atual  : 18/09/2022
Var
// Seção de Declarações das variáveis 
x, y, aux : inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
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