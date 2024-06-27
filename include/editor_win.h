#ifndef EDITOR_WIN_H_
#define EDITOR_WIN_H_

#include <gtk/gtk.h>
#include "include/editor_app.h"

G_BEGIN_DECLS

#define EDITOR_WINDOW_TYPE (editor_window_get_type())
G_DECLARE_FINAL_TYPE(EditorWindow, editor_window, EDITOR, WINDOW, GtkApplicationWindow)

G_END_DECLS

EditorWindow* editor_window_new(EditorApp *app);

#endif // EDITOR_WIN_H_
