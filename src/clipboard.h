/*
    Copyright (c) 2017 Sune Vuorela <sune@vuorela.dk>

    Permission is hereby granted, free of charge, to any person
    obtaining a copy of this software and associated documentation
    files (the "Software"), to deal in the Software without
    restriction, including without limitation the rights to use,
    copy, modify, merge, publish, distribute, sublicense, and/or sell
    copies of the Software, and to permit persons to whom the
    Software is furnished to do so, subject to the following
    conditions:

    The above copyright notice and this permission notice shall be
    included in all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
    OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
    NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
    HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
    WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
    OTHER DEALINGS IN THE SOFTWARE.
*/

#ifndef CLIPBOARD_H
#define CLIPBOARD_H

#include <QQuickItem>

#include <QClipboard>
#include <QString>
class Clipboard : public QQuickItem
{
    Q_OBJECT
    Q_PROPERTY(QString text READ text WRITE setText NOTIFY changed)
    Q_PROPERTY(QClipboard::Mode mode READ mode WRITE setMode NOTIFY modeChanged)  // defaults to clipboard // maybe should be treated as ints and converted in the setMode function...
public:
    Clipboard(QQuickItem *parent=nullptr);
    QString text() const;
    void setText(const QString& data);
    /*todo image and stuff*/
    /// The clipboard mode to work on
    void setMode(QClipboard::Mode mode);
    QClipboard::Mode mode() const;

    Q_INVOKABLE void clear();
Q_SIGNALS:
    void changed();
    void modeChanged();
private:
    QClipboard::Mode m_mode;
};

#endif // of CLIPBOARD_H
