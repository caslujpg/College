Algoritmo "Problema 4"
// Disciplina   : Introdução a Programação
// Professor   : Cleziel
// Descrição   : Calcule e exiba a média de 500 números fornecidos pelo usuário
// Autor(a)    : Lucas Leonardo Nobrega dos Santos
// Data atual  : 18/09/2022
Var
// Seção de Declarações das variáveis 
valor, media, soma : real
cont : inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
cont := 0
ENQUANTO cont <= 499 FACA
 escreva("Digite o", cont + 1,"° valor:")
 leia(valor)
  SE cont <= 500 ENTAO
  soma <- valor + soma
  cont <- cont + 1
 FIMSE
FIMENQUANTO

media := (soma)/500

Escreval("A media é:", media)

Fimalgoritmo