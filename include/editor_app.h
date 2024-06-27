#ifndef EDITOR_APP_H_
#define EDITOR_APP_H_

#include <gtk/gtk.h>

G_BEGIN_DECLS

#define EDITOR_APP_TYPE (editor_app_get_type())
G_DECLARE_FINAL_TYPE(EditorApp, editor_app, EDITOR, APP, GtkApplication)

G_END_DECLS

EditorApp *editor_app_new(void);

#endif // EDITOR_APP_H_
