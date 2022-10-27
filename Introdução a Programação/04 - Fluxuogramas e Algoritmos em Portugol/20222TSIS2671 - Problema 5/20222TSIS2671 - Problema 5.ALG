Algoritmo "Problema 4"
// Disciplina   : Introdução a Programação
// Professor   : Cleziel
// Descrição   : Calcule e exiba a média de 500 números fornecidos pelo usuário
// Autor(a)    : Lucas Leonardo Nobrega dos Santos
// Data atual  : 18/09/2022
Var
// Seção de Declarações das variáveis 

i, n, p : real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
escreva("Digite o valor para conferir se é triangular ou não:")
leia(n)
i := 1
p := (i * (i + 1) * (i + 2))

ENQUANTO p < n FACA
 i <- i + 1
 p := (i * (i + 1) * (i + 2))
FIMENQUANTO
 
SE p = n ENTAO
 escreval("É triangular")
SENAO
 escreval("Não é triangular")
FIMSE

Fimalgoritmo