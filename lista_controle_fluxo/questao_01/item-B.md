# b) Explicação das mudanças

Original (com break/continue)   ->   Reescrito (sem break/continue)
-----------------------------------------------------------------
for com break para parar         ->   while com vetor[i] >= 0 na
no negativo                           própria condição

continue para pular pares > 100  ->   if (!(condição do continue))
                                       envolve o soma +=

Duas saídas de fluxo diferentes  ->   Fluxo único e linear
-----------------------------------------------------------------

O break foi eliminado porque sua lógica foi incorporada na própria
condição do while, se o número for negativo, o laço simplesmente
não continua, sem necessidade de uma saída abrupta.

O continue foi substituído por uma guarda condicional que nega a
sua condição original, dessa forma a soma += só é executada quando
a condição de pular não for satisfeita.