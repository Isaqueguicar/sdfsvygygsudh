//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//
//                                                                            //
//                Universidade Federal do Rio Grande do Norte                 //
//                         Disciplina de Programação                          //
//                          Prof, Flavius Gorgônio                            //
//                      Moisés Lucena, Isaque Guimarães                       //
//                                                                            //
//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//
//                                                                            //
//                                Versão 0.3                                  //
//                                                                            //
//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//

#include <stdio.h>
#include <stdlib.h>





void menu_inicio(void);
char menu_principal(void);

void modulo_informacoes(void);
void menu_informacoes(void);
void menu_equipe(void);

void autenticacao(void);
void cadastro(void);

void modulo_cozinheiro(void);
char menu_cozinheiro(void);
void cadastra_receita(void);
void altera_receita(void);
void deleta_receita(void);
void ver_receita(void);
void expandir_receita(void);

void modulo_usuario(void);
char menu_usuario(void);
void ver_dados(void);
void altera_dados(void);
void deleta_conta(void);

void modulo_receitas(void);
char menu_receitas(void);
//       --== ** ==--        //





//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//
//                                                                            //
//                                  FUNÇÕES                                   //
//                                                                            //
//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//



// --== * Função Principal * ==-- //
int main(void) {
    char opcao;
    
    menu_inicio();
    cadastro();
    autenticacao();

    do {
        opcao = menu_principal();
        switch (opcao) {
            case '1':
                modulo_cozinheiro();
                break;
            case '2':
                modulo_usuario();
                break;
            case '3':
                modulo_receitas();
                break;
            case '4':
                modulo_informacoes();
                break;
        }    
    } while (opcao != '0');

    return 0;
}





void modulo_cozinheiro(void) {
    char opcao;

    do {
        opcao = menu_cozinheiro();
        switch (opcao) {
            case '1':
                cadastra_receita();
                break;
            case '2':
                altera_receita();
                break;
            case '3':
                deleta_receita();
                break;
            case '4':
                ver_receita();
                expandir_receita();
                break;
        }
    } while (opcao != '0');
}

void modulo_usuario(void) {
    char opcao;

    do {
        opcao = menu_usuario();
        switch (opcao) {
            case '1':
                ver_dados();
                break;
            case '2':
                altera_dados();
                break;
            case '3':
                deleta_conta();
                break;
        }
    } while (opcao != '0');
}

void modulo_receitas(void) {
    char opcao;

    do {
        opcao = menu_receitas();
    } while (opcao != '0');
}

void modulo_informacoes(void) {
    menu_informacoes();
    getchar();
    menu_equipe();
}




// --== * Funções de Cor * ==-- //
// Retiradas de: https://www.theurbanpenguin.com/4184-2/
void yellow() {
    printf("\033[0;33m");
}

void green() {
    printf("\033[0;32m");
}

void reset_color() { 
    printf("\033[0m");
}



// --== * Menu Inicial * ==-- //
void menu_inicio(void) {
    system("clear||cls");
    yellow();
    printf("\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("//                                                                            //\n");
    printf("//                         ---== * Menu Início * ==---                        //\n");
    printf("//                                                                            //\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("//                                                                            //\n");
    printf("//             (* 1 *) ---===      * Entrar *       ===---                    //\n");
    printf("//             (* 2 *) ---===     * Cadastrar *     ===---                    //\n");
    printf("//                                                                            //\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("\n");
    printf("                       -------======= *  * =======-------                       \n");
    printf("                     ---== Aperte ENTER para continuar ==---                    \n");
    getchar();
    reset_color();
}



// --== * Menu Principal * ==-- //
char menu_principal(void) {
    char opcao;
    system("clear||cls");
    yellow();
    printf("\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("//                                                                            //\n");
    printf("//                       ---== * Menu Principal * ==---                       //\n");
    printf("//                                                                            //\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("//                                                                            //\n");
    printf("//             (* 1 *) ---===  * Menu Cozinheiro *  ===---                    //\n");
    printf("//             (* 2 *) ---===    * Menu Usuário *   ===---                    //\n");
    printf("//             (* 3 *) ---===   * Menu Receitas  *  ===---                    //\n");
    printf("//             (* 4 *) ---===    * Informações *    ===---                    //\n");
    printf("//             (* 0 *) ---===       * Sair *        ===---                    //\n");
    printf("//                                                                            //\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("                       -------======= *  * =======-------                       \n");
    printf("               --== Escolha o destino desejado: ");
    scanf(" %c", &opcao);
    return opcao;
    reset_color();
}



// --== * Menu do Cozinheiro * ==-- //
char menu_cozinheiro(void) {
    char opcao;
    system("clear||cls");
    yellow();
    printf("\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("//                                                                            //\n");
    printf("//                         ---== * Cozinheiro * ==---                         //\n");
    printf("//                                                                            //\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("//                                                                            //\n");
    printf("//           (* 1 *) ---===  * Cadastrar Receita *  ===---                    //\n");
    printf("//           (* 2 *) ---===  * Modificar Receita *  ===---                    //\n");
    printf("//           (* 3 *) ---===   * Apagar Receita *    ===---                    //\n");
    printf("//           (* 4 *) -= * Visualizar Receitas (Próprias) * =-                 //\n");
    printf("//           (* 0 *) ---===      * Retornar *      ===---                     //\n");
    printf("//                                                                            //\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("                       -------======= *  * =======-------                       \n");
    printf("               --== Escolha o destino desejado: ");
    scanf(" %c", &opcao);
    getchar();
    return opcao;
    reset_color();
}



// --== * Cadastra Receita * ==-- //
void cadastra_receita(void) {
    system("clear||cls");
    yellow();
    printf("\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("//                                                                            //\n");
    printf("//                      ---== * Cadastrar Receita * ==---                     //\n");
    printf("//                                                                            //\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("//                                                                            //\n");
    printf("//         --== Nome:                                                         //\n");
    printf("//         --== Descrição:                                                    //\n");
    printf("//         --== Ingredientes:                                                 //\n");
    printf("//         --== Materiais:                                                    //\n");
    printf("//         --== Tempo de Preparo:                                             //\n");
    printf("//         --== Modo de Preparo:                                              //\n");
    printf("//         --== Complexidade (1-5):                                           //\n");
    printf("//                                                                            //\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("\n");
    printf("                       -------======= *  * =======-------                       \n");
    printf("                     ---== Aperte ENTER para continuar ==---                    \n");
    getchar();
    reset_color();
}



// --== * Altera Receitas  * ==-- //
void altera_receita(void) {
    system("clear||cls");
    yellow();
    printf("\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("//                                                                            //\n");
    printf("//                       ---== * Alterar Receita * ==---                      //\n");
    printf("//                                                                            //\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("//                                                                            //\n");
    printf("//         --== Nome:                                                         //\n");
    printf("//         --== Descrição:                                                    //\n");
    printf("//         --== Ingredientes:                                                 //\n");
    printf("//         --== Materiais:                                                    //\n");
    printf("//         --== Tempo de Preparo:                                             //\n");
    printf("//         --== Modo de Preparo:                                              //\n");
    printf("//         --== Complexidade (1-5):                                           //\n");
    printf("//                                                                            //\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("\n");
    printf("                       -------======= *  * =======-------                       \n");
    printf("                     ---== Aperte ENTER para continuar ==---                    \n");
    getchar();
    reset_color();
}



// --== * Deleta Receita * ==-- //
void deleta_receita(void) {
    system("clear||cls");
    yellow();
    printf("\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("//                                                                            //\n");
    printf("//                       ---== * Deletar Receita * ==---                      //\n");
    printf("//                                                                            //\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("//                                                                            //\n");
    printf("//              ---=== Esta receita excluida permanentemente ===---           //\n");
    printf("//                                                                            //\n");
    printf("//                       ---=== Confirmar (S/N):  ===---                      //\n");
    printf("//                                                                            //\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("\n");
    printf("                       -------======= *  * =======-------                       \n");
    printf("                     ---== Aperte ENTER para continuar ==---                    \n");
    getchar();
    reset_color();
}



// --== * Visualiza Receitas * ==-- //
void ver_receita(void) {
    system("clear||cls");
    yellow();
    printf("\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("//                                                                            //\n");
    printf("//                        ---=== * Receitas * ===---                          //\n");
    printf("//                                                                            //\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("//                                                                            //\n");
    printf("//                         (* 1 *) Receita 1                                  //\n");
    printf("//                         (* 2 *) Receita 2                                  //\n");
    printf("//                         (* 3 *) Receita 3                                  //\n");
    printf("//                         (* 0 *) Retornar                                   //\n");
    printf("//                                                                            //\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("//                                                                            //\n");
    printf("//                        ---=== * Filtrar por * ===---                       //\n");
    printf("//                                                                            //\n");
    printf("//                            --= ( * Nome * ) =--                            //\n");
    printf("//                            --= ( * Data * ) =--                            //\n");
    printf("//                        --= ( * Ingredientes * ) =--                        //\n");
    printf("//                        --= ( * Complexidade * ) =--                        //\n");
    printf("//                         --= ( * Favoritos * ) =--                          //\n");
    printf("//                                                                            //\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("\n");
    printf("                       -------======= *  * =======-------                       \n");
    printf("                     ---== Aperte ENTER para continuar ==---                    \n");
    getchar();
    reset_color();
}



// --== * Mostra detalhes da receita * ==-- //
void expandir_receita() {
    system("clear||cls");
    yellow();
    printf("\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("//                                                                            //\n");
    printf("//                         --== Nome da Receita ==--                          //\n");
    printf("//                            --== Cozinheiro ==--                            //\n");
    printf("//                         --== Data de Cadastro ==--                         //\n");
    printf("//                         --== Tempo de Preparo ==--                         //\n");
    printf("//                           --== Complexidade ==--                           //\n");
    printf("//                                                                            //\n");
    printf("//                                 Descrição                                  //\n");
    printf("//                                                                            //\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("//                                                                            //\n");
    printf("//                ---=== * Ingredientes / Materiais * ===---                  //\n");
    printf("//                                                                            //\n");
    printf("//                            -= Ingrediente 1 =-                             //\n");
    printf("//                            -= Ingrediente 2 =-                             //\n");
    printf("//                            -= Ingrediente 3 =-                             //\n");
    printf("//                                                                            //\n");
    printf("//                              -= Material 1 =-                              //\n");
    printf("//                              -= Material 1 =-                              //\n");
    printf("//                              -= Material 1 =-                              //\n");
    printf("//                                                                            //\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("//                                                                            //\n");
    printf("//                     ---=== * Modo de Preparo * ===---                      //\n");
    printf("//                                                                            //\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("\n");
    printf("                       -------======= *  * =======-------                       \n");
    printf("                     ---== Aperte ENTER para continuar ==---                    \n");
    getchar();
    reset_color();
}



// --== * Visualiza Dados * ==-- //
void ver_dados(void) {
    system("clear||cls");
    yellow();
    printf("\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("//                                                                            //\n");
    printf("//                            ---== * Dados * ==---                           //\n");
    printf("//                                                                            //\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("//                                                                            //\n");
    printf("//                       ---===       Nome        ===---                      //\n");
    printf("//                       ---===      Usuário      ===---                      //\n");
    printf("//                       ---===       Email       ===---                      //\n");
    printf("//                  ---===  Número de Receitas: (* *)  ===---                 //\n");
    printf("//                                                                            //\n");
    printf("//                    ---=== Informações Adicionais ===---                    //\n");
    printf("//                                                                            //\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("//                                                                            //\n");
    printf("//                ----==== Receitas mais Favoritadas ====----                 //\n");
    printf("//                                                                            //\n");
    printf("//                        (* ID *) Receita 1                                  //\n");
    printf("//                        (* ID *) Receita 2                                  //\n");
    printf("//                        (* ID *) Receita 3                                  //\n");
    printf("//                        (* 0 *)  Retornar                                   //\n");
    printf("//                                                                            //\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("\n");
    printf("                       -------======= *  * =======-------                       \n");
    printf("                     ---== Aperte ENTER para continuar ==---                    \n");
    getchar();
    reset_color();
}



// --== * Altera Dados * ==-- //
void altera_dados(void) {
    system("clear||cls");
    yellow();
    printf("\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("//                                                                            //\n");
    printf("//                       ---== * Alterar Dados * ==---                        //\n");
    printf("//                                                                            //\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("//                                                                            //\n");
    printf("//         --== Nome:                                                         //\n");
    printf("//         --== Usuário:                                                      //\n");
    printf("//         --== Email:                                                        //\n");
    printf("//         --== Senha:                                                        //\n");
    printf("//                                                                            //\n");
    printf("//         ---== Informações Adicionais (Opcional):                           //\n");
    printf("//                                                                            //\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("\n");
    printf("                       -------======= *  * =======-------                       \n");
    printf("                     ---== Aperte ENTER para continuar ==---                    \n");
    getchar();
    reset_color();
}



// --== * Deletar Conta * ==-- //
void deleta_conta(void) {
    system("clear||cls");
    yellow();
    printf("\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("//                                                                            //\n");
    printf("//                       ---== * Deletar Conta * ==---                        //\n");
    printf("//                                                                            //\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("//                                                                            //\n");
    printf("//       ---=== Você perderá acesso a esta conta permanentemente ===---       //\n");
    printf("//                                                                            //\n");
    printf("//                      ---=== Confirmar (S/N):  ===---                       //\n");
    printf("//                                                                            //\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("\n");
    printf("                       -------======= *  * =======-------                       \n");
    printf("                     ---== Aperte ENTER para continuar ==---                    \n");
    getchar();
    reset_color();
}



// --== * Menu do Usuário * ==-- //
char menu_usuario(void) {
    char opcao;
    system("clear||cls");
    yellow();
    printf("\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("//                                                                            //\n");
    printf("//                          ---== * Usuário * ==---                           //\n");
    printf("//                                                                            //\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("//                                                                            //\n");
    printf("//             (* 1 *) ---===       * Dados *        ===---                   //\n");
    printf("//             (* 2 *) ---===   * Alterar Dados *    ===---                   //\n");
    printf("//             (* 3 *) ---===   * Deletar Conta *    ===---                   //\n");
    printf("//             (* 0 *) ---===      * Retornar *      ===---                   //\n");
    printf("//                                                                            //\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("                       -------======= *  * =======-------                       \n");
    printf("               --== Escolha o destino desejado: ");
    scanf(" %c", &opcao);
    getchar();
    return opcao;
    reset_color();
}




// --== * Menu de Receitas  * ==-- //
char menu_receitas(void) {
    char opcao;
    system("clear||cls");
    yellow();
    printf("\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("//                                                                            //\n");
    printf("//                         - --== * Receitas * ==---                          //\n");
    printf("//                                                                            //\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("//                                                                            //\n");
    printf("//             (* 1 *) --== * Ver Receitas (Todas) * ==--                     //\n");
    printf("//             (* 2 *) --==  * Receitas Favoritas *  ==--                     //\n");
    printf("//             (* 0 *) ---===     * Retornar *     ===---                     //\n");
    printf("//                                                                            //\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("                       -------======= *  * =======-------                       \n");
    printf("               --== Escolha o destino desejado: ");
    scanf(" %c", &opcao);
    getchar();
    return opcao;
    reset_color();
}



// --== * Tela de Cadastro * ==-- //
void cadastro(void) {
    system("clear||cls");
    yellow();
    printf("\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("//                                                                            //\n");
    printf("//                        ---== * Cadastrar-se * ==---                        //\n");
    printf("//                                                                            //\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("//                                                                            //\n");
    printf("//         --== Nome:                                                         //\n");
    printf("//         --== Usuário:                                                      //\n");
    printf("//         --== Email:                                                        //\n");
    printf("//         --== Senha:                                                        //\n");
    printf("//                                                                            //\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("\n");
    printf("                       -------======= *  * =======-------                       \n");
    printf("                     ---== Aperte ENTER para continuar ==---                    \n");
    getchar();
    reset_color();
}



// --== * Tela de Autenticação * ==-- //
void autenticacao(void) {
    system("clear||cls");
    yellow();
    printf("\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("//                                                                            //\n");
    printf("//                        ---== * Autenticação * ==---                        //\n");
    printf("//                                                                            //\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("//                                                                            //\n");
    printf("//         --= Usuário/Email:                                                 //\n");
    printf("//         --= Senha:                                                         //\n");
    printf("//                                                                            //\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("\n");
    printf("                       -------======= *  * =======-------                       \n");
    printf("                     ---== Aperte ENTER para continuar ==---                    \n");
    getchar();
    reset_color();
}



// --== * Tela de Informações * ==-- //
void menu_informacoes(void) {
    system("clear||cls");
    green();
    printf("\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("//                                                                            //\n");
    printf("//                   ---== * Informações Importantes * ==---                  //\n");
    printf("//                                                                            //\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("//                                                                            //\n");
    printf("//           -----===== * Caderno de Receitas Virtual * =====-----            //\n");
    printf("//                                                                            //\n");
    printf("//  Este é um sistema simples feito com intuito puramente educacional para a  //\n");
    printf("//  disciplina DCT1106 - Programação, ministrada na Universidade Federal do   //\n");
    printf("//  Rio Grande do Norte pelo professor Flavius Gorgônio. Através deste siste- //\n");
    printf("//  ma busca-se providenciar o aprendizado prático dos conceitos abordados em //\n");
    printf("//  sala de aula. O programa atua como um caderno virtual de receitas culiná- //\n");
    printf("//  rias e disponibiliza diversas funcionalidades que auxiliam tanto o usuá-  //\n");
    printf("//  rio comum em busca de receitas, quanto aqueles que buscam compartilhar    //\n");
    printf("//  suas receitas.                                                            //\n");
    printf("//                                                                            //\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("\n");
    printf("                       -------======= *  * =======-------                       \n");
    printf("                     ---== Aperte ENTER para continuar ==---                    \n");
    getchar();
    reset_color();
}



// --== * Informações sobre a Equipe * ==-- //
void menu_equipe(void) {
    system("clear||cls");
    green();
    printf("\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("//                                                                            //\n");
    printf("//                  ---== * Equipe de Desenvolvimento * ==---                 //\n");
    printf("//                                                                            //\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("//                                                                            //\n");
    printf("//                         Projeto desenvolvido por:                          //\n");
    printf("//                                                                            //\n");
    printf("//                        ---=== Moisés Lucena ===---                         //\n");
    printf("//                   ---=== moisesbrats98@gmail.com ===---                    //\n");
    printf("//                                                                            //\n");
    printf("//                                                                            //\n");
    printf("//                       ---=== Isaque Guimarães ===---                       //\n");
    printf("//                 ---=== isaqueguimaraes388@gmail.com ===---                 //\n");
    printf("//                                                                            //\n");
    printf("//                               Disponível em:                               //\n");
    printf("//             https://github.com/MoisesLuc/Projeto-Programacao.git           //\n");
    printf("//                                                                            //\n");
    printf("//((((((((((((((((((((((((((((((((((((****))))))))))))))))))))))))))))))))))))//\n");
    printf("\n");
    printf("                       -------======= *  * =======-------                       \n");
    printf("                     ---== Aperte ENTER para continuar ==---                    \n");
    getchar();
    reset_color();
}
