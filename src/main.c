/**********************************************************************************
 * Git Hub: https://github.com/Bacagine/  *
 *                                                                                *
 * Copyright (C) 2020                                                             *
 *                                                                                * 
 * main.c: arquivo principal do progama semaforo                                  *
 *                                                                                *
 * O programa semaforo foi criado para a aula de Sistemas Operacionais lecionado  *
 * pela professora Ana Travassos.                                                 *
 * Este programa foi feito para poder estudar o uso de semaforos.                 *
 *                                                                                *
 * Desenvolvedores: Gustavo Bacagine <gustavo.bacagine@protonmail.com>            *
 *                  José Eduardo     <joseeduardoolimpios@gmail.com>              *
 *                  Caio Elias       <meu_email@algumacoisa.com>                  *
 *                                                                                *
 * Este programa é software livre; você pode redistribuí-lo e/ou modificá-lo      *
 * sob os termos da GNU General Public License conforme publicada pela Free       *
 * Software Foundation; quer a versão 2 da licença, ou (conforme você escolha)    *
 * qualquer versão posterior.                                                     *
 *                                                                                *
 * Este programa é distribuído com a esperança de que seja útil, mas SEM          *
 * QUALQUER GARANTIA; mesmo sem a garantia implícita de MERCANTIBILIDADE OU       *
 * ADEQUAÇÃO A UM DETERMINADO PROPÓSITO. Para mais detalhes, veja a               *
 * GNU General Public License.                                                    *
 *                                                                                *
 * Você deve ter recebido uma cópia da GNU General Public License juntamente      *
 * com este programa; caso contrário, veja <https://www.gnu.org/licenses/>        *
 *                                                                                *
 * Data: 03/06/2020                                                               *
 * Data da última modificação: 03/06/2020                                         *
 **********************************************************************************/

#include <stdio.h>
#include <locale.h>
#include <string.h>
#include "../include/semaforo.h"

int main(int argc, char **argv){
    if(argc == 1){
        semaforo();
    }
    else if(argc == 2){
        setlocale(LC_ALL, "Portuguese");
        if(!strcmp(argv[1], "-h") || !strcmp(argv[1], "--help")){
            puts(HELP);
        }
        else if(!strcmp(argv[1], "-v") || !strcmp(argv[1], "--version")){
            puts(VERSION);
        }
        else if(!strcmp(argv[1], "-dev") || !strcmp(argv[1], "--developers")){
            developers();
        }
    }
    else{
        setlocale(LC_ALL, "Portuguese");
        fprintf(stderr, "Erro! Você digitou mais de um argumento\n");
    }
    return 0;
}