Chess Game

Проект "Chessops" разработан в рамках олимпиады "Траектория будующего" по номинации "DevOps".
Это консольное приложение для игры в шахматы (упрощенная версия), написанное на языке C++. 

Приложение предоставляет возможность решить задачу о том, от какой фигуры (слона и/или ладьи) есть угроза королю на шахматной доске.

Установка
Для установки приложения на локальном компьютере необходимо выполнить следующие шаги:

Склонировать репозиторий на локальный компьютер:

  git clone https://github.com/username/chess-game.git
  
Перейти в папку с проектом:

  cd Chessops
  
Собрать проект с помощью CMake:

  mkdir build
  
  cd build
  
  cmake ..
  
  make
  
Запустить приложение:

  ./chess
  
Использование

Решение задачи

Приложение позволяет пользователю ввести координаты фигур на шахматной доске и выяснить, от какой фигуры есть угроза королю. После ввода координат приложение выводит сообщение о том, есть ли угроза королю и от какой фигуры она исходит.

Тестирование

Для тестирования приложения используется библиотека Google Test. Тесты располагаются в папке tests и могут быть запущены после сборки проекта командой:

  make test


