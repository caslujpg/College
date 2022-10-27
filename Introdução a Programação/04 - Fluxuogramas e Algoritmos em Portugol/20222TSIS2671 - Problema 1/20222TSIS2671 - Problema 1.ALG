Algoritmo "Problema 1"
// Disciplina   : Introdução a Programação
// Professor   :  Cleziel
// Descrição   : Calcula quantas notas de 50, 10 e 1 são necessárias para pagar
//               uma conta cujo valor é fornecido.
// Autor(a)    : Lucas Leonardo Nobrega dos Santos
// Data atual  : 18/09/2022
Var
// Seção de Declarações das variáveis 
valor, notas50, notas10, notas1 : inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...

escreva("Informe um valor R$:")

leia(valor)

notas50 <- valor \ 50

valor <- valor mod 50

notas10 <- valor \ 10

valor <- valor mod 10

notas1 <- valor \ 1

valor <- valor mod 1

se(notas50 >= 1)entao
 escreval(notas50, " notas de 50")
fimse

se(notas10 >= 1)entao
 escreval(notas10, " notas de 10")
fimse

se(notas1 >= 1) entao
 escreval(notas1, " notas de 1")
fimse

se(notas1 = 0) entao
 escreval("Necessário digitar um valor")
fimse

Fimalgoritmo