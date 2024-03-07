<!DOCTYPE html>
<html lang="es">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>
    <div class="container">
        <p align = "center">
         <img src=./pipex_1.gif width="800"/></p>
        <p align = "center">Proyecto de 42 Madrid</p>
        <h2>Índice</h2>
        <ul>
            <li><a href="#intro">Introducción</a></li>
            <li><a href="#funciones">Funciones</a></li>
            <!-- Agrega más enlaces a otras secciones si es necesario -->
        </ul>
        <h2 id="intro">Introducción</h2>
        <p>El proyecto Push Swap es un ejercicio de programación donde debes ordenar una pila de números utilizando un conjunto limitado de operaciones de manipulación, como swap, push y rotate, con el objetivo de organizar la pila en orden ascendente en la pila A, utilizando la pila B como apoyo, todo ello con la menor cantidad de movimientos posible.</p>
        <p>Son varios los algoritmos que se pueden utilizar de forma efectiva, como Radix, Sort list, etc. Mi proyecto se basa en este "https://medium.com/@ayogun/push-swap-c1f5d2d41e97"</p>
        <h2 id="funciones">Funcionamiento paso a paso</h2>
        <p>Empezamos creando dos Stack (A y B)</p>
        <img src= ./stack_vacio.
        <p><h4><code>open():</code></h4>Esta función nos permite abrir un archivo dentro de un programa. Nos permite acceder a ese archivo para leer, escribir en él, etc.</p>
        <p>Ejemplo:<code>fd_infile = open("text.txt", O_RDONLY);</code>Con esto le hemos dado permiso para abrirlo y solo leerlo (O_RDONLY).</p>
        <p><h4><code>close():</code></h4>Esta la usaremos para cerrar el archivo que hemos abierto antes. Al cerrarlo, liberamos los recursos asociados con ese archivo en el sistema operativo (liberación de memoria y otro recursos para gestionar el archivo).</p>
        <p>Ejemplo:<code>close(fd_infile)</code>
        <p>También utilizamos <code>close()</code> para cerrar el fd del pipe que no vamos a utilizar, aunque eso lo explico en <code>pipe()</code></p>
        <p><h4><code>read():</code></h4>Una vez abierto el archivo con <code>open()</code>, esta función nos permite leer los datos que hay en ese archivo.</p>
        <p>Ejemplo: <code>ssize_t bytes_leidos = read(fd_infile, buffer, sizeof(buffer))</code>. Este ejemplo lee datos del archivo y los almacena en búfer</p>
        <p><h4><code>access():</code></h4>Se utiliza para verificar si un proceso tiene acceso o no a un archivo o directorio</p>
        <p>Ejemplo: <code>if (access("example.txt", R_OK) != -1)</code>. En esta condición <code>if</code> verificamos que <code>"example.txt"</code> se pueda abrir para lectura <code>(R_OK)</code> (-1 sería error).
        <p><h4><code>dup()</code> y <code>dup2():</code></h4>Estas dos funciones crean una copia del descriptor de archivo (<code>fd[]</code>). La diferencia es que <code>dup()</code> asigna el número más bajo disponible a la nueva copia, mientras que <code>dup2()</code> nos permite elegir el número de <code>fd[]</code> donde vamos a copiarla. Si el número que le asignamos ya está en uso, <code>dup2()</code> lo cierra antes de asignarlo a la nueva copia. En Pipex, he usado <code>dup2()</code> únicamente.</p>
        <p>Ejemplo: Con <code>dup()</code>: <code>int new_dup = dup(descriptor_original);</code>. Con <code>dup2()</code>: <code>dup2(descriptor_original, nuevo_descriptor)</code></p>
        <p><h4><code>execve():</code></h4> Con ella ejecutamos un programa, especificando la ruta del programa, sus argumentos y varias de entorno <code>envp[]</code>. Reemplaza el proceso actual con el nuevo programa ejecutable especificado</p>
        <p>Ejemplo: <code>if (execve(path, arg_cmd, envp) == -1)</code>. Este es un extracto de mi código, en él tenemos la ruta (path), los argumentos (arg_cmd), y la variable de entorno. El <code>if</code> verifica si existe algún error<code>execve()</code> (== -1)</p>
        <p><h4><code>fork():</code></h4>Este es de los puntos más importantes del proyecto Pipex, la creación de hijos. Con esta función creamos un duplicado del proceso existente (proceso padre) al que llamaremos proceso hijo. Ambos procesos se ejecutan de forma simultánea. Tienen PID (process id) distintos</p>
        <p>Ejemplo: <code>t_pid pid = fork();</code>
        <p><code>pipe()</code>:</p>
        <p><code>unlink()</code>:</p>
        <p><code>wait()</code>:</p>
        <p><code>waitpid</code>:</p>
        
    </div>
</body>
</html>
