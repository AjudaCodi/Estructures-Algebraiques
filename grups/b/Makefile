all: loli.pdf
loli.pdf: loli.dvi
	dvipdf loli.dvi
loli.dvi: loli.toc
	latex ../motor/loli.tex
loli.toc:
	latex ../motor/loli.tex

clear:
	rm lol* -f
d: clear all

a:
	rm a* -f
	latex ../motor/a.tex
	dvipdf a.dvi
