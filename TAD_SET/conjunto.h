typedef struct conjunto Conjunto;

//criar um conjunto
Conjunto* criar(int);

//preencher conjunto
void preencher(Conjunto*);

//imprimir conjunto
void imprimir(Conjunto*);

//unir dois conjuntos
void uniao(Conjunto*, Conjunto*);

//interseccao de dois conjuntos
void intersecao(Conjunto*, Conjunto*);

//diferenca de dois conjuntos
void diferenca(Conjunto*, Conjunto*);

//verificar se um conjunto está contido em outro
int contido(Conjunto*, Conjunto*);

//verificar se os conjuntos sao complemetares. Ex: O complementar de B em relação a A é o conjunto A – B.
void complementar(Conjunto*, Conjunto*);
