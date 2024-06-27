#include <gtk/gtk.h>
#include "editor_app.h"
#include "editor_win.h"

struct _EditorWindow {
  GtkApplicationWindow parent;
};

G_DEFINE_TYPE(EditorWindow, editor_window, GTK_TYPE_APPLICATION_WINDOW)

static void editor_window_init(EditorWindow* win) {

}

static void editor_window_class_init(EditorWindowClass* win) {

}

EditorWindow *editor_window_new (EditorApp *app)
{
  return g_object_new (EDITOR_WINDOW_TYPE, "application", app, NULL);
}
