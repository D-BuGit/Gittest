# <span style="color:#ff8080"> **Vim Cheatsheet** </span>
## <span style="color:#8000ff"> **Mode Switching** </span>

| Command     | Task                                              |
|:------------|:--------------------------------------------------|
| **i**       | Enter insert mode                                 |
| **:**       | Enter command mode                                |
| **R**       | Enter replace mode                                |
| **v**       | Enter visual mode (highlighting)                  |
| **V**       | Enter visual line mode (highlighting lines)       |
| **esc**     | Return to normal mode from insert or replace mode |
| **esc+esc** | Return to normal mode from command or visual mode |

## <span style="color:#8000ff"> **Navigation** </span>
### <span style="color:#02adff"> **_Basic navigation_** </span>


| Command | Task                  |
|:--------|:----------------------|
| **h**   | Move left             |
| **j**   | Move down             |
| **k**   | Move up               |
| **l**   | Move right            |
| **L**   | Bottom line on screen |
| **M**   | Middle line on screen |
| **H**   | Top line on screen    |


### <span style="color:#02adff"> **_Advanced navigation_** </span>

| Command  | Task                                           | Example                           |
|:---------|:-----------------------------------------------|:----------------------------------|
| **[n]j** | Move down n lines                              | 10j &rarr; Move down 10 line      |
| **[n]k** | Move up n lines                                | 12j &rarr; Move up 12 line        |
| **[n]h** | Move left n lines                              | 11h &rarr; Move left 11 line      |
| **[n]l** | Move riwht n lines                             | 15l &rarr; Move right 15 line     |
| **gg**   | First line of the file                         |                                   |
| **G**    | Last line of the file                          |                                   |
| **:[n]** | Go Line 20 of the file                         | :20 &rarr; Go Line 20 of the file |
| **e**    | The end of the current word                    |                                   |
| **b**    | Beginning of current word                      |                                   |
| **w**    | Beginning of next word                         |                                   |
| **0**    | Beginning of current line                      |                                   |
| **^**    | First non-whitespace character of current line |                                   |
| **$**    | End of current line                            |                                   |
| **%**    | Move to matching parenthesis, bracket or brace |                                   |


## <span style="color:#8000ff"> **Editing** </span>

| Command    | Task                                                         |
|:-----------|:-------------------------------------------------------------|
| **i**      | Insert before current character                              |
| **a**      | Insert after current character                               |
| **I**      | Insert at the first non-whitespace character of the line     |
| **o**      | Insert a line below the current line, then enter insert mode |
| **O**      | Insert a line above the current line, then enter insert mode |
| **r**      | Overwrite one character and return to command mode           |
| **U**      | Undo                                                         |
| **Ctrl+R** | Redo                                                         |


## <span style="color:#8000ff"> **Opening, closing and saving files** </span>

| Command          | Task                                                                                 |
|:-----------------|:-------------------------------------------------------------------------------------|
| **:w**           | Save the current file                                                                |
| **:wq**          | Save the current file and close it; exits vim if no open files remain                |
| **:w newname**   | Save a copy of the current file as 'newname', but continue editing the original file |
| **:sav newname** | Save a copy of the current file as 'newname' and continue editing the file 'newname' |
| **:q!**          | Close a file without saving                                                          |
| **:e**           | somefile Opens file in the current buffer                                            |
| **:x**           | Write any changes to the file and close the file                                     |


## <span style="color:#8000ff"> **Copy/pasting** </span>

### <span style="color:#02adff"> **_Within vim_** </span>

| Command | Task                                  |
|:--------|:--------------------------------------|
| **y**   | Yank                                  |
| **c**   | ‘Change’; cut and enter insert mode   |
| **C**   | Change the rest of the current line   |
| **d**   | Delete; cut but remain in normal mode |
| **D**   | Delete the rest of the current line   |
| **p**   | Paste after the cursor                |
| **P**   | Paste before the cursor               |
| **x**   | Delete characters after the cursor    |
| **X**   | Delete characters before the cursor   |

### <span style="color:#02adff"> **_Advanced navigation_** </span>
Copy/paste commands operate on the specified range. If in visual mode, that range is the
highlighted text. If in normal mode, that range is specified by a series of modifiers to the
commands:

| Command | Task                                    |
|:--------|:----------------------------------------|
| **cw**  | Change one word                         |
| **ciw** | Change one word                         |
| **c4w** | Change four words                       |
| **c4l** | Change four letters                     |
| **cc**  | Change current line                     |
| **4x**  | Change four characters after the cursor |
| **4p**  | Paste five times after the cursor       |
Modifiers work similarly for cut, delete, yank and paste.
### <span style="color:#02adff"> **_Advanced navigation_** </span>
From system clipboard

| Command      | Task                              |
|:-------------|:----------------------------------|
| :set paste   | Enter paste mode                  |
| :set nopaste | Exit paste mode                   |
| Ctrl+Shift+V | Paste into file, if in paste mode |










<!-- |  |  |  |
| Command | Task | Example |
|:--|:--|:--| -->