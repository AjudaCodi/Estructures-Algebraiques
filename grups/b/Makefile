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

5:
	rm 5* -f
	latex ../motor/5.tex
	dvipdf 5.dvi
6:
	rm 6* -f
	latex ../motor/b/6.tex
	dvipdf 6.dvi
