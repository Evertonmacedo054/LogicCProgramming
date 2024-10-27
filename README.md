# Estudo de Programação utilizando linguagem  C

## Configuração de Codificação

Como estou utilizando o VS Code para programar em C, é necessário fazer uma configuração para que palavras com acento sejam exibidas corretamente. Para isso, siga os passos abaixo:

1. Clique em "UTF-8" localizado na barra inferior do VS Code.
2. Selecione "Reopen with Encoding".
3. Escolha "Western (ISO 8859-1)".

Feito isso, será necessário também usar a biblioteca `<locale.h>` para configurar a localidade. A biblioteca `<locale.h>` permite definir a localidade do programa, o que é essencial para a correta exibição de caracteres acentuados.

Como estou imprimindo "Olá, Mundo!" em inglês, ele será mostrado corretamente sem precisar das configurações citadas. Agora, se fosse em português, ele seria mostrado assim: "Ol├í, Mundo!".

Após realizar as configurações necessárias, será preciso corrigir todas as palavras com acento. O "Olá, Mundo!" definido no `printf` ficará mais ou menos assim: "Olã¡, Mundo!".
