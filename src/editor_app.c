#include "gdk/gdk.h"
#include <gtk/gtk.h>
#include <editor_app.h>
#include <editor_win.h>

struct _EditorApp {
  GtkApplication parent;
};

G_DEFINE_TYPE(EditorApp, editor_app, GTK_TYPE_APPLICATION)

static void editor_app_activate(GApplication *app) {
  EditorWindow *win;

  win = editor_window_new(EDITOR_APP(app));

  gtk_window_set_title(GTK_WINDOW(win), "Editor");
  gtk_window_set_default_size(GTK_WINDOW(win), 600, 600);

  GtkCssProvider *provider = gtk_css_provider_new();
  gtk_css_provider_load_from_path(provider, "ui/gtk.css");

  gtk_style_context_add_provider_for_display(gdk_display_get_default(), GTK_STYLE_PROVIDER(provider), GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);

  gtk_window_present(GTK_WINDOW(win));
}

static void editor_app_init(EditorApp* app) {
    g_print("Editor has started.");
}

static void editor_app_class_init(EditorAppClass *klass) {
  G_APPLICATION_CLASS(klass)->activate = editor_app_activate;
}

EditorApp* editor_app_new(void) {
  return g_object_new(EDITOR_APP_TYPE, "editor-id", "com.github.koficenti", "flags", G_APPLICATION_HANDLES_OPEN, NULL);
}
