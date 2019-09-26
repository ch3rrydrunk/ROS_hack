# ROS Hackathon Repository

## Задача
По голосовой команде, отследить местонахождения "фермы губок", обойти все препятствия, подобрать губку требуемого цвета и вернуться на стартовую позицию

## Функциональное задание
1. Запуститься по голосовой команде 'Вперед'
2. Найти ферму в пространстве [камера + сервоприводы]
2. Добраться до фермы, обходя препятствия [лидар + сервоприводы + навигация]
3. На ферме запросить цвет губки [микрофон ]
4. Подобрать губку [клешня + сервоприводы + камера]
5. Вернуться на изначальную точку [сервоприводы ]

## Структура проекта
* Пакет с основной логикой
* Пакет для работы с лидаром
* Пакет для работы с камерой
* Пакет для работы с голосом
* Пакет для работы с клешней

## Спринт 1
- [ ] Организовать структуру проекта
	- [ ] Cписок и схема нод
	- [ ] Список топиков
- [ ] Создать шаблон прошивки робота [Илья && Юра]
	- [ ] Запустить работа с управлением с компьютера [Илья && Юра]
	- [ ] Положить все файлы в папку /bot_template [Илья && Юра]
- [ ] Организовать считывание и обработку фотографий [Миша ]
- [ ] Организовать считывание и обработку показаний лидара [Рустам ]
- [ ] Организовать считывание и обработку голосовых команд [Сережа ]
- 

## Настройка рабочего окружения
0. Установка ROS: http://wiki.ros.org/melodic/Installation
Перед началом работы необходимо:
1. Проверить, что все переменные среды установлены (env | grep ROS), если нет, то 
  http://wiki.ros.org/melodic/Installation раздел вашего дистрибутива и там пункт **Environment setup**.
2. Развернуть среду `source devel/setup.bash`
3. Изучить команды из ROScheatsheet.pdf
