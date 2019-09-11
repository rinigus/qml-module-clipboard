# QML Clipboard Module

A simple module for interaction with clipboard from QML. Its based on
implementation by Sune Vuorela, as distributed at
https://cgit.kde.org/scratch/sune/aubergine.git/tree/app/clipboard.h

## API

### Include statement

In QML:

```
import Clipboard 1.0
```


### Properties

* `string `**`text`**: Current contents of the clipboard. By writing
  into this property, the clipboard contents is changed.
  

### Methods

* `void `**`clear()`**: Clears the contents of the clipboard.


