Algoritmo "Problema 4"
// Disciplina   : Introdu??o a Programa??o
// Professor   : Cleziel
// Descri??o   : Calcule e exiba a m?dia de 500 n?meros fornecidos pelo usu?rio
// Autor(a)    : Lucas Leonardo Nobrega dos Santos
// Data atual  : 18/09/2022
Var
// Se??o de Declara??es das vari?veis 

i, n, p : real

Inicio
// Se??o de Comandos, procedimento, fun??es, operadores, etc...
escreva("Digite o valor para conferir se ? triangular ou n?o:")
leia(n)
i := 1
p := (i * (i + 1) * (i + 2))

ENQUANTO p < n FACA
 i <- i + 1
 p := (i * (i + 1) * (i + 2))
FIMENQUANTO
 
SE p = n ENTAO
 escreval("? triangular")
SENAO
 escreval("N?o ? triangular")
FIMSE

Fimalgoritmo