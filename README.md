<!DOCTYPE html>
<html lang="es">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>
    <div class="container">
        <p align = "center">
         <img src=./push.png width="800"/></p>
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
        <img src= ./stack_vacio.png/ width = "300">
        <p>En Stack A volcaremos toda la pila de números que nos proporcionen</p>
        <p>En este ejemplo vamos a incluir 8 números aleatorios, evidentemente sin ordenar</p>
        <img src= ./stack_a1.png/ width = "300">
        <p>¡Listo!</p>
        <p>El siguiente paso, es crear un índice e indexar los números de nuestra lista de menor a mayor. </p>
        <img src= ./create_index.png/ width = "300">
        <p>Ahora debemos pasar a stack B todos aquellos números, en los que su índice sea menor a la mitad. Por ejemplo, si tenemos 8 números como en mi lista, la mitad sería 4 + 1 (+ 1 por los casos en que nuestra lista sea impar). E iremos comparando nuestro índice con ese 4 + 1. Si es menor irá para stack B, si no lo es, lo rotaremos al final. Así hasta que deje de cumplirse la condición</p>
        <p>Cuando se deje de cumplir empujaremos el resto de números, sin distinción, excepto los 3 más grandes</p>
        <img src= ./rotate.png width = "300">
        <img src= ./number_p.png width = "300">
        <img src= ./stackb.png width = "300">
        <p>LLega un momento en que la condición de "la mitad más 1" deja de cumplirse por la escasez de números que vamos dejando en Stack A, en ese caso, le diremos que empuje el resto de números que nos queden menos los 3 más grandes (dibujo derecho).</p>
        <p>Una vez tenemos los más pequeños en stack B, vamos a ordenar los 3 números más grandes que nos quedaron en Stack A (seguimos manejando el index como forma de ordenamiento).
        <p>Y nos quedaría así</p>
        <img src= ./sa_A.png width = "300">
        <p>Ahora lo que tenemos que hacer es calcular costes.</p>
        <p>Básicamente analizaremos uno por uno todos los números (índices) de Stack B e iremos pasando el que menos movimientos nos cueste</p>
        <p>Para ello, tendremos que calcular cuántos movimientos nos costaría subir el número(índice) a la primera posición de la lista, el movimiento para pasarlo a la lista de Stack A y cuántos movimientos necesitaremos para que ese número(índice) esté en su posición final.</p>
        <p>*Falta explicación*</p>
    </div>
</body>
</html>
