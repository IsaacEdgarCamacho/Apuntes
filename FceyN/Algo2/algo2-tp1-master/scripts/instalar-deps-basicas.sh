#!/bin/bash
echo "Vamos a instalar algunas cosas básicas para trabajar con LaTeX y con C++:

* texlive-full: todas las herramientas y bibliotecas de LaTeX que necesitamos
* texmaker: IDE para LaTeX (uso opcional)
* build-essential: bibliotecas de C/C++ y make
* valgrind: análisis de uso de memoria

Pidiendo permisos de administrador...
"

LATEX_TOOLS="texlive-full texmaker"
CPP_TOOLS="build-essential valgrind"
sudo apt-get install $LATEX_TOOLS $CPP_TOOLS