Algoritmo "Problema 3"
// Disciplina   : Introdu??o a Programa??o
// Professor   : Cleziel
// Descri??o   : Permitam a entrada de n (lido pelo teclado) valores reais
//               e apresente como resultado o maior entre esses valores.
// Autor(a)    : Lucas Leonardo Nobrega dos Santos
// Data atual  : 18/09/2022
Var
// Se??o de Declara??es das vari?veis 
cont : inteiro
n, maiorN : real

Inicio
// Se??o de Comandos, procedimento, fun??es, operadores, etc... 
cont := 0
escreva("Digite um valor real:")
leia(n)
maiorN := 0
ENQUANTO n >= 0 FACA
cont := 0
 SE cont = 0 ENTAO
  maiorN <- n
  cont <- cont + 1
 FIMSE

 SE n > maiorN ENTAO
  maiorN <- n
 FIMSE

 escreva("Digite outro valor real ou -1 para mostrar o maior:")
 leia(n)
fimenquanto

escreval("O maior valor digitado foi:", maiorN)

Fimalgoritmo