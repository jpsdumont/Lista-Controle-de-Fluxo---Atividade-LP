# c) Análise comparativa — legibilidade e manutenibilidade

## Com break/continue:
A ideia por trás de cada um dos desvios é óbvia, break é uma ordem de
parada abrupta, enquanto continue pede que a iteração seja pulada.
São palavras com significados claros e amplamente utilizados.
O código fica mais compacto e cada condição fica isolada,
tornando a manutenção bastante fácil.

## Sem break/continue:
Ao evitar os desvios, é preciso incluir todo o fluxo na condição do while
e nos ifs. A expressão !(vetor[i] > 100 && vetor[i] % 2 == 0) demanda que
o leitor faça o raciocínio da negação via De Morgan, o que dificulta a
interpretação imediata. Adicionar novos parâmetros de parada implica
modificar a condição do while, tornando a manutenção mais propensa a erros.

## Conclusão:
O uso de break e continue proporciona a versão mais legível e manutenível
neste caso. Segundo Sebesta, os critérios de simplicidade e ortogonalidade
favorecem construções que expressam a intenção diretamente — o que acontece
aqui. A versão sem desvios pode ser interessante quando a linguagem não os
suporta, porém representa uma redundância desnecessária em C.