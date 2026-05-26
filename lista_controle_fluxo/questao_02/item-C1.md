# i) Fall-through no case 4 sem break
```c
Se o break do case 4 for removido, após executar j = 4 * k - 1 (com k = 4, resultando em j = 15), o C não encerra o switch — ele continua executando o código do próximo case (6, 7, 8) imediatamente, sem checar a condição. Assim, j seria sobrescrito para j = k - 2 = 2. O resultado final seria j = 2 em vez do correto j = 15. Esse comportamento é o fall-through: na ausência de break, a execução "cai" para o bloco seguinte. É um recurso intencional do C (útil para agrupar casos), mas é uma das maiores fontes de bugs quando esquecido.
```