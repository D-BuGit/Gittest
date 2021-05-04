M actually useful
Vim is quite unpleasant out of the box. It’s an arcane experience:

Autocomplete is missing
System clipboard is not used
Act of typing :w to save is cumbersome
Mouse doesn’t work
Management of multiple files is tricky
Ability to indent multiple lines is missing
It does have a significant strength though: your fingers can stay on the main
keyboard keys to do most editing actions. This is faster and more ergonomic. I
find that the toughest part about VIM is guiding people towards getting the
benefits of VIM without the drawbacks. Here are two ideas on how to go about
this.

Switch caps lock and escape
I highly recommend you switch the mapping of your caps lock and escape keys.
You’ll love it, promise! Switching the two keys is platform dependent.
Visual Studio Code
VSCode is the simplest way to give you a fantastic editor that also gives you
the benefits of VIM. Just install the VIM extension.
I made a few slight changes which improved the experience for me.
Configure native VIM
For all the given limitations, you’ll need to find a solution. You can either
solve the issues one by one, or you can use a reference .vimrc settings file
that fix most of the issues out-of-the-box.

My .vimrc file could be a good starting point. Honestly, it’s a bit old and not
the best. I now use VSCode mainly so I haven’t kept a great vimrc.
Using the system clipboard
"+y copy a selection to the system clipboard
"+p paste from the system clipboard
If this doesn’t work, it’s probably because Vim was not built with the system
clipboard option. To check, run vim --version and see if +clipboard exists. If
it says -clipboard, you will not be able to copy from outside of Vim.
For Mac users, homebrew install Vim with the clipboard option. Install homebrew
and then run brew install vim.
then move the old Vim binary: $ mv /usr/bin/vim /usr/bin/vimold
restart your terminal and you should see vim --version now with +clipboard
Sublime Text
Another option is to use Vintageous in Sublime Text (version 3). This gives you
Vim mode inside Sublime. I suggest this (or a similar setup with the Atom
        editor) if you aren’t a Vim master. Check out Advanced Vim if you are.
Vintageous is great, but I suggest you change a few settings to make it better.
Clone this repository to ~/.config/sublime-text-3/Packages/Vintageous, or
similar. Then check out the “custom” branch.
Alternatively, you can get a more updated Vintageous version by cloning the
official repository and then copying over this patch.
Change the user settings (User/Preferences.sublime-settings) to include:
"caret_style": "solid"
This will make the cursor not blink, like in Vim.
Sublime Text might freeze when you do this. It’s a bug; just restart Sublime
Text after changing the file.
ctrl+r in Vim means “redo”. But there is a handy Ctrl + R shortcut in Sublime
Text that gives an “outline” of a file. I remapped it to alt+r by putting this
in the User keymap
{ "keys": ["alt+r"], "command": "show_overlay", "args": {"overlay": "goto",
    "text": "@"} },
    Add the ability to toggle Vintageous on and off
    Mac users: you will not have the ability to hold down a navigation key (like
            holding j to go down). To fix this, run the commands specified here:
    https://gist.github.com/kconragan/2510186
    Now you should be able to restart sublime and have a great Vim environment!
    Sweet Dude.
    Other
