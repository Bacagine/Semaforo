/**********************************************************************************
 * Git Hub: https://github.com/Bacagine/Semaforo                                  *
 *                                                                                *
 * Copyright (C) 2020                                                             *
 *                                                                                *
 * developers.c: Mostra os desenvolvedores da aplicação                           *
 *                                                                                *
 * O programa semaforo foi criado para a aula de Sistemas Operacionais lecionado  *
 * pela professora Ana Travassos.                                                 *
 * Este programa foi feito para poder estudar o uso de semaforos.                 *
 *                                                                                *
 * Desenvolvedores: Gustavo Bacagine          <gustavo.bacagine@protonmail.com>   *
 *                  José Eduardo              <joseeduardoolimpios@gmail.com>     *
 *                  Caio Elias Emerick Regino <caioregino.147@gmail.com>          *
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
 * Data de criação: 29/05/2020                                                    *
 **********************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "../include/developers.h" /* --> Biblioteca para poder usar a função
                               developers() */

void developers(void){
    setlocale(LC_ALL, "Portuguese");
    
    fprintf(stdout, "*************************DESENVOLVEDORES**************************\n");    
    fprintf(stdout, "*                                                                *\n");
    fprintf(stdout, "* FATEC        -          Carapicuíba            -         2020  *\n");
    fprintf(stdout, "*----------------------------------------------------------------*\n");
    fprintf(stdout, "*                                                                *\n");
    fprintf(stdout, "* Gustavo Bacagine          <gustavo.bacagine@protonmail.com>    *\n");
    fprintf(stdout, "* Caio Elias Emerick Regino <caioregino.147@gmail.com>           *\n");
    fprintf(stdout, "* José Eduardo              <joseeduardoolimpio@gmail.com>       *\n");
    fprintf(stdout, "*                                                                *\n");
    fprintf(stdout, "* O programa semaforo foi criado para a aula de Sistemas         *\n");
    fprintf(stdout, "* Operacionais lecionado pela professora Ana Travassos.          *\n");
    fprintf(stdout, "* Este programa foi feito para poder estudar o uso de semaforos. *\n");
    fprintf(stdout, "*                                                                *\n");
    fprintf(stdout, "******************************************************************\n");
}
