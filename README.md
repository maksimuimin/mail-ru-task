# Тестовое задание на позицию стажёра - Backend-разработчика в команду разработки автоматизации Почты Mail.ru, Выполнил Уймин М.С. [резюме](https://yadi.sk/i/9V20fN3Xa5VuEg)
## Запуск проекта
Для запуска проекта необходимо выполнить скрипт `main.sh`, он скомпилирует и соберёт проект, прогонит все тесты и добавит исполняемый файл TCP клиента в PATH (только в рамках текущей терминальной сессии)
## Структура проекта
* Все заголовочные файлы можно найти в директории `include`
* Исходный код лежит в директории `src`
* Код тестов лежит в директории `test`
* Сборка проекта осуществляется с помощью `CMake версии >= 3.0.0` 
* Файлы, генерируемые во время сборки, помещаются в директорию `tmp`
* Исполняемые файлы лежат в директории `tmp/bin`
## Известные проблемы
1. На данный момент, чтение и запись сокета осуществляются единым пакетом фиксированного размера. Из-за этого иногда падает второй тест из-за рассинхронизации основного потока и потока, в котором запущен mock сервера.
2. CMakeLists.txt написан таким образом, что в случае запуска `cmake .` из корневой директории проекта, в неё попадает большое количество временных файлов. В случае ручного запуска CMake это следует делать из директории `tmp` командой `cmake ..`
3. Не успел полностью покрыть код тестами