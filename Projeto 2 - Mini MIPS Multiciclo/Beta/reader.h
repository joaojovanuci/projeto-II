#define MAX 256
#define TAMANHO 16

struct instrucao {
    char tipo_inst;
    int opcode; 
    int rs;
    int rt;
    int rd;
    int funct;
    int imm;
    int addr;
};

struct memoria {
    char linhas[MAX][TAMANHO + 1];
    int tamanho;
};

struct reg_inst {
	char inst_char[17];
    struct instrucao inst;
};

struct reg_mem {
    int dados;
};

struct reg_ab {
    int reg_a;
    int reg_b;
};

struct reg_ula {
    int saida;
};

struct controle_pc {
    int pc_soma;
    int saida_ula;
    int jump;
};

int lerEArmazenarArquivo(const char *filename, struct memoria *mem, int max_linhas);
int ULA(int opcode, int funct, int a, int b);
void imprime_mem(struct memoria *mem, int j);
void imprime_reg(int registradores[], struct reg_ab ab);
void executa_instrucao();