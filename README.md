1. En el lugar nuevo (Clonación y navegación)
Cuando descargas el proyecto, Git crea una nueva carpeta con el nombre del repositorio.
Si no entras en ella, estarás intentando programar en el "aire".

Los pasos correctos son:

Clonar: git clone https://github.com/MaestroUTN/Ejemplo.git

Entrar a la carpeta (Crítico): cd Ejemplo

Abrir VS Code en esa ruta: code .
(Este comando abre una nueva ventana de VS Code directamente en la carpeta del proyecto).

2. Configuración de .gitignore (Evita errores de compilación)
Para que PlatformIO no cause problemas al pasar de la oficina a la casa,
debemos ignorar los archivos que tu PC genera localmente.

Crea un archivo llamado .gitignore en la raíz de tu proyecto y pega exactamente esto:

.pio/
.vscode/
*.exe
*.o
*.bin
*.out
.DS_Store
Thumbs.db

¿Por qué esto? Porque la carpeta .pio contiene la compilación específica de tu computadora de la oficina. 
Si la subes y luego la descargas en casa, PlatformIO podría intentar usar archivos binarios que no 
corresponden a esa PC y darte errores extraños.

3. Actualización y Sincronización (¿Hay que forzar?)
¿Cuándo forzar (--force)?
Solo se usa en situaciones de emergencia (como cuando corregimos tu URL duplicada).
En el día a día, no debes forzar. Si lo haces, podrías borrar accidentalmente cambios que hiciste en la
oficina y que olvidaste bajar en casa.

El flujo correcto para actualizar sin romper nada:

En el destino (Al llegar):
Si ya tienes la carpeta, pero quieres los avances de la oficina:

Abre la terminal en la carpeta del proyecto.

git pull origin main
(Esto fusiona los avances de la nube con tu código local de forma segura).

Al terminar (Para enviar):
Para que los cambios se reflejen en GitHub y estén listos para cuando regreses al trabajo:

git add .

git commit -m "Descripción clara de lo que avanzaste"

git push origin main

Resumen de la "Rutina Segura" para Edgar:
Llego: git pull (Traigo lo nuevo).

Trabajo: Programo mi ESP32-CAM y verifico que el .gitignore esté presente.

Me voy: git add ., luego git commit -m "..." y finalmente git push.

Si en algún momento el git pull te da un error de "conflictos", significa que modificaste el mismo archivo en 
ambos lugares sin sincronizar.
