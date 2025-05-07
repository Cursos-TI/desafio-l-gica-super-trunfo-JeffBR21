Super Trunfo - Comparação com Dois Atributos
============================================

Este é um programa em linguagem C que simula uma comparação de cartas no estilo Super Trunfo,
onde duas cidades são comparadas com base em dois atributos escolhidos pelo usuário.

✅ Requisitos
------------
- Compilador C (como gcc)
- Terminal ou Prompt de Comando

🛠️ Como Compilar
-----------------
No terminal, use o seguinte comando:

    gcc -o super_trunfo super_trunfo.c

Isso irá gerar um executável chamado 'super_trunfo'.

▶️ Como Executar
----------------
No terminal, após compilar:

    ./super_trunfo

No Windows:

    super_trunfo.exe

🧾 Exemplo de Uso
-----------------
***Cadastro Da Carta 1***
Codigo da carta: C01
Estado: SP
Cidade: SaoPaulo
Populacao: 12300000
PIB: 2200000000000
Area (km2): 1521
Pontos Turisticos: 10

***Cadastro Da Carta 2***
Codigo da carta: C02
Estado: RJ
Cidade: RioDeJaneiro
Populacao: 6700000
PIB: 400000000000
Area (km2): 1200
Pontos Turisticos: 15

=== Escolha do Primeiro Atributo ===
1. Populacao
2. Area
3. PIB
4. Pontos Turisticos
5. Densidade Demografica
> 1

=== Escolha do Segundo Atributo (diferente do primeiro) ===
2. Area
3. PIB
4. Pontos Turisticos
5. Densidade Demografica
> 5

🧮 Atributos Disponíveis
------------------------
Durante a execução, o usuário pode escolher dois atributos para comparar entre as cartas:

| Código | Atributo                | Quanto maior, melhor? |
|--------|-------------------------|------------------------|
| 1      | População               | Sim                   |
| 2      | Área (km²)              | Sim                   |
| 3      | PIB (Produto Interno Bruto) | Sim               |
| 4      | Pontos Turísticos       | Sim                   |
| 5      | Densidade Demográfica   | Não (quanto menor, melhor)

🏆 Critérios de Vitória
-----------------------
- Cada carta ganha 1 ponto por atributo vencido.
- No final, a carta com maior soma dos dois atributos escolhidos é a vencedora.
- Em caso de empate, o programa exibe "Empate!".