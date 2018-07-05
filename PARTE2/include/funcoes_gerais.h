#ifndef FUNCOES_GERAIS_H
#define FUNCOES_GERAIS_H

#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
#include"animal.h"
#include"mamifero.h"
#include"ave.h"
#include"anfibio.h"
#include"reptil.h"
#include"veterinario.h"
#include"tratador.h"
#include"funcionario.h"

using namespace std;

void menu_inicial(); //**@brief Mostra as opções do programa
void mostra_arquivo(string nome_arquivo); //**@brief Percorre todo arquivo e imprime na saída padrão
int id_value(string nome_arquivo); //**@brief Retorna o id animal ou funcionario
void remove_cadastro(int remove_id, string nome_arquivo); //**@brief Remove o cadastro a partir do ID
void consulta(string entrada, string nome_arquivo); //**@brief Faz a consulta no arquivo de acordo com o parâmetro
void limpa_tela(); //**@brief Funcao responsavel por limpar a tela




#endif
