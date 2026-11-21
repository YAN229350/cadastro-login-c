# cadastro-login-c
Sistema de cadastro e login desenvolvido em C, com validação de dados e comparação de strings

# Sistema de Cadastro e Login em C

Um projeto desenvolvido em **C** com o objetivo de praticar conceitos fundamentais da linguagem, como manipulação de strings, estruturas condicionais, funções e validação de dados.

## Funcionalidades

- Cadastro de usuário.
- Criação de senha.
- Login com verificação de credenciais.
- Comparação de strings utilizando `strcmp()`.
- Validação do tamanho dos dados.
- Menu interativo no terminal.

## Tecnologias utilizadas

- Linguagem C
- Biblioteca `stdio.h`
- Biblioteca `stdlib.h`
- Biblioteca `string.h`
- Biblioteca `locale.h`

## Como executar

Compile o código utilizando GCC:

```bash
gcc main.c -o cadastro
```

Execute no Windows:

```bash
cadastro.exe
```

No Linux:

```bash
./cadastro
```

**Observação:** o código atual utiliza `system("cls")`, que é específico do Windows. Essa parte precisa ser adaptada para funcionar corretamente no Linux.

## Limitações atuais

- Os dados ficam armazenados apenas na memória durante a execução.
- As senhas são armazenadas sem criptografia.
- O sistema ainda possui limitações no tratamento de entradas inválidas.

Este projeto é educacional e não deve ser utilizado como sistema real de autenticação.

## Objetivo

Praticar programação em C, desenvolver raciocínio lógico e compreender melhor a manipulação de dados e strings.

---

**Status:** Em desenvolvimento.

**Linguagem:** C.
