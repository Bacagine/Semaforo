/**********************************************************************************
 * Git Hub: https://github.com/Bacagine/Semaforo                                  *
 *                                                                                *
 * Copyright (C) 2020                                                             *
 *                                                                                * 
 * semaforo.c: Arquivo com o desenvolvimento das funções da biblioteca semaforo.h *
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
#include <stdlib.h>
#include <../include/semaforo.h>
//#include "../include/fatec.h"

void semaforo(void){
//  int semid;
    pid_t pid/*, pid_father, pid_son*/;
    
    pid = fork();
    
    while(1){
        if(pid > 0){
            pid = fork();
            printf("Eu sou o processo pai, meu ID e: %d\n", getpid());
        }
        else{
            printf("Eu sou o processo filho, meu ID e: %d\n", getpid());
        }
    }
    
//    printf("Inicio da execução do processo %d, semaforo %d\n", pid, semid);
}
