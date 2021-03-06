#ifndef M_FILE_H
#define M_FILE_H

#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <dirent.h>
#include <glob.h>
#include <glib.h>
#include <gdk-pixbuf/gdk-pixbuf.h>
#include <libnotify/notify.h>
#include <unistd.h>
#include <gmime/gmime.h>
#include <string.h>

#define NOT_FOUND 0
#define DELETE_ENTITY -1
#define FOUND 1

#define HISTORY_FILE "history"

#include "notify.h"
#include "mail.h"

#endif

int mb_lookup_key (const char*, const char*, char*);
int inbox_apply(const char*, void (*)(gpointer, gpointer, gpointer), struct mbangopt);
int write_notification_history(GHashTable *);
GHashTable *read_notification_history(void);
