# Data_Structures_and_Algorithms
# САКОД
## 2 Factormod
<br>Факторизация полиномов над конечным полем 2
<br>NB - Обязательное использование метода Жордана Гаусса - приводящего к матрице вида RREF.
<br>В ином случае, вычисление собственных векторов матрицы без вида RREF приведет к комплексным числам (очевидно)
<br>В дальнейшем код будет переписан на язык Python.
<br>Текущий алгоритм раскладывает СВОБОДНЫЕ от квадратов полиномы - не реализован алгоритм SQFF
<br>Пример ввода: 
<br>Если имеется полином вида: x^5 + x^4 + 1
<br>То входные данные будут: 5 4 0 (записываем только позиции на которых есть единицы)
<br>Для особо умных, которые считают "раз конечное поле 2" то все математические операции будут как в Булевой алгебре
<br>Прошу обратиться с местный ВУЗ на кафедру математики для получения два и дальнейшего отстранения от работы
<br>Для тех - кто действительно хочется разобраться:
<br>1*x^5 + 1*x^4 + 0*x^3 + 0*x^2 + 0*x^1 + 1*x^0 (расписали факториал x^5 + x^4 + 1 наглядно)
<br>прибавив единицу (то есть 1*x^0) - получим: 1*x^5 + 1*x^4 + 0*x^3 + 0*x^2 + 0*x^1 + 2*x^0
<br>НО не забудьте после этого применить mod(2) для каждого коэффициэнта
<br>То есть, финальный результат - 1*x^5 + 1*x^4 + 0*x^3 + 0*x^2 + 0*x^1 + 0*x^0
<br>Распишем без X ниже:
<br>110001 + 1 = 110000
<br>Операции сложения и умножения над конечным полем != операции сложения и умножения в булевой алгебре
<br>В Булевой алгебре мы представляем числа в двоичной системе
<br>В конечном поле Галуа 2 число 1 - максимальное и существуют только 0 и 1






