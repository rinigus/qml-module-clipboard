#include "plugin.h"
#include "clipboard.h"

ClipboardPlugin::ClipboardPlugin(QObject *parent):
  QQmlExtensionPlugin(parent)
{
}

void ClipboardPlugin::registerTypes(const char *uri)
{
  Q_ASSERT(uri == QLatin1String("Clipboard"));
  qmlRegisterType<Clipboard>(uri, 1, 0, "Clipboard");
}
