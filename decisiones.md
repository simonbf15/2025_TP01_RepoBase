Punto 1: Configurar tu entorno y preparar tu repositorio
Primero cloné el repo desde github con:

git clone https://github.com/ingsoft3ucc/2025_TP01_RepoBase.git

Para configurar mi perfil de github en el sistema:

git config --global user.name "simonbf15"
git config --global user.email "barralesimon@gmail.com"



Punto 2: Desarrollar una funcionalidad

Para trabajar en una rama separada de main primero creamos la branch nueva, y nos movemos a la misma con los comandos:

git branch branchFuncionalidad
git checkout branchFuncionalidad

Fuimos trabajando en el código (en c++) para una calculadora muy básica, haciendo los commits con:
git commit -m "texto..."

Creamos esta nueva rama porque lo pedía la consigna y para no modificar la branch main y luego poder mergearlo cuando esté todo ok.
Cada commit tiene su fundamento en que explica a grandes rasgos que es lo que se agrega.

Punto 3:
