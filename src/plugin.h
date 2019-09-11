#ifndef CLIPBOARDPLUGIN_H
#define CLIPBOARDPLUGIN_H

#include <QQmlExtensionPlugin>

class ClipboardPlugin : public QQmlExtensionPlugin
{
  Q_OBJECT
  Q_PLUGIN_METADATA(IID QQmlExtensionInterface_iid)

public:
  ClipboardPlugin(QObject *parent = Q_NULLPTR);

  virtual void registerTypes(const char *uri) override;
};

#endif // CLIPBOARDPLUGIN
