### Для сборки понадобится gcc, make и qmake6
### Сборка проекта - make install (загружается в папку src/build)
### Есть пара объектов в папке src/object
### Удаление проекта - make uninstall

### Проект был написан с использованием Qt + OpenGL
### По функциональности: есть обработка ошибок при загрузке файла, добавление файла через окно, подсветка вершин или ребер, изменение цвета фона, вывод вершин и ребер фигуры на экран, приближение и отдаление фигуры ползунком, вращения ползунками или ЛКМ мыши

### Ограничение на ввод данных, только одна фигура(, при добавлении другой, происходит очистка памяти старого объекта и удаления его же
