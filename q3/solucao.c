// Seu código da funcao1_solucao
int funcao1_solucao(int esi, int rdi, int edx){
    int eax = 0;

    while (eax < esi){
        if (edx == (rdi + eax * 4)){
            return eax;
        }
        eax++;
    }
    return -1;
}

// vetor

// int funcao1_solucao(int esi, int *vec, int edx){
//     int eax = 0;

//     while (eax < esi){
//         if (edx == vec[eax]){
//             return eax;
//         }
//         eax++;
//     }
//     return -1;
// }
