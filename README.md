# Классы и объекты
## Базовые понятия ООП
Начнем с того что есть недостаком функционального и процедурного программирования.
К примеру у нас есть концепт очереди. То функциональьный подход разделяет данные и алгоритмы работы с этой очередью. Т.е. алгоритм и данные с которыми работает эта очередь есть две независимые сущности.
Например, добавление элемента в очередь
```
push_queue(queue, value);
``` 
как видим нам необходимо передавать саму очередь как параметр, то есть мы разделяем как и что.
Да можно например определить реализацию функционального подхода как отдельный модуль трансляции, определив например как статическую переменную внутри этого модуля, и вызывать просто интерфейсные функции работы с очередью. Но проблема что этот подход реализован для одного экземпляра. Ну будучи честным есть реализации ООП с помощью функционального подхода.

Программирования с помощью ООП подхода решает эту проблему, т.е. призван решить ее, он рассматривает и алгоритмы и данные как единую сущность.
Далеко отходя от понятий, хочу сказать что сам ООП, т.е. его философия, она не такая как ее реализовывает язык. К примеру когда зарождалась идея ООП, т.е. хотели предоставить идею клеточного организма которые общаються между собой сообщениями. Сам создатель ООП подхода, сказал что он не имеел ввиду ООП как С++.
ООП это подход, стиль программирования, модульность, и т.д. Подхода к описанию очень много. Мной импанирует смысл, это то что ООП призван представить нам наш реальний мир, т.е. выразить все как абстрация, и как объектность. Т.е. к примеру выразить абстракность автомиль форд, а вот его объект это реализация этой абстракции. Объект он представляет из себя данные(характеристики, которые описывают этот объект ) и поведение(т.е. то как управлять этим объектом). Например у нас есть объект у которого есть атрибуты модель, тип двигателя, тип авто, пробег. И есть методы упраления объектом, как внутрение, как внешние. Внешние мы даем наружу чтобы им или управляли, или модифицировали(т.е. меняли состояние), тогда как внутрение это то что происходит внутри объекта. Возращаясь к авто мы имеем внешний интерфейс, нажатия на педаль газа, при этом когда мы вызвали этот интерфейс(послали сообщение объекту), то нутри объекта начинает происходить много измениний, т.е. объект начал менять свое сотоянии, вызываеться внутриние методы работы с двигателем, раскрутка колесс, и т.д.
Хух, что то сказал)

Базовой единицей в ООП есть класс, это и есть инкапсуляция данных и методов(поведения) в единую коробоку. И который предоставляет интерфейс для работы с этой коробкой. И в связи что класс это хорошо инкапсулированаясущность, его удобно переиспользовать или изменять не влияя на внешний интерфейс. Возращаясь к функциональному программированию, скажем так что ООП объединяет данные и алгоритмы работы с этими данными в одну и ту же коробочку.
ООП подход это высокоуровневая абстракция которая призвана решать больше проблему, чем думать на тем как его решать(как представить эти данные к памяти и т.д.), для использующего ваш класс. Хороший пример это контейнер, который у себя инкапсулирует сложную логику выделения памяти, переноса памяти, для вас это прячится за кулисами этого класса, вы просто вызываете методы добавления в вектор, удаления, и вас не парит все сложности.

Но есть и большая избыточность использования этого ООП, люди начинают все в своей программе рассматривать как класс. Еще раз ООП призван решить более сложные технические объекты. Например нет смысла писать какойто парсер ввиде класса, когда его целью есть просто взять с файла данные представленные в одном формате, прдставить его в другом формате. Т.е. смысл этого то что даному парсеру не нужно состоянии. И это есть базовое понятие, т.е. в ООП это возможность сохранять состоянии (например, перемещения игрока по полю, его прокачанные скилы). А вот если не нужно состояние, то для этого прекрасно работает как раз и функциональное програмировние.
Пример же той же очереди. Есть у нас в системе будет только одна очередь, то зачем для этого городить подход с ООП если можно просто написать функциональный подход ввиде модульности, инкапсулируя просто одну только очередь.
Ок я думаю с каким то пониманием вы подошли уже к определения базовых концептов ООП.

Основной единицей есть **класс**. Это просто чертеж, абстракция, прототип, который просто описыват суть какие характеристики(данные) этого класса, и его поведение(при этом есть как внутренне и как ввнешенне).

**Объект** это уже реализация нашего чертижа описанного в классе. Т.е. это уже физическое представления класса. Т.е. этим мы создаем его внутрение атрибутты, т.е. внутренее состояние. Стоит сказать что мы можем созадавать много этих экземпляров, и каждый из них будет иметь свое независимое состояние, но повдение работы с ними одинаковыми.

**Абстракция** есть предоставление только нужной информации окружающей среде, при этом пряча детали имлементации. Т.е. предоставляються только внешние методы для работы с объеектом(типа сообщений). Польза от этого в том что вы можете менять внутренее состояния не меняя его внешний интерфейс.
**Инкапсуляция** это очень близко в абстрации, т.е. это комбинация в одном модуле данные и функции. И данные не доступны для других частей программы, а доступны только через функции. Это еще называют скрытие данных. Т.е. представление единого целого. Например чтобы поменять состояние объекта, не надо менять каждое поле, а происходит измение только через внешнюю функции. Это позволяет соблюдать целостность данных. Если мы до этого использовали структуры, то там поля объекта могли менять в разных частях программы где есть доступ к объекту. Тем самым объект не был в целостном состоянии.
**Наследование** этот термин мы рассотрим дальше в другом разделе
**Полиморфизм** этот термин мы рассотрим дальше в другом разделе 

## Работа с классом
Ок, после того как мы рассмотрели концепции ООП, хотя они реально поверхностные без тонкостей деталей, начнем писать наш первй класс.
Я хочу пошагово реализовать идею работы со стеком. Начиная от определения класса стек и заканчивая реализацией всех конструкторов.
Ок, начнем
Класс имеет что то схожее со структурой, т.е. структура хранит набор связанных данных. Но еще раз для меня структура, это некий логическое объединения данных, я его смысл рассмартриваю как в языке С. Т.е. это Plain Old Data, данные которые меняються не зависимо  друг от друга, в разных частях программы.
Но наченем с истории что классы как таковые реализовывались на С структурах. Это потом стало полнеценным классов.
Давайте пример
```
class Stack {

};
```

Как видим объявление похоже на структуру, разница ключевом слове толь `class`. Часто говорят что структура это тот же класс, только с небольшим отличием. Но нет, невсегда. Мы еще к этому вернемся.
Ну это называеться пустой класс, и размер его как структуры гарантирова будет не меньше 1 байта.
Но в таком классе смысла малло, давайте наполним его полями.
### Поля класса
Поля класса это то что и поля в структуре, т.е. они могут быть как встроеного типа, так и быть пользовательским. Но в классе в рамках ООП поля описывают состояние объекта этого класса. Т.е. синаксически это одно и тоже, но с другой семантикой. Ок, вернемся к нашему стеку. Что такое стек? это структура данных работающая по принципу LIFO, т.е. последний зашел и первым вышел. Стек это впринципе ограниченая каким то размером структура данных. Т.е. нам надо определить константу соответсвующая размеру стека, и важное это как мы будем представлять стек в памяти. Стек впринципе реализует идею массива, только с невозможностью получения доступа к элементу по индексу. Ок, т.е. у нас внутренне состоянии стека будет массива ограниченого костантой размера. Давайте добавим это.
```cpp
class Stack {
  int array[255];
};
```
ОК, у нас есть стек как пользовательский тип, который представляет из себя массив. Вопрос чем это отличаеться от структуры? В такой форме почти многим. Во первых если таким способом, если это вопрос структуры, то мы объявляем как С структуру со всеми вытекающими последствиями для С, без какой либо ООП магии. Таким объявлением, вместо `class` написать `struct`, мы гарантируем соместимость с С структурами. Мы будем к сравнениям возращатьс очень часто.
Но есть важное еще отличие это уровни доступа, т.е. если мы создадим объект этого типа и попытаемся получить доступ к полю, как мы делали это со структурой то получим ошибку компиляции.
```cpp
  Stack st;
  std::cout << st.array[0] << std::endl;
```
Мы получим интересную ошибку, типа мы пытаемся использовать что то `private`. Так что это такое то. Это называються уровни доступа. Их есть 3-и
1. **private** если объявлять что то в этом разделе то мы не сможем получить доступ к этим мемберам, объявленых в этом разделе .
2. **public** все что сдесь объявлено, являеться внешне доступным, т.е. все имеют доступ к мемберам объявленым в этом разделе.
3. **protected** это относить к наследованию, и мы его более подробно рассмотрим когда будет рассматривать наследования.

Класс по умолчанию неявно объявляет все пренадлежаще разделу `private`. Т.е. описанный выше класс стек неявно определен следующим образом.
```cpp
class Stack {
 private:
  int array[255];
};
```

Теперь становиться ясно почему мы не  можем вызвать поле этого класса напрямую, т.к. он закрытый. А почему мы можем так использовать структуру, потомочту она неявно объявлена как.
```cpp
class Stack {
 public:
  int array[255];
};
```

Ок, но мы упустили момент что мы объвили объект этого класса, это есть уже физическое представление нашего класса в памяти. Стоит заметить, что каждый объект типа стек имеет свое независимое сотояние от других объектов.
Ну про объекты много говорить нечего, это привычные переменные которые мы с Вами сто раз уже объявляли.

Ну у нашего класса есть маленький недочет, мы указали размер массива как литерал, давайте исправим это и объявим константу. Константы можно также объявлять в классе, как и обычную константу, но с одним ограничением.
Можно объявить `enum`
```cpp
class Stack {
  enum {SIZE_STACK = 255};

  int array[SIZE_STACK];
};
```

Тут еще есть важный момент то что SIZE_STACK принадлежит скопу Stack, так еще к нему нельзя получить доступ снаружи. Кул. Чтобы получить доступ надо enum вынести в public секцию. Но это детали реализации)

Мы знаем что есть такое крутое дело как `constexpr`, давайте втулим его в наш класс.
```cpp
class Stack {
  constexpr unsigned SIZE_STACK = 255;
  int array[SIZE_STACK];
};
```

Собираем получаем ошибку, что мол мы не правильно используем не статический мембер класса. What??? не статтический это что такое, при чем тут статика. А проблема в том что класс это просто описание, это не объект, а `constexpr` константа это компайл тайм выражение и она будет определяться(устанавливаться при компиляции). А что утанавливать если нет никакой памяти? Ок, скипаем такой вариант
Берем вариант с обычной константой, ведь говориться что привычная нам костанта объявлена с ключевым словом `const` может устанавливать значение в рантайме. Кул подходит, присвоим ей значение когда создадим объект.
```cpp
class Stack {
  const unsigned SIZE_STACK = 255;
  int array[SIZE_STACK];
};
```

Собираем, и тут нас ждет печаль, нам компилятор говорит что мы не правильно используем не статические мембер, т.е. мы его не можем записать как размер массива. Та шош то таке. Но это понятно если мы не можем устанавливать компайл тайм костанту, то мы и не можем создать массив какого размера нам надо создавать, т.е. какого размера будет полная структура в памяти. Т.е. тут есть еще плюс, то что мы благодаря такого подхода мы можем избавиться от так называемого переменного размера массива, с которым мы столкнулись при работе с массивами. Но тут еще ошибка что вы не можете указать размер массива полем класса (не статическим). Опять это не статическое. Ок, так что получаеться я могу объявить массив только  используя enum или литерал.
**Замечание** что таким образом инициализировать константы можно только начиная с С++11 стандарта. До этого вам необходимо инициализировать константу специальным образом, забегая в перед только через конструктор. Если мы запустим это пример с опцией для более новых компиляторов gcc -std=c++98, то получим предупреждение "*data member initializers only available with -std=c++11 or -std=gnu++11*"

Но можно также используя константу обявив ее в не класса. Но это нарушает инкапсуляцию, нашего класса.
Но нам компилятор подсказывает сам) используйте вы уже статические переменные!!!!. Т.е. инициализация возможна применяя static переменные. Давайте разшевилим нашу память о статике. `static` неважно где она объявлена, это тело класса, функции, да и просто так. Копилятор обрабатывает до выполнения всех других инструкций. Т.е. у него некий глобальный сторедж. Т.е. он не зависит от **количества объектов этого класса**. Т.е. `static` он уже используеться не для объекта, а рассматриваеться как принадлежащий классу, т.е. он есть экземпляром объекта(или правильно сказать память под него не выделяеться при каждом создании объекта). Он также как и `enum` пренадлежит только области класса, но память у него выделяеться не зависимо от объектов класса. И еще статика есть частью локальной линковки, она являеться локально на уровне файла не на внешнем уровне(глобальной).
Фух, разобрались, я надеюсь. Давайте это чудо добавим в наш класс.
```cpp
class Stack {
  static const unsigned SIZE_STACK = 255;
  int array[SIZE_STACK];
};
```

Собираем и о чудо все компилиться как надо. Но так можно объявлять интегральные константы, если такое чудо собрать применив к типу float (компилируя ее до С++11 го), то получим ошибку компиляции.
```cpp
class Stack {
  static const float SIZE_STACK = 255;
};
```

То получим следующую ошибку компиляции `ISO C++ forbids initialization of member constant ‘Stack::SIZE_STACK’ of non-integral type ‘const float’`, т.е. стандартом запрещено инициализация константных полей не интегрального типа. А если мы запустим с новым стандартом, то получим чудо другого вида `error: ‘constexpr’ needed for in-class initialization of static data member ‘const float Stack::SIZE_STACK’ of non-integral type`, смысл в том что если мы хотим не интегральный тип инициализировать константным выражением пиши `constexpr`. 
```
class Stack {
  constexpr static const float SIZE_STACK = 255;
  //int array[SIZE_STACK];
};
```

Собираем работает.
Проблема в большей степени, на мое мнение связано с тем что С++ не говорит как будет храниться(представляться) вещественное число на памяти, и это он предоставляет на усмотрения процессора.
Ну ок в первом случае нам компилятор сказал дядько возьми так и сделай, мы взяли так и сделали, компилятор то дядька умный. Так а шо делать то с первым, а дядька, ту он не говорит уже. Но говорит стандарт что в классе надо делать объявление константы, а определения с инициализацией выносить вне области класса. Дичь просто.
Но давайте взглянем что почем, немного вспомнив что такое интегральная константа и как компиятор вставляет вместо создание переменной вставляет вместо ее использования ее значения, таким образом делая некую оптимизацию. но если нам необходимо ее взять адресс, т.е мы будем использовать константу как переменную, нам ее нужно определить. Но компилятор не может определить статическую константу времени компиляции, т.к. класс не есть определения, это есть описание, т.е. сказать сколько будет памяти жрать наш класс. Но с вещественными числами дело то хуже, компилятор, или с++ понятия не имееют как будет храниться вещественное число в памяти, поэтому они не делают инлайнинг числа, как это делают с интегральной константой. Поэтому надо определить сказав компилятору как инициализировать это вещественное число. И **важно** определение может быть только одно (делают, так объявление в `hpp` файле а определение в `cpp` файле). Ого много всего. Давайте запримерим
```cpp
#pragma once

class Stack {
  static const float SIZE_STACK;
};

const float Stack::SIZE_STACK = 255;
```

Собираем и о чудо все воркает. Немного синтаксиса. Ну во-первых указание повторного `static` являеться не нужным, компилятор и так все понимает(помните он же умный дядько), тут добавляеться толь то что нужно указать что эта константа принадлежит классу `Stack`. Так же можно писать и интегральные константы, но вопрос зачем?)
 