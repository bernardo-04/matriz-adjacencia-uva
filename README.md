# Matriz de Adjacência em C

Este projeto consiste em uma implementação interativa em linguagem **C** para manipulação e visualização de grafos não direcionados utilizando a representação de **Matriz de Adjacência**. 

O programa conta com uma interface no console limpa e organizada, prevenindo o acúmulo de saídas antigas no terminal.

---

## 🚀 Funcionalidades

O programa oferece um menu completo para gerenciamento de grafos:
1. **Limpar Grafo**: Zera todas as conexões atuais do grafo.
2. **Inserir/Remover Aresta**: Adiciona (`1`) ou remove (`0`) conexões entre vértices de forma não direcionada.
3. **Mostrar Matriz**: Imprime a matriz de adjacência formatada com cabeçalhos de linhas e colunas.
4. **Mostrar Graus**: Calcula e exibe o grau (quantidade de conexões) de cada vértice.
5. **Mostrar Adjacências**: Lista os vizinhos de cada vértice de maneira legível.

---

## 🛠️ Como Compilar e Executar

### 1. Manualmente pelo Terminal
Certifique-se de que você possui um compilador C instalado (como o `GCC`).

**Compilar:**
```bash
gcc matriz-adjacencia.c -o matriz-adjacencia.exe
```

**Executar:**
```bash
./matriz-adjacencia.exe
```

### 2. Pelo VS Code (Com Code Runner)
Se você estiver utilizando a extensão **Code Runner**:
1. Abra o arquivo `matriz-adjacencia.c`.
2. Clique no ícone de **Play** no canto superior direito ou utilize o atalho `Ctrl + Alt + N` (Windows).

---

## 🧩 Extensões Recomendadas para o VS Code

Para obter a melhor experiência de desenvolvimento em C dentro do VS Code, recomendamos as seguintes extensões:

1. **C/C++** *(da Microsoft)*:
   - Oferece suporte completo de IntelliSense (autocompletar código), depuração (debugging) integrada e realce de sintaxe de alta qualidade.
2. **Code Runner** *(de Jun Han)*:
   - Permite executar códigos em C com apenas um clique diretamente no terminal integrado do VS Code.
3. **Prettier - Code formatter** ou usar o formatador nativo da extensão C/C++:
   - Mantém o estilo de formatação do código padronizado a cada salvamento (`Format on Save`).

---

## 📝 Sugestão de Teste Rápido

Para validar o funcionamento completo da implementação, siga as etapas abaixo ao rodar o programa:
1. Informe `4` como a **Quantidade de vértices**.
2. Adicione as seguintes conexões (Opção `2` -> Opção `1`):
   - `0` para `1`
   - `1` para `2`
   - `2` para `3`
   - `3` para `0`
3. Visualize os graus (Opção `4`) e vizinhos (Opção `5`).
4. Remova a conexão de `0` para `1` (Opção `2` -> Opção `2`) e verifique a matriz atualizada na Opção `3`.
