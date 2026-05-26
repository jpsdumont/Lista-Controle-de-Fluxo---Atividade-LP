# c) Análise comparativa — legibilidade e manutenibilidade

## Com break/continue:
A ideia por trás de cada um dos desvios se deve pois `break` é uma ordem de
parada brusca, enquanto `continue` pede que a iteração seja pulada.
São palavras com significados simples e amplamente utilizados.
O código fica mais seguro e de melhor compreensão e cada condição fica isolada,
tornando a manutenção mais fácil.

## Sem break/continue:
Ao evitar os desvios, é preciso incluir todo o fluxo na condição do `while`
e nos `ifs`. A expressão !(vetor[i] > 100 && vetor[i] % 2 == 0) pede que
o leitor faça o raciocínio da negação via De Morgan, o que dificulta a
interpretação imediata. Adicionar novos parâmetros de parada resulta em
modificar a condição do `while`, tornando a manutenção mais propensa a erros.

## Conclusão:
O uso de `break` e continue traz uma versão mais legível e manutenível.
Segundo Sebesta, os critérios de simplicidade e ortogonalidade
favorecem construções que expressam a intenção diretamente  o que acontece
aqui. A versão sem desvios pode ser interessante quando a linguagem não os
suporta, porém representa uma redundância desnecessária em C.