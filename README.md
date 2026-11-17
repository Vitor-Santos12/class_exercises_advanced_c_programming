# Exercícios de Programação Avançada em C

Uma coleção de exercícios práticos para estudar recursos da linguagem C. Cada arquivo é um exemplo independente, criado durante meus estudos de programação.

## Conteúdo

| Tema | Pasta | Exemplos |
| --- | --- | --- |
| Variáveis `static` | `TakeAdvantageStaticVariables/` | Persistência entre chamadas de função e retorno de armazenamento estático |
| Operadores e condicionais | `Programming: Weir-Symbol Roundup/` | Operadores de atribuição, operador ternário e classificação de valores |
| Argumentos da linha de comando | `Main Function Arguments/` | Uso de `argc` e `argv` |
| Variáveis externas e conversões | `External Variables/` | Escopo, linkage, conversões de tipo, alocação dinâmica e compilação em múltiplos arquivos |

## Requisitos

- GCC ou outro compilador compatível com C
- Um terminal

Os exemplos não dependem de bibliotecas externas. Alguns podem exigir a biblioteca matemática padrão do sistema.

## Compilar e executar

Os arquivos são programas separados; compile um de cada vez. Por exemplo:

```sh
gcc -std=c11 -Wall -Wextra -Wpedantic \
  "TakeAdvantageStaticVariables/static01.c" -o /tmp/static01
/tmp/static01
```

O exemplo de variáveis externas em vários arquivos deve ser compilado junto:

```sh
gcc -std=c11 -Wall -Wextra -Wpedantic \
  "External Variables/ExternalVariable3/extern3_main.c" \
  "External Variables/ExternalVariable3/extern3_manipulate.c" \
  -o /tmp/external-variables
/tmp/external-variables
```

Para o exercício que calcula raiz quadrada, vincule a biblioteca matemática:

```sh
gcc -std=c11 -Wall -Wextra -Wpedantic \
  "External Variables/TypecastVariables2.c" -lm -o /tmp/typecast
/tmp/typecast
```

Os binários são gerados em `/tmp` nos exemplos acima, mantendo o repositório livre de arquivos compilados.

## Objetivo

Este repositório registra minha evolução em C por meio de exercícios curtos e organizados por assunto. As soluções priorizam a prática dos conceitos apresentados em cada exemplo.
