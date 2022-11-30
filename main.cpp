#include "estruturas.cpp"

int main(){
    
    dataItem *G = Grafo((char*) "cidades.csv",(char*) "coordenada.csv");
    float D[] = {0.05,0.1,0.15,0.20,0.25};
 
   neighborhood S;
    for(int i = 0; i < 5; i++){
    
    
    S = matriz_adj(G,D[i]);
    printf("\n De acordo com a distancia minima D = %.3f, a cidade com mais vizinhos esta"
    "\nna posicao [%i] %s com %i vizinhos\n",D[i], S.pos,G[S.pos].city.cidade, S.Qnbr);

    if(S.posvoid == -1){
        printf("\nNao existe cidade sem vizinhos com base na distancia minima %.3f\n", D[i]);
    }
    
    else if(S.posvoid != -1){
        printf("\nA cidade que nao possui vizinhos com base na distancia minima %.3f esta"
    "\nna posicao [%i] %s", D[i], S.posvoid, G[S.posvoid].city.cidade);
        }
    
    }

    return 0;
}

/*
    De acordo com a distancia minima D = 0.050, a cidade com mais vizinhos esta
    na posicao [125] = Santo Antonio
    com 5 vizinhos

    A cidade que nao possui vizinhos com base na distancia minima 0.050 esta
    na posicao [131] = Sao Joao do Sabugi

    De acordo com a distancia minima D = 0.100, a cidade com mais vizinhos esta
    na posicao [148] = Serrinha dos Pintos
    com 17 vizinhos

    A cidade que nao possui vizinhos com base na distancia minima 0.100 esta
    na posicao [124] = Santana do Serida

    De acordo com a distancia minima D = 0.150, a cidade com mais vizinhos esta
    na posicao [163] = Venha-Ver
    com 47 vizinhos

    A cidade que nao possui vizinhos com base na distancia minima 0.150 esta
    na posicao [37] = Equador

    De acordo com a distancia minima D = 0.200, a cidade com mais vizinhos esta
    na posicao [166] = Vila Flor
    com 70 vizinhos

    A cidade que nao possui vizinhos com base na distancia minima 0.200 esta
    na posicao [47] = Governador Dix-Sept Rosado

    De acordo com a distancia minima D = 0.250, a cidade com mais vizinhos esta
    na posicao [166] = Vila Flor
    com 106 vizinhos
*/