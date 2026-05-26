# ii) Por que Python match/case não precisa de break

O `match/case` do Python  foi projetado com
correspondência de padrões, uma abordagem inspirada em linguagens como Haskell e Rust.

Nesse modelo, cada `case` é um padrão isolado, quando um padrão casa,
seu bloco executa e o `match` encerra automaticamente, assim
não existe fall-through por definição.

Essa foi uma escolha de projeto do Python para tornar o código mais seguro  
e legível, evitando erros comuns em linguagens como C e Java,  
onde esquecer um `break` pode causar comportamentos inesperados.  
A ideia é seguir uma lógica de **“um caso, um resultado”**, tornando a estrutura mais intuitiva.

Em Python, se você quiser múltiplos valores em um caso, usa `|` dentro
do próprio padrão, eliminando a necessidade de empilhar cases e de
breaks defensivos.