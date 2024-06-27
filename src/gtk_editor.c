#include <gtk/gtk.h>
#include <editor_app.h>

#define PROJECT_NAME "gtk-editor"

int main(int argc, char **argv) {
    return g_application_run(G_APPLICATION(editor_app_new()), argc, argv);
}
