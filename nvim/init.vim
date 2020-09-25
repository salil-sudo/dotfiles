

source $HOME/.config/nvim/vim-plug/plugins.vim
set relativenumber
set number
set termguicolors



" the configuration options should be placed before `colorscheme miramare`
let g:miramare_enable_italic = 1
let g:miramare_disable_italic_comment = 1

colorscheme gruvbox
"colorscheme wal

source $HOME/.config/nvim/vim-plug/plugins.vim

vnoremap gc "+y
map gv "+p


" Automatically deletes all trailing whitespace and newlines at end of file on save.
autocmd BufWritePre * %s/\s\+$//e
autocmd BufWritepre * %s/\n\+\%$//e
