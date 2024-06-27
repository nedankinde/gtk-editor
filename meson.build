project('gtk-editor', 'c',
  version : '0.1',
  default_options : ['warning_level=3'])

exe = executable('gtk-editor',
  'src/gtk_editor.c',
  'src/editor_app.c',
  'src/editor_win.c',
  include_directories: 'include',
  dependencies : [dependency('gtk4', version: '>=4.0')],
  install : true)

test('basic', exe)
