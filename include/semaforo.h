/* Git Hub: https://github.com/Bacagine/Semaforo
 * 
 * Copyright (C) 2020
 * 
 * semaforo.h: Biblioteca com o prototipo das funções do programa semaforo
 * 
 * Biblioteca criada por Gustavo Bacagine <gustavo.bacagine@protonmail.com>
 * 
 * Este programa é software livre; você pode redistribuí-lo e/ou modificá-lo
 * sob os termos da GNU General Public License conforme publicada pela Free
 * Software Foundation; quer a versão 2 da licença, ou (conforme você escolha)
 * qualquer versão posterior.
 * 
 * Este programa é distribuído com a esperança de que seja útil, mas SEM
 * QUALQUER GARANTIA; mesmo sem a garantia implícita de MERCANTIBILIDADE OU
 * ADEQUAÇÃO A UM DETERMINADO PROPÓSITO. Para mais detalhes, veja a
 * GNU General Public License.
 * 
 * Você deve ter recebido uma cópia da GNU General Public License juntamente
 * com este programa; caso contrário, veja <https://www.gnu.org/licenses/>
 * 
 * Data: 03/06/2020
 * Data da última modificação: 03/06/2020
 */

#ifndef _SEMAFORO_H
#define _SEMAFORO_H

#include <stdlib.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/sem.h>
#include <unistd.h>

// Versão da aplicação
#define VERSION "semaforo 20.06.03 (amd64)"

/* Mensagem de ajuda
 * para o usuário */
#define HELP "Usage: semaforo [option]\n\
\nPrograma criado para a aula de Sistemas Operacionais lecionado\n\
pela professora Ana Travasso.\n\
Este programa foi criado para poder estudar o uso de semaforos.\n\
\n\
Argumentos:\n\
  -v, --version             Imprimir a versão e sai\n\
  -h, --help                Imprimir a ajuda (esta mensagem) e sair\n" 

// Licença da aplicação
#define LICENSE "../LICENSE"

extern errno;

/*  */
void semaforo(void);

/* Mostra os Desenvolvedores
 * do programa */
void developers(void);

#endif
