/**
 *       @file  hello.c
 *      @brief  primeiro ficheiro de GTK
 *
 * Descrição mais detalhada do ficheiro que até poderiam incluir links para imagens etc.
 *
 *     @author  Luís Ricardo Ferreira, luisricardo@ua.pt
 *
 *   @internal
 *     Created  15-Nov-2017
 *     Company  Departamento de Engenharia Mecânica
		    Universidade de Aveiro
 *   Copyright  Copyright (c) 2017, Luís Ricardo Ferreira
 *
 */ 
#define _MAIN_C_

#include <signal.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ncurses.h>
#include "pcolor.h"
#include <string.h>
#include <sys/time.h>
#include <errno.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <gtk/gtk.h>
#include "myf.h"

int main(int argc, char *argv[])
{





   gtk_init(&argc, &argv);

        /* load the interface after a configuration file*/
        builderG = gtk_builder_new();//cria o 1º ponteiro para a interface gráfica, preenchida com as descriçoes
        gtk_builder_add_from_file(builderG, "mydr2.glade", NULL);// carrega a interface gráfica- diz qual é o ponteiro e o ficheiro da interface grafica

        /* connect the signals in the interface */
        gtk_builder_connect_signals(builderG, NULL);// liga os sinais(eventos) tipo qual é a callback q é executada qd por exemplo o rato passa por cima de um objecto

        /* get main window Widget ID and connect special signals */
        GtkWidget *t = GTK_WIDGET(gtk_builder_get_object(builderG, "window1"));//pede à interface gráfica o id da janela ** GTK_WIDGET muda a tipologia do ponteiro impõe o cast certo da variável
        if(t)//se existir a window1 liga mais dois eventos
        {
                g_signal_connect(G_OBJECT(t), "delete_event", G_CALLBACK(pari_delete_event), NULL);// intercepta o delele da janela (botão x)
        }

        // use signal to catch SIGINT  (CTRL-C) - optional
        signal(SIGINT, InterceptCTRL_C);
	  
        /* start the event loop */
        gtk_main();

        g_timeout_add(30, (GSourceFunc) pari_UpdateImageAreas, (gpointer) NULL);
        captureG=pari_StartImageAcquisition();

        /* start the event loop */
        gtk_main();

        cvReleaseCapture(&captureG);             //Release capture device.
        cvReleaseImage(&dst_imageG);             //Release image (free pointer when no longer used)
        cvReleaseImage(&src_imageG);             //Release image (free pointer when no longer used).
        return 0;


}


