int func1_solucao(int di){
    di -= 217;
    if (di <= 8){
        return 1;
    }
    return 0;
}

inf func2_solucao(int rdi, int rsi){
    rdi = rdi * 300; // 2100
    rsi = rsi * (-25); // -150

    int eax = 1 + rdi + rsi;
    if (eax == 1951){
        return 1;
    }
    return 0;
}