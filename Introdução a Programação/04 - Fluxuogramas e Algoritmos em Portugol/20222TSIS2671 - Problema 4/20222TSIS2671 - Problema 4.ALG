Algoritmo "Problema 4"
// Disciplina   : Introdu??o a Programa??o
// Professor   : Cleziel
// Descri??o   : Calcule e exiba a m?dia de 500 n?meros fornecidos pelo usu?rio
// Autor(a)    : Lucas Leonardo Nobrega dos Santos
// Data atual  : 18/09/2022
Var
// Se??o de Declara??es das vari?veis 
valor, media, soma : real
cont : inteiro

Inicio
// Se??o de Comandos, procedimento, fun??es, operadores, etc...
cont := 0
ENQUANTO cont <= 499 FACA
 escreva("Digite o", cont + 1,"? valor:")
 leia(valor)
  SE cont <= 500 ENTAO
  soma <- valor + soma
  cont <- cont + 1
 FIMSE
FIMENQUANTO

media := (soma)/500

Escreval("A media ?:", media)

Fimalgoritmo