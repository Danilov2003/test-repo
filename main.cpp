/*#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int x = 1;
    int *p = &x;
    (*p)++;
    cout << x << endl;
    return 0;
}                                    */

/*#include <iostream>
using std::cout;
using std::endl;

int main()
{
    unsigned int u = 1;
    unsigned int u2 = 2;
    unsigned int* p = &u;
    unsigned int* p2 = &u2;
    cout << *p + *p2;
    return 0;
}                                               */

/*#include <iostream>
using std::cout;
using std::endl;

int main()
{
    char a[11] = {"0123401234"};
    char *p = a;
    cout << (int)(*(p + 7) - *p) << endl;
    return 0;
}                                                                     */
/*#include <iostream>
using std::cout;
using std::endl;

void decr(int* px) {
    (*px)--;
}

int main()
{
    int x = 10;
    decr(&x);
    cout << x << endl;
    return 0;
}                                                     */

/*#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int sum(int n, int* array) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *array;
        array++;
    }
    return sum;
}

int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
        cin >> a[i];
    cout << sum(10, a) << endl;
    return 0;
}                                                     */

/*#include <iostream>

int main() {
    int *p;
    p = new int (20);
    std::cout << *p;

    delete p;

    return 0;
}                                       */

/* #include <iostream>

int main () {
    double *p;
    p = new double [10];

    for (int i = 0; i < 10; i++) {
        *(p + i) = 100.00 + i;
    }
    for (int i = 0; i < 10; i++) {
        std::cout << *(p + i) << ' ';
    }
    delete [] p;
    return 0;

}                                                  */

/*#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void swap_arrays(int n, int* array_0, int* array_1) {

    for (int i = 0; i < n; i++) {
        *(array_1 + i) = *(array_0 + i);
    }

}

int main()
{
    int a[10];
    int* p = new int[10];
    for (int i = 0; i < 10; i++)
        cin >> a[i];
    for (int i = 0; i < 10; i++)
        p[i] = 0;

    swap_arrays(10, a, p);

    for (int i = 0; i < 10; i++)
        cout << p[i] << " ";
    cout << endl;
    delete[] p;
    return 0;
}                                                         */

/*#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int* get_10_ints() {
    int *p = new int [10];
    return p;
}
void return_10_ints_to_the_wilds(int* p) {
    delete [] p;
}

int main()
{
    int* p = get_10_ints();
    for (int i = 0; i < 10; i++)
        p[i] = i;
    for (int i = 0; i < 10; i++)
        cout << p[10 - i - 1] << " ";
    cout << endl;
    return_10_ints_to_the_wilds(p);
    return 0;
}                                                     */

/*#include <iostream>
using std::cin;
using std::cout;
using std::endl;

struct Vector
{
    int coord[3];
};
const int N = 3;                                       */

/*bool equal(Vector a, Vector b) {
    if (a.coord[0] == b.coord[0] && a.coord[1] == b.coord[1] && a.coord[2] == b.coord[2])
        return 1;
    else return 0;

} */

/*bool equal(Vector* a, Vector* b) {
    if ((a->coord[0]) == (b->coord[0]) && (a->coord[1]) == (b->coord[1]) && (a->coord[2]) == (b->coord[2]))
        return 1;
    else return 0;
}

int main()
{
    Vector polygon[N];
    for (int i = 0; i < N; i++)
        cin >> polygon[i].coord[0] >> polygon[i].coord[1] >> polygon[i].coord[2];

    for (int i = 0; i < N; i++)
        for (int j = i + 1; j < N - 1; j++)
            if (!equal(polygon + j, polygon + j + 1))
            {
                cout << "Inequality detected!" << endl;
                return 0;
            }
    cout << "Equality detected!" << endl;
    return 0;
}     */


/*void copy_array_reverse(int n, char* array_source, char* array_destination) {
    int c = n - 1;
    for (int i = 0; i < n; c--) {
        *(array_destination + i) = *(array_source + c);
        i++;
    }
}*/

/*#include <iostream>

struct node_t {
    int data;
    node_t *next;
};

void go_through (node_t *p) {
    while (p != nullptr) {
        std::cout << p->data << std::endl;
        p = p->next;
    }
}

int main () {
    node_t A[5];
    for (int i = 0; i < 5; i++) {
        A[i].data = i + 1;
        A[i].next = A + i + 1;
    }
    A[4].next = nullptr;
    node_t *p = A;
    go_through (p);

    return 0;
}                                             */

/*#include <iostream>

void UpdateIfGreater (int first, int& second) {
    if (first > second) second = first;
    return;

}

int main () {
    int a, b;
    std::cin >> a >> b;
    UpdateIfGreater(a, b);
    std::cout << a << " " << b;

    return 0;
}*/

/*#include <iostream>
#include <vector>
#include <string>

void MoveStrings (std::vector<std::string> &source, std::vector<std::string> &destination) {
    for (int i = 0; i < source.size(); i++) {
        destination.push_back(source[i]);
    }
    source.clear();
    return;
}

int main () {

    std::vector<std::string> source;
    std::vector<std::string> destination;
    source = {"3", "a", "b", "c"};
    destination = {"1", "z"};
    MoveStrings(source, destination);


    return 0;
}                                */


/*#include <iostream>
#include <vector>

vector<int> Reversed(const vector<int>& v) {
    std::vector<int> B (v.size());
    for (int i = 0; i < v.size(); i++) {
        B[i] = v[v.size() - 1 - i];
    }

    //for (auto x : v) std::cout << x << " ";
    return B;
}

/*int main (){

    std::vector<int> A = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    Reverse(A);

    return 0;
}*/



/* #include <iostream>
#include <vector>

void PrintVector (const std::vector<int>& temperature) {
    for (auto x : temperature) std::cout << x  << " ";
}

int main () {
    int N;
    std::cin >> N;
    std::vector<int> temperature;
    int temperature_in_day;
    int sum = 0;
    for (int i = 0; i < N; i++) {
        std::cin >> temperature_in_day;
        temperature.push_back(temperature_in_day);
        sum += temperature[i];
    }

    //std::cout << sum;
    int srednee_arifmet = sum / temperature.size();
    std::vector<int> index;

     for (auto i = 0; i < temperature.size(); i++) {
         if (temperature[i] > srednee_arifmet)  index.push_back(i);
     }

     std::cout << index.size() << std::endl;
     PrintVector(index);


    return 0;
}                                                 */

/*
#include <iostream>
#include <vector> // measurements
#include <cmath>

struct coordinates {
    double x;
    double y;
    double z;
};

void PrintVector (const std::vector<coordinates>& measurements) {
    for (coordinates j : measurements) std::cout << j.x << " " << j.y << " " << j.z << std::endl;
}

double crossing (const coordinates& the_first, const coordinates& the_second) {
    double len_sq = (the_first.x - the_second.x) * (the_first.x - the_second.x) + (the_first.y - the_second.y) * (the_first.y- the_second.y) + (the_first.z - the_second.z) * (the_first.z - the_second.z);

    return sqrt(len_sq);
}

int main () {
    int N;
    std::cin >> N;
    std::vector<coordinates> measurements(N);
    for (int i = 0; i < N; i++) {
        std::cin >> measurements[i].x >> measurements[i].y >> measurements[i].z;
    }
    double norm;
    std::cin >> norm;
    double sum = 0;

    for (int i = 0; i < N; i++) {
        sum += crossing(measurements[i], measurements[i + 1]);
        if (sum >= norm) {
            std::cout << i + 1;
            break;
        }
    }
    int loser = -1;
    if (sum < norm) std::cout << loser;

    //PrintVector(measurements);

    return 0;
}                                                   */
/*
#include <iostream>
#include <cstring>
using namespace std;

struct Animal {
    unsigned int type_id;
    char name[100];
    struct Animal* next;
    struct Event* history;
};

struct Event {
    unsigned int timestamp;
    char description[1024];
    struct Event* next;
};

// Эту функцию нужно реализовать
// Implement this
struct Animal* merge(struct Animal* list_one, struct Animal* list_two) {
    Animal* NOW = list_one;
    Animal* pointer;
    for (;;) {
        if (NOW != nullptr) {
            NOW = list_one->next;
        }
        pointer = NOW;
        if (NOW == nullptr) {
            NOW = list_two;
            break;
        }
    }
    if (list_one != nullptr) return list_one;
    if (list_one == nullptr && list_two == nullptr) return NULL;
    else return list_two;


}


// Init animal history record
struct Event* create_history_record(unsigned int timestamp, const char description[1024]) {
    Event* e = new struct Event;
    e->timestamp = timestamp;
    strcpy(e->description, description);
    e->next = NULL;
    return e;
}

// Append new record to the history
struct Event* insert_into_history(struct Event* history, struct Event* record) {
    if(history == NULL) {
        return record;
    }
    struct Event* e = history;
    while(e->next != NULL) {
        e = e->next;
    }
    e->next = record;
    return history;
}

// Init animal record
struct Animal* create_animal(unsigned int type_id, const char name[100]) {
    Animal* a = new struct Animal;
    a->type_id = type_id;
    strcpy(a->name, name);
    a->next = NULL;
    a->history = NULL;
    return a;
}

// Append new animal to the farm
struct Animal* add_to_farm(struct Animal* farm, struct Animal* animal) {
    if(farm == NULL) {
        return animal;
    }
    struct Animal* a = farm;
    while(a->next != NULL) {
        a = a->next;
    }
    a->next = animal;
    return farm;
}

// Prints complete farm info
void print_farm(Animal* farm) {
    struct Animal* a = farm;
    while(a != NULL) {
        cout << a->name << " (type " << a->type_id << "):" << endl;
        struct Event* e = a->history;
        while(e != NULL) {
            cout << "  " << e->timestamp << ": " << e->description << endl;
            e = e->next;
        }
        a = a->next;
    }
}

// Cleans up everything
void destroy_farm(Animal* farm) {
    struct Animal* old_a;
    struct Animal* a = farm;
    while(a != NULL) {
        struct Event* old_e;
        struct Event* e = a->history;
        while(e != NULL) {
            old_e = e;
            e = e->next;
            delete old_e;
        }
        old_a = a;
        a = a->next;
        delete old_a;
    }
}

int main()
{
    Animal* farm1 = NULL;

    Animal* cat1 = create_animal(1, (char*)"Barsik");
    cat1->history = insert_into_history(cat1->history, create_history_record(1024, (char *)"Cat was born"));
    cat1->history = insert_into_history(cat1->history, create_history_record(1025, (char *)"Cat ate smth"));
    cat1->history = insert_into_history(cat1->history, create_history_record(1040, (char *)"Cat did smth else"));
    farm1 = add_to_farm(farm1, cat1);

    Animal* cat2 = create_animal(42, (char*)"Astral");
    cat2->history = insert_into_history(cat2->history, create_history_record(1900, (char *)"Cat was found next to the door"));
    cat2->history = insert_into_history(cat2->history, create_history_record(1910, (char *)"We tried to wash the cat, but failed"));
    cat2->history = insert_into_history(cat2->history, create_history_record(1912, (char *)"Cat went somewhere"));
    farm1 = add_to_farm(farm1, cat2);

    Animal* farm2 = NULL;

    Animal* cat3 = create_animal(11, (char*)"Lord");
    cat3->history = insert_into_history(cat3->history, create_history_record(1234, (char *)"Cat was born"));
    farm2 = add_to_farm(farm2, cat3);

    Animal* cat4 = create_animal(42, (char*)"Moorzeek");
    cat4->history = insert_into_history(cat4->history, create_history_record(1900, (char *)"We caught the cat"));
    cat4->history = insert_into_history(cat4->history, create_history_record(1910, (char *)"Cat caugth the mouse"));
    farm2 = add_to_farm(farm2, cat4);

    Animal* farm = merge(farm1, farm2);

    print_farm(farm);

    destroy_farm(farm);
    return 0;
}                                                     */

/*#include <iostream>
#include <vector>
#include <iomanip>

void PrintVector (const std::vector<double>& temperature) {
    for (auto x : temperature) std::cout << x  << " ";
}

void comparison (std::vector<double>& numbers, double arithmetic_mean) {
    for (auto i = 0; i < numbers.size(); i++) {
        std::cout << std::fixed << std::setprecision(4) << numbers[i] - arithmetic_mean << " ";
    }
}

int main () {
    unsigned long long N;
    std::cin >> N;
    std::vector<double> numbers(N);

    double sum = 0;
    for (auto i = 0ull; i < N; i++) {
        std::cin >> numbers[i];
        sum += numbers[i];
    }
    double arithmetic_mean = sum / N;

    comparison (numbers, arithmetic_mean);
    //PrintVector(numbers);

    return 0;
}                                            */
/*
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>

struct Game {
    std::string name_of_game;
    int quantity;
    double arithmetic_mean;
};

void PrintVector (const std::vector<Game>& temperature) {
    for (Game x : temperature) std::cout << x.name_of_game << " " << x.quantity << " " << x.arithmetic_mean << std::endl;
}

int main() {

    int N;
    std::cin >> N;
    std::vector<Game> games(N);

    for (int i = 0; i < N; i++) {
        std::cin >> games[i].name_of_game >> games[i].quantity;
        std::vector<double> score(games[i].quantity);
        double sum = 0;
        for (int j = 0; j < score.size(); j++) {
            std::cin >> score[j];
            sum += score[j];
        }
        games[i].arithmetic_mean = sum / score.size();
    }
    //PrintVector(games);

    std::vector<double> arifmetics(N);
    for (int i = 0; i < N; i++) {
        arifmetics[i] = games[i].arithmetic_mean;
    }
    std::sort(arifmetics.begin(), arifmetics.end());

    for (int i = 0; i <= N; i++) {
        for (int j = 0; j < N; j++) {
            if (arifmetics[N - i] == games[j].arithmetic_mean) {
                std::cout << games[j].name_of_game << " ";
                std::cout << std::fixed << std::setprecision(3) << games[j].arithmetic_mean << std::endl;
            }
        }
    }


        return 0;
}
                                        */
/*#include <iostream>

int main (){
    int N;
    std::cin >> N;
    int passengers = 0;
    int into, out;
    for (int i = 0; i < N; i++) {
        std::cin >> into;
        passengers += into;
        std::cin >> out;
        passengers -= out;
    }
    std::cout << passengers;


    return 0;
}                                         */
/*
#include <iostream>
#include <vector>
#include <cmath>

struct measurement {
    double time;
    double x;
    double y;
};

int main() {
    int N;
    std::cin >> N;
    std::vector<measurement> values(N);
    for (int i = 0; i < N; i++) {
        std::cin >> values[i].time >> values[i].x >> values[i].y;
    }
    double way = 0;
    double limit_score = 330;
    for (int i = 0; i < N - 1; i++) {
        double delta_S_sqrt2 = (values[i].x - values[i + 1].x) * (values[i].x - values[i + 1].x) + (values[i].y- values[i + 1].y) * (values[i].y - values[i + 1].y);
        double S = sqrt(delta_S_sqrt2);
        double V = S / (values[i + 1].time - values[i].time);
        if (V <= limit_score) {
            way += S;
        }
    }
    std::cout << way;


    return 0;
}                                           */
/*
#include <iostream>
#include <vector>
#include <cmath>

struct lamp {
    int X;
    int Y;
    int D;
};

int main () {
    int N, M;
    std::cin >> N >> M;
    int K;
    std::cin >> K;
    std::vector<lamp> lamps(K);
    for (int i = 0; i < K; i++) {
        std::cin >> lamps[i].X >> lamps[i].Y >> lamps[i].D;
    }


    return 0;
}   */
/*
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <vector>
void separate_rgba(unsigned int *data, unsigned int n){
    std::vector<unsigned int> old_data(4*n);
    for (int i = 0; i < 4*n; i++) {
        old_data[i] = *(data + i);
    }

    std::vector<unsigned int> red(n);
    std::vector<unsigned int> green(n);
    std::vector<unsigned int> blue(n);
    std::vector<unsigned int> alpha(n);

    int j_r, j_g, j_b, j_a;
    j_a = j_b = j_g = j_r = 0;
    for (int i = 0; i < 4*n; i +=4) {
        red[j_r] = old_data[i];
        green[j_g] = old_data[i+1];
        blue[j_b] = old_data[i+2];
        alpha[j_a] = old_data[i+3];
        j_r++; j_g++; j_b++; j_a++;
    }
    for (int i = 0; i < n; i++) {
        red.push_back(green[i]);
    }
    green.clear();

    for (int i = 0; i < n; i++) {
        red.push_back(blue[i]);
    }
    blue.clear();

    for (int i = 0; i < n; i++) {
        red.push_back(alpha[i]);
    }
    alpha.clear();

    for (int i = 0; i < 4*n; i++) {
        data[i] = red[i];
    }
    red.clear();
    int len = sizeof( data ) / sizeof (data[0]);
    std::cout << len << endl;

}

// Здесь ваша реализация функции

int main()
{
    unsigned int n;
    cin >> n;
    unsigned int* data = new unsigned int[4*n];
    for (unsigned int i = 0; i < 4*n; i++)
        cin >> data[i];
    separate_rgba(data, n);
    for (unsigned int i = 0; i < 4*n; i++)
        cout << data[i] << " ";
    cout << endl;
    delete[] data;
    return 0;
}
*/


/*
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

struct CharNode {
    char c;            // сам символ
    CharNode* next;    // указатель на следующий символ
};

#include <vector>
void untangle(CharNode* record) {
    std::vector<CharNode> old_data;
    int len = sizeof( *record ) / sizeof (record[0]);
    for (int i = 0; *(record + i) !=  )
}

void print_tangled(CharNode* record);
void print_untangled(CharNode* record);

int main()
{
    char original_record[100];
    cin >> original_record;
    CharNode tangled_record[100];

    unsigned int prev = 0;
    tangled_record[0].c = original_record[0];
    for (unsigned int i = 1; original_record[i] != '\0'; i++)
    {
        unsigned int place;
        cin >> place;
        tangled_record[place].c = original_record[i];
        tangled_record[place].next = NULL;
        tangled_record[prev].next = tangled_record + place;
        prev = place;
    }

    untangle(tangled_record);

    print_tangled(tangled_record);
    print_untangled(tangled_record);

    return 0;
}

void print_tangled(CharNode* record)
{
    while (record)
    {
        cout << record->c;
        record = record->next;
    }
    cout << endl;
}


void print_untangled(CharNode* record)
{
    while (record->next)
    {
        cout << record->c;
        record++;
    }
    cout << record->c;
    cout << endl;
}                                   */
/*
#include <iostream>
#include <cmath>

class Point
{
protected:
    double _x;
    double _y;
    double _z;

public:
    Point(double x, double y, double z) {

        _x = x; _y = y; _z = z;
    }

    Point(){};

    double x() const {
        return _x;
    }

    double y() const {
        return _y;
    }

    double z() const {
        return _z;
    }


};
//Реализуйте класс, задающий сферу. Прототип класса:

class Sphere
{
protected:
    Point CENTER;
    double R;
public:
    // Конструктор сферы с центром в точке center и радиусом r
    Sphere(const Point& center, double r) {
        CENTER = center;
        R = r;
    }

    // Проверка, попадает ли заданная точка p в данную сферу.
    // (Расстояния сравнивать с точностью 1e-6.)
    bool covers(const Point& p) const {
        double po = sqrt((p.x() - CENTER.x())*(p.x() - CENTER.x()) + (p.y() - CENTER.y())*(p.y() - CENTER.y()) +(p.z() - CENTER.z())*(p.z() - CENTER.z()));
        if (po <= R) {
            return true;
        }
        else {
            return false;
        }
    }
};
//Для тестирования можете использовать следующий базовый пример:

int main() {
// Создаём сферу
    Point center(10.0, 10.0, 10.0);
    Sphere s(center, 0.5);

// Создаём пару тестовых точек
    Point p1(10.1, 10.1, 10.1);
    Point p2(2, 2, 2);

// Ожидаем, что первая точка внутри сферы
    std::cout << s.covers(p1) << std::endl;
// Ожидаем, что вторая точка не попала внутрь сферы
    std::cout << s.covers(p2) << std::endl;
    return 0;
}  */

/*
#include <iostream>


class Train
{
public:
    double m;
    double x = 0;
    double v = 0;
    // Создать паровоз массой m,
    // стоящий в начале координат
    Train(double m){
        this-> m = m;
    };

    // Ехать с текущей скоростью в течение времени dt
    void move(double dt) {
        double S = v*dt;
        x = x + S;
    }

    // Изменить полный импульс паровоза (p = mv) на dp
    // Изменение может менять знак скорости
    void accelerate(double dp) {
        double V = dp/m + v;
        v = V;

    }

    // Получить текущую координату паровоза
    double getX() {
        return x;
    }
};


int main () {

    Train t(10);
    t.accelerate(1); // Скорость стала 0.1

    t.move(1);
    std::cout << "Current X: " << t.getX() << std::endl;
    t.move(1);
    std::cout << "Current X: " << t.getX() << std::endl;
    t.accelerate(-2); // Скорость стала -0.1
    t.move(3);
    std::cout << "Current X: " << t.getX() << std::endl;

    return 0;
}   */
/*
#include <iostream>
#include <vector>

class GasHolder
{
public:

    float V;
    float T;
    float P;
    const float R = 8.31;
    //std::vector<float> ms;
    //std::vector<float> Ms;
    float ms[10000];
    float Ms[10000];
    int index = 0;
    // Создать газгольдер заданного объёма.
    // Температура созданного термостата равна 273 К.
    GasHolder(float v) {
        V = v;
        T = 273;
        P = 0;

    };

    // Уничтожить газгольдер.
    ~GasHolder() {};

    // Впрыск порции газа массой m и молярной массой M.
    // Считать, что газ принимает текущую температуру газгольдера за пренебрежимо малое время.
    void inject(float m, float M) {
        P = P + (m * R * T)/(V * M);
        ms[index] = m;
        Ms[index] = M;
        index++;
    }

    // Подогреть газгольдер на dT градусов.
    // Считать, что нагрев возможен до любых значений температуры.
    void heat(float dT){
        T = T + dT;
        float dp = 0;
        for (int i = 0; i < index; i++) {
            dp =  dp + (ms[i] * R * dT)/(V * Ms[i]);
        }
        P = P + dp;
    }

    // Охладить газгольдер на dT градусов.
    // При попытке охладить ниже 0 К температура становится ровно 0 К.
    void cool(float dT) {
        float new_T = T - dT;
        if (new_T <= 0) {
            T = 0;
            P = 0;
        } else {
            T = new_T;
            float dp = 0;
            for (int i = 0; i < index; i++) {
                dp =  dp + (ms[i] * R * dT)/(V * Ms[i]);
            }
            P = P - dp;
    }}

    // Получить текущее давление в газгольдере.
    // Считать, что для газа верно уравнение состояния PV = (m/M)RT.
    // Значение постоянной R принять 8.31 Дж/(моль*К).
    float getPressure() {
        return P;
    }
};


int main () {

    GasHolder h(1.0);
    h.inject(29, 29);
    std::cout << "Pressure after operation: " << h.getPressure() << " Pa" << std::endl;
    h.inject(29, 29);
    std::cout << "Pressure after operation: " << h.getPressure() << " Pa" << std::endl;
    h.heat(273);
    std::cout << "Pressure after operation: " << h.getPressure() << " Pa" << std::endl;
    h.cool(373);
    std::cout << "Pressure after operation: " << h.getPressure() << " Pa" << std::endl;
    h.cool(373);
    std::cout << "Pressure after operation: " << h.getPressure() << " Pa" << std::endl;

    return 0;
}    */

/*

#include <iostream>
#include <vector>
#include <string>


class Animal {
public:
    virtual std::string getType() = 0;
    virtual bool isDangerous() = 0;
};

class ZooKeeper {

private:
    int num;

public:
    // Создаём смотрителя зоопарка
    ZooKeeper() {
        num = 0;
    };

    // Смотрителя попросили обработать очередного зверя.
    // Если зверь был опасный, смотритель фиксирует у себя этот факт.
    void handleAnimal(Animal* a) {
        if (a->isDangerous() == 1) { num++ ;
        };
    }

    // Возвращает, сколько опасных зверей было обработано на данный момент.
    int getDangerousCount() {
        return num;
    }
};     */

/*#include <iostream>

class Knight : public Player {
public:
    Knight() { }
    bool canUse(Item* item) {
        if ((this->level >= item->getLevel()) && (this->strength >= item->getWeight()) && !(item->isMagical()))
            return true;
        else return false;
    }
};

class Wizard : public Player {
public:
    Wizard() { }
    bool canUse(Item* item) {
        if ((this->level >= item->getLevel()) && (this->strength >= item->getWeight()))
            return true;
        else return false;
    }
};   */
/*
#include <iostream>
using std::endl, std::cout;

namespace namespaceA {
    class Engine {
    public:
        void run() {
            cout << "EngineA run" << endl;
        }
    };
}

namespace namespaceB {
    class Engine {
    public:
        void run() {
            cout << "EngineB run" << endl;
        }
    };
}

namespace namespaceC {
    class Engine {
    public:
        void run() {
            cout << "EngineC run" << endl;
        }
    };
}

class MyEngine {
public:
    namespaceA:: Engine the_first;
    namespaceB:: Engine the_second;
    namespaceC:: Engine the_third;
    // Если передан параметр 1 - должен быть вызван метод run и Engine-а из библиотеки A.
    void run(int i) {
        if (i == 1) {
            the_first.run();
        };
        if (i == 2) {
            the_second.run();
        };
        if (i == 3) {
            the_third.run();
        };
    };

    // Если передан параметр 2 - должен быть вызван метод run и Engine-а из библиотеки B.
    // Если передан параметр 3 - должен быть вызван метод run и Engine-а из библиотеки C.
    // Если передано что-то иное - должно ничего не произойти.

};

int main () {
    MyEngine e;
    e.run(1); // вызов run из Engine-а из библиотеки A
    e.run(2); // вызов run из Engine-а из библиотеки B
    e.run(3); // вызов run из Engine-а из библиотеки C
    e.run(10); // ничего не происходит
    return 0;

}; */
/*
#include <iostream>

class Storage
{
public:
    unsigned int len;
    int* data;
    // Конструктор хранилища размерности n
    Storage(unsigned int n) {
        data = new int[n];
        len = n;
    }

    // Добавьте нужный деструктор

    virtual ~Storage(){
        delete[] data;
    }

    // Получение размерности хранилища
    unsigned getSize() {
        return len;
    }

    // Получение значения i-го элемента из хранилища,
    // i находится в диапазоне от 0 до n-1,
    // случаи некорректных i можно не обрабатывать.
    int getValue(unsigned int i) {
        return data[i];

    }

    // Задание значения i-го элемента из хранилища равным value,
    // i находится в диапазоне от 0 до n-1,
    // случаи некорректных i можно не обрабатывать.
    void setValue(unsigned int i, int value) {
        data[i] = value;
    }
};

// Класс TestStorage, наследуется от вашей реализации Storage
class TestStorage : public Storage {
protected:
    // Унаследованная реализация зачем-то хочет выделить ещё памяти. Имеет право.
    int* more_data;

public:
    // В конструкторе память выделяется,
    TestStorage(unsigned int n) : Storage(n) {
        more_data = new int[n];
    }
    // ... а в деструкторе освобождается - всё честно.
    ~TestStorage() override {
        delete[] more_data;
    }
};

int main() {
    Storage *ts = new TestStorage(42);
    delete ts;
    return 0;
}; */
/*
#include <iostream>

class Animal {
public:
    // Погладить данную зверушку.
    // Последствия зависят от реализации данного метода для класса конкретной зверушки.
    virtual void pet() = 0;

    virtual ~Animal() {};
};


class NPC {
public:
    // Поговорить с NPC.
    // Что он скажет - зависит от реализации данного метода для конкретного NPC.
    virtual void talk() = 0;

    virtual ~NPC() {};
};

class SmartCat : public Animal, public NPC {

    void pet() override {
        std::cout<< "Meow!" << std::endl;
    }


    void talk() override {
        std::cout<< "Meow!" << std::endl;
    }

};


int main () {
    Animal *a = new SmartCat();
    a->pet();
    delete a;

    // А так - части движка, которые работают с NPC.
    NPC *n = new SmartCat();
    n->talk();
    delete n;

    return 0;

} */
/*
#include <iostream>
#include <cmath>
#include <vector>


class Figure {
public:
    virtual double area() = 0;
    virtual double perimeter() = 0;
    virtual void getInformation() = 0;
    virtual ~Figure() {};

protected:
    std::string name;
};

class Circle: public Figure {
public:
    Circle(double r): r(r) {
        name = "Круг";
    };
    double area() override {
        return std::acos(-1) * r * r;
    }
    double perimeter() override {
        return 2 * std::acos(-1) * r;
    }
    void getInformation() override {
        std::cout << name << ":  " << std::endl;
        std::cout << "Радиус: " << r << std::endl;
    }
private:
    double r;
};

class Ellipse : public Figure {
private:
    double a;
    double b;

public:
    Ellipse(double a, double b): a(a), b(b) {
        name = "Эллипс";
    };

    double area() override{
        return std::acos(-1) * a * b;
    }

    double perimeter() override {
        return 2 * std::acos(-1) * std::sqrt((a*a + b*b)/2);
    }
    void getInformation() override {
        std::cout << name << ":  " << std::endl;
        std::cout << "Большая полуось: " << a << ";  Малая полуось: " << b << std::endl;
    }
};

class Polygon: public Figure {
protected:
    int value;  // количество вершин многоугольник

public:
    Polygon() {};
    Polygon(int value): value(value) {
    };

};

class Quadrilateral : public Polygon {
public:
    Quadrilateral() {
        value = 4;
    }
};

class Rectangle: public Quadrilateral {
public:
    Rectangle(double a, double b): a(a), b(b) {
        name = "Прямоугольник";
    }
    double area() override {
        return a * b;
    }
    double perimeter() override {
        return 2 * (a + b);
    }

    void getInformation() override {
        std::cout << name << ": " << std::endl;
        std::cout << "Количество вершин: " << value << ";  Длины сторон: " << a << ", " << b << std::endl;
    }

private:
    double a, b;
};

class Square: public Rectangle {
public:
    Square(double a) : Rectangle(a, a) {
        name = "Квадрат";
    }
};

class Triangle: public Polygon {
private:
    double a, b, c;

public:
    Triangle(double a, double b, double c): a(a), b(b), c(c) {
        value = 3;
        name = "Треугольник";
    };

    double perimeter() override {
        return a + b + c;
    }

    double area() override {
        double p = (a + b + c)/2;
        return std::sqrt(p * (p - a) * (p - b) * (p - c));
    }

    void getInformation() override {
        std::cout << name << ": " << std::endl;
        std::cout << "Количество вершин: " << value << ";  Длины сторон: " << a << ", " << b <<
        ", " << c << std::endl;
    }
};

int main () {

    system("chcp 65001");

    Ellipse e(10, 2);
    //e.getInformation();

    Circle c(25);
    //c.getInformation();

    Triangle t (16, 17, 18);
    //t.getInformation();

    Rectangle r (12, 24);
    //r.getInformation();

    Square s(4);
    //s.getInformation();

    //std::cout<<s.perimeter();

   std::vector<Figure*> figures;
   figures.push_back(&e);
    figures.push_back(&c);
    figures.push_back(&t);
    figures.push_back(&r);
    figures.push_back(&s);

    std::cout<< std::endl;
    for(auto ptr: figures) {
        std::cout << "Information: "; ptr->getInformation();
        std::cout << "Area is " << ptr->area() << std::endl;
        std::cout << "Perimeter is " << ptr->perimeter() << std::endl << std::endl;
   }
    return 0;
}   */
/*
#include <iostream>


class MoneyBox {
private:
    unsigned int coins;
    unsigned int sum;

public:
    // Конструктор и деструктор, если нужны
    MoneyBox() {
        coins = 0;
        sum = 0;
    };

    // Добавить монетку достоинством value
    void addCoin(unsigned int value) {
        coins++;
        sum += value;
    }

    // Получить текущее количество монеток в копилке
    unsigned int getCoinsNumber() const {
        return coins;
    }

    // Получить текущее общее достоинство всех монеток
    unsigned int getCoinsValue() const {
        return sum;
    }
};
//Для тестирования можете использовать следующий базовый пример:

int main() {
    MoneyBox m;
// Добавили монетку достоинством 10
    m.addCoin(10);
// Добавили монетку достоинством 5
    m.addCoin(5);

// Ожидаем, что монеток внутри 2 штуки
    std::cout << m.getCoinsNumber() << std::endl;
// Ожидаем, что общее достоинство всех монеток 15
    std::cout << m.getCoinsValue() << std::endl;

    return 0;
}
  */
/*
#include <iostream>

class Animal
{
protected:
    double mass;
    double speed;

public:
    Animal() {}
    virtual ~Animal() {}

    // Создаём зверушку с заданной массой и скоростью
    Animal(double mass, double speed) {
        this->mass = mass;
        this->speed = speed;
    }

    // Получить массу зверя
    virtual double getMass() const {
        return mass;
    }

    // Получить скорость зверя
    virtual double getSpeed() const {
        return speed;
    }

    // Может ли зверушка нападать на других зверей
    // (не может, зверь мирный)
    virtual bool canAtack() const {
        return false;
    }

    // Съесть другого зверя, не делает ничего, мы же мирные
    virtual void eat(const Animal& a) {
    }
};

class Predator: public Animal {
public:
    Predator(double mass, double speed): Animal(mass, speed) {};
    /*Predator(double mass, double speed) {
        this->mass = mass;
        this->speed = speed;
    };  */
/*
    bool canAtack() const override {
        return true;
    }

    void eat(const Animal &a) override {
        if ((this->speed >= a.getSpeed()) && (this->mass >= a.getMass())) {
            mass += a.getMass();
        }

    }
};

int main() {

    Animal* predator = new Predator(1, 10);
    std::cout << "Current mass: " << predator->getMass() << std::endl;

    if(predator->canAtack()) {
        predator->eat(Animal(2, 1)); // Этого не съедим - слишком большой
        std::cout << "Current mass: " << predator->getMass() << std::endl;
        predator->eat(Animal(1, 1)); // А вот этого вполне
        std::cout << "Current mass: " << predator->getMass() << std::endl;
        predator->eat(Animal(1, 20)); // Этого не выйдет - слишком быстрый
        std::cout << "Current mass: " << predator->getMass() << std::endl;
        predator->eat(Animal(2, 2)); // А вот этого догоним
        std::cout << "Current mass: " << predator->getMass() << std::endl;
    }

    delete predator;

    return 0;
}
*/

/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <ctime>
#include <chrono>
#include <numeric>
#include <iterator>
#include <cmath>

void print ( std::vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << std::endl;
    };
}

bool IsOdd (int i) {
    return ((i%2)==1);
}

bool IsSimple (int a) {
    if(a > 1){
        int capacity = 0;
        for (int i = 2; i <= sqrt(a); i++) {
            if ((a%i)==0) capacity++;
        }
        if (capacity == 0) return true;
    }
    else return false;
}

int Square (int i){
    return i*i;
}

bool Nothing (int i) {
    return true;
}

int difference (int a, int b) {
    return a - b;
}

bool Plustable (int a) {
    return a < 0;
}

int main() {
    system("chcp 65001");

    //Создаем последовательность П1 натуральных числе от 1 до 10
    std::vector<int> nums {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "Последовательность П1 натуральных числе от 1 до 10" << std::endl;
    print(nums);

    //Добавление в последовательность двух чисел
    int a1, a2;
    std::cout << "Введите два целых числа:";
    std::cin >> a1 >> a2;
    nums.push_back(a1);
    nums.push_back(a2);
    //Перемешивание последовательности в рандомном порядке

    srand(time(NULL));
    std::random_shuffle(nums.begin(), nums.end());

    //Альтернативный способ перемешивания (пример из документации)

    //std::random_device rd;
    //std::mt19937 g(rd());
    //std::shuffle(nums.begin(), nums.end(), g);

    std::cout << "П1 после перемешивания: " << std::endl;
    print(nums);
    std::cout<< std::endl;

    //Удаляем дубликаты из последовательности

    std::sort(nums.begin(), nums.end());
    auto ip = std::unique(nums.begin(), nums.end());
    for (;ip != nums.end();) {
    nums.resize(std::distance(nums.begin(), ip));
    auto ip = std::unique(nums.begin(), nums.end());
    };
    nums.resize(std::distance(nums.begin(), ip));
    //Альтернативный способ удаления дубликатов в конце вектора -- примнить метод erase
    //nums.erase(ip, nums.end());

    std::cout << "П1 после удаления дубликатов: " << std::endl;
    print(nums);

    //Подсчитаем количество нечетных чисел

    int mycount = std::count_if(nums.begin(), nums.end(), IsOdd);
    std::cout << "Количество нечетных чисел в П1: " << mycount << std::endl;

    //Найдем максимальное и минимальное число в последовательности
    auto max_element = std::max_element(nums.begin(), nums.end());
    auto min_element = std::min_element(nums.begin(), nums.end());
    std::cout  << "Максимальный элемент П1: " << *max_element << std::endl;
    std::cout  << "Минимальный элемент П1: " << *min_element << std::endl;

    //Поиск хотя бы одного простого числа
    auto simple_element = std::find_if(nums.begin(), nums.end(), IsSimple);
    std::cout << "Простое число из П1: " << *simple_element << std::endl;

    //Заменяем числа в последовательности квадратами
    std::vector<int> new_nums(nums.size());
    std::transform(nums.begin(), nums.end(), new_nums.begin(), Square);
    std::cout << "Последовательность П1 квадратов: " << std::endl;
    for (int i = 0; i < new_nums.size(); i++) {
        std::cout << new_nums[i] << std::endl;
        nums[i] = new_nums[i];
    };


    //Создание последовательности рандомных чисел
    auto current_time = std::chrono::steady_clock::now().time_since_epoch().count() / static_cast<unsigned long long>(1e9);
    auto generator = std::mt19937_64(current_time);
    int size1 = nums.size();
    auto distribution = std::uniform_int_distribution(0, size1);

    std::cout << "Новая последовательность П2 рандомных чисел: " << std::endl;
    for (int i = 0; i < new_nums.size(); i++) {
        new_nums[i] = distribution(generator);
        std::cout << new_nums[i] << std::endl;

    }

    //Сумма последовательности 2
    std::cout << "Сумма элементов П2: " << std::endl <<
    std::accumulate(new_nums.begin(), new_nums.end(), 0) << std::endl;

    //Заменяем первые несколько чисел в последовательности 2 единицами
    std::replace_if(new_nums.begin(), new_nums.begin() + 3, Nothing ,1);
    std::cout << "П2 после замены первых трёх элементов на единицу: " << std::endl;
    print(new_nums);

    //Создаем П3 как разность П1 и П2
    std::vector<int> nums_3 (nums.size());
    std::transform(nums.begin(), nums.end(), new_nums.begin(), nums_3.begin(), difference);
    std::cout << "П3 как разность П1 и П2: " << std::endl;
    print(nums_3);

    nums_3[6] = 0;
    nums_3[7] = 0;

    //Заменяем каждый отрицательный элемент в П3 нулем
    std::replace_if(nums_3.begin(), nums_3.end(), Plustable, 0);
    std::cout << "П3 после замены отрицательных элементов на ноль: " << std::endl;
    print(nums_3);

    //Удаляем все нули в П3
    auto it = std::remove(nums_3.begin(), nums_3.end(), 0);
    nums_3.erase(it, nums_3.end());
    std::cout << "Удаляем все нули в П3: " << std::endl;
    print(nums_3);

    //Заменяем порядок чисел в П3 на обратный
    std::reverse(nums_3.begin(), nums_3.end());
    std::cout << "П3 в обратном порядке: " << std::endl;
    print(nums_3);

    //Определяем ТОП3 самых больших элементов
    std::nth_element(nums_3.begin(), nums_3.end() - 4, nums_3.end());
    std::cout << "ТОП3 самых больших элементов в П3: " << std::endl;
    for (auto i = nums_3.end() - 1; i > nums_3.end() - 4; --i) {
        std::cout  << *i << std::endl;
    }

    //Сортируем П1 и П2 по возрастанию
    std::sort(nums.begin(), nums.end());
    std::sort(new_nums.begin(),new_nums.end());
    std::cout << "П1 отсортированная по возрастанию" << std::endl;
    print(nums);
    std::cout << "П2 отсортированная по возрастанию" << std::endl;
    print(new_nums);

    //Создаем П4 и сливаем туда П1 и П2
    std::vector<int> nums_4 (nums.size() + new_nums.size());
    std::merge(nums.begin(), nums.end(), new_nums.begin(), new_nums.end(), nums_4.begin());
    std::cout << "П4 - слияние П1 и П2: "  << std::endl;
    print(nums_4);

    //Определяем диапазон для упорядоченной вставки числа 1 в П4
    std::pair<std::vector<int>::iterator,std::vector<int>::iterator> bounds;
    bounds=std::equal_range (nums_4.begin(), nums_4.end(), 1);
    // Получили итератор на первую единицу из П4 и итератор на следующий за последней единицей элемент в П4

    //Выводим в консоль все последовательности
    std::cout << "П1: " << std::endl;
    print(nums);
    std::cout << "П2: " << std::endl;
    print(new_nums);
    std::cout << "П3: " << std::endl;
    print(nums_3);
    std::cout << "П4: " << std::endl;
    print(nums_4);

    return 0;
}
 */


/*
#include <iostream>


class Vector2D
{
private:
    int x, y;

public:
    // Конструкторы
    Vector2D(int x, int y): x(x), y(y) {}
    Vector2D(): Vector2D(0, 0) {}

    // Деструктор
    ~Vector2D(){}

    // Получение координат
    int getX() const {
        return x;
    }
    int getY() const {
        return y;
    }

    // Задание координат
    void setX(int x) {
        this->x = x;
    }
    void setY(int y) {
        this->y = y;
    }

    // Перегруженный оператор - сравнение двух векторов на равенство
    bool operator== (const Vector2D& v2) const {
        return (x == v2.x && y == v2.y);
    }

    // Ещё один перегруженный оператор - неравенство векторов
    // Да, это отдельный оператор! Хинт - настоящие джедаи смогут для != использовать уже написанное ==
    bool operator!= (const Vector2D& v2) const {
        bool x_ = (x==v2.x);
        bool y_ = (y==v2.y);
        if (x_ == true && y_ == true) return false;
        else return true;
    }

    // Сумма двух векторов, исходные вектора не меняются, возвращается новый вектор
    Vector2D operator+ (const Vector2D& v2) const {
        return Vector2D(x + v2.getX(), y + v2.getY());
    }

    // Вычитание векторов, исходные вектора не меняются, возвращается новый вектор
    Vector2D operator- (const Vector2D& v2) const {
        return Vector2D(x - v2.getX(), y - v2.getY());
    }

    // Оператор умножения вектора на скаляр, исходный вектор не меняется, возвращается новый вектор
    Vector2D operator* (const int a) const {
        return Vector2D(x*a, y*a);
    }
};

// Оператор умножения скаляра на вектор, исходный вектор не меняется, возвращается новый вектор
// Неожиданно, правда? Умножение скаляра на вектор - это отдельный оператор, причём описанный *вне* класса.
Vector2D operator* (int a, const Vector2D& v) {
    return Vector2D(a*v.getX(), a*v.getY());
}

// Вывод вектора, ожидается строго в формате (1; 1)
std::ostream& operator<<(std::ostream& os, const Vector2D& v) {
    os << "(" << v.getX() << "; " << v.getY() << ")";
    return os;
}

// Чтение вектора, читает просто две координаты без хитростей
std::istream& operator>>(std::istream &is, Vector2D &v) {
    int X, Y;
    is >> X >> Y;
    v.setX(X);
    v.setY(Y);
    return is;
}

int main (){

    Vector2D v1;
    std::cin >> v1;
    std::cout << v1 << std::endl;
    Vector2D v2;
    std::cin >> v2;
    std::cout << v2 << std::endl;
    std::cout << std::boolalpha << (v1 == v2) << std::endl;
    std::cout << std::boolalpha << (v1 != v2) << std::endl;
    Vector2D v3 = v1 - v2;
    std::cout << v3 << std::endl;
    std::cout << v3 * 42 << std::endl;
    std::cout << 42 * v3 << std::endl;

    return 0;
} */
/*
#include <iostream>
#include <vector>

class VectorN
{
private:
    unsigned int capacity;
    std::vector<int> coord;
public:
    // Конструктор вектора размерности n
    VectorN(unsigned int n){
        this->capacity = n;
        coord.resize(n);
    }
    VectorN(std::vector<int> &coord, int capacity) {
        this->capacity = capacity;
        this->coord = coord;
    }

    // Деструктор
    ~VectorN() {}

    // Получение размерности вектора
    unsigned getSize() const {
        return capacity;
    }

    // Получение значения i-ой координаты вектора,
    // i находится в диапазоне от 0 до n-1
    int getValue(unsigned int i) const {
        return coord[i];
    }

    // Задание значения i-ой координаты вектора равным value,
    // i находится в диапазоне от 0 до n-1
    void setValue(unsigned int i, int value) {
        coord[i] = value;
    }


    // Оператор == проверяет два вектора на равенство,
    // равны они, если строго равны всех их координаты
    bool operator== (const VectorN& v2) const {
        unsigned int size = 0;
        for (unsigned int i = 0; i < capacity; i++) {
            if (coord[i] == v2.coord[i]) size++;
        }
        if (size == capacity) return true;
        else return false;
    }


    // Оператор != проверяет два вектора на неравенство,
    // они не равны, если хотя бы одна координата отличается

    bool operator!= (const VectorN& v2) const {
        unsigned int size = 0;
        for (unsigned int i = 0; i < capacity; i++) {
            if (coord[i] == v2.coord[i]) size++;
        }
        if (size == capacity) return false;
        else return true;
    }


    // Оператор + складывает два вектора покоординатно,
    // возвращает результат как новый экземпляр вектора

    VectorN operator+ (const VectorN& v2) const {
        std::vector<int> COORD (capacity);
        for (unsigned int i = 0; i < capacity; i++) {
            COORD[i] = coord[i] + v2.coord[i];
        }
        return VectorN(COORD, capacity);
    }

    // Оператор * умножает вектор на скаляр типа int покоординатно,
    // возвращает результат как новый экземпляр вектора.
    // Умножение должно работать при любом порядке операндов.
    VectorN operator* (const int a) const {
        std::vector<int> COORD (capacity);
        for (unsigned int i = 0; i < capacity; i++) {
            COORD[i] = coord[i]*a;
        }
        return VectorN(COORD,capacity);
    }

};

VectorN operator* (int a, const VectorN& v) {
    std::vector<int> COORD (v.getSize());
    for (unsigned int i = 0; i < v.getSize(); i++) {
        COORD[i] = v.getValue(i) * a;
    }
    return VectorN(COORD,COORD.size());
}

int main() {

    VectorN a(4);
    a.setValue(0, 0);
    a.setValue(1, 1);
    a.setValue(2, 2);
    a.setValue(3, 3);

    VectorN b(4);
    b.setValue(0, 0);
    b.setValue(1, -1);
    b.setValue(2, -2);
    b.setValue(3, -3);

    std::cout << (a == b) << std::endl;
    std::cout << (a != b) << std::endl;

    VectorN c = a + b;
    VectorN d = 5 * c;

    for(unsigned int i = 0; i < a.getSize(); ++i)
        std::cout << d.getValue(i) << std::endl;

    return 0;
}
*/
/*
#include <iostream>
#include <numeric>
#include <vector>
#include <thread>
#include <random>

// 1. Проверить размер. Если он мал, то не распараллеливаем.
// 2. Определить количество исполнителей -- спросить у ОС.
// 3. Распределить данные между исполнителями.
// 4. Запустить исполнение.
// 5. Собрать ответы.

// Функция, которую будем передавать в потоки.
// Мы не можем получить оттуда возвращаемое значение через return,
// поэтому будем записывать его в переменную result по ссылке
template <typename Iterator, typename T>
void accumulate_wrapper(Iterator begin, Iterator end, T init, T& result) {
    result = std::accumulate(begin, end, init);
}

template <typename Iterator, typename T, typename A>
T parallel_accumulate(Iterator begin, Iterator end, T init, A workers) {
    // Размер диапазона
    auto size = std::distance(begin, end);
    // Количество исполнителей
    auto hard_workers = std::thread::hardware_concurrency();
    auto num_workers = std::thread::hardware_concurrency();
    if (hard_workers > workers) num_workers = workers;
    // Проверяем, нужно ли распараллеливать
    if (size < num_workers * 4) {
        return std::accumulate(begin, end, init);
    }
    // Распараллеливать всё-таки нужно, тогда:
    // Считаем количество данных на одного исполнителя
    auto size_per_worker = size / num_workers;
    // Создаём два вектора: с потоками и для записи результатов
    std::vector<std::thread> threads;
    std::vector<T> results(num_workers - 1);
    // Распределяем данные и запускаем потоки
    // (на 1 меньше максимума, так как ещё есть основной поток).
    for(auto i = 0u; i < num_workers - 1; i++) {
        threads.push_back(std::thread(accumulate_wrapper<Iterator, T>,
                                      std::next(begin, i * size_per_worker), // сдвиг begin
                                      std::next(begin, (i + 1) * size_per_worker), // сдвиг begin
                                      0, // init
                                      std::ref(results[i]))); // для записи результата
    }
    // Производим расчёт и в основном потоке (с учётом переданного init)
    auto main_result = std::accumulate(
            std::next(begin, (num_workers - 1) * size_per_worker),
            end, init);

    // Ждём, пока остальные потоки завершат работу
    for(auto& thread: threads) {
        thread.join();
    }
    // Собираем все вычисленные результаты
    return std::accumulate(std::begin(results),
                           std::end(results), main_result);
}

int main () {
    system("chcp 65001");

    int workers;
    std::cout << "Введите количество исполнителей:" << std::endl;
    std::cin >> workers;
// Считаем сумму чисел от 0 до 99
    std::cout << "Cумма чисел от 0 до 99: ";
    std::vector<int> sequence(100);
    std::iota(std::begin(sequence), std::end(sequence), 0);
    std::cout << parallel_accumulate(std::begin(sequence),
                                     std::end(sequence),
                                     0, workers);

    // TODO: Сгенерируйте вектор случайных чисел,
    // используя инструментарий из библиотеки random,
    // и вычислите их сумму с помощью функции
    // parallel_accumulate.

    auto current_time = std::chrono::steady_clock::now().time_since_epoch().count() / static_cast<unsigned long long>(1e9);
    auto generator = std::mt19937_64(current_time);
    unsigned long long size;
    std::cout << std::endl << "Введите размер рандомного массива:" << std::endl;
    std::cin >> size;
    auto distribution = std::uniform_int_distribution(0, 1000);

    std::cout << "Последовательность рандомных чисел: " << std::endl;
    std::vector<long int> new_nums (size);
    for (int i = 0; i < new_nums.size(); i++) {
        new_nums[i] = distribution(generator);
        std::cout << new_nums[i] << std::endl;

    }
    std::cout << "Cумма последовательности рандомных чисел: ";
    std::cout << parallel_accumulate(std::begin(new_nums),
                                     std::end(new_nums),
                                     0, workers);


    return 0;
}
*/
/*
#include <iostream>
#include <vector>
#include <cmath>

bool IsSimple (int a) {
    if(a > 1){
    int capacity = 0;
    for (int i = 2; i <= sqrt(a); i++) {
        if ((a%i)==0) capacity++;
    }
    if (capacity == 0) return true;
    }
    else return false;
}

int main() {

    std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << IsSimple(5);



    return 0;
}
 */
/*
#include <iostream>
#include <exception>
#include <sstream>

// Класс исключения для передачи сообщения об избытке топлива
class PetrolOverflowException : public std::exception {
public:
    // Конструктор -- здесь мы формируем сообщение
    PetrolOverflowException(unsigned n) {
        std::stringstream ss;
        ss << n << " is too much";
        message = ss.str();
    }

    // Метод what() -- выдаём сообщение в виде С-строки
    const char* what() const noexcept override {
        return message.c_str();
    }
private:
    std::string message;
};

class PetrolNotEnoughException : public std::exception {
public:
    PetrolNotEnoughException (unsigned n) {
        std::stringstream ss;
        ss << n << " too much, there is not so much in the tank";
        message = ss.str();
    }

    const char* what() const noexcept override {
        return message.c_str();
    }

private:
    std::string message;
};

class GasStation {
public:
    // Конструктор, принимающий один параметр - ёмкость резервуара колонки
    // Резервуар создаётся пустой
    GasStation(unsigned capacity): capacity(capacity), size(0u) {}

    // Залить в резервуар колонки n литров топлива
    // Если столько не влезает в резервуар - не заливать ничего, выбросить std::exception
    void fill(unsigned int n) {
        if (size + n > capacity) {
            throw PetrolOverflowException(n);
        }
        size += n;
    }

    // Заправиться, забрав при этом из резервура n литров топлива
    // Если столько нет в резервуаре - не забирать из резервуара ничего, выбросить std::exception
    void tank(unsigned int n) {
        if (n > size) {
            throw PetrolNotEnoughException(n);
        }
        size -= n;
    }

    // Запросить остаток топлива в резервуаре
    unsigned int get_limit() const {
        return size;
    }

private:
    unsigned size;
    const unsigned capacity;
};

using std::cout, std::endl;

int main() {
    GasStation s = GasStation(1000);            // Колонка на 1000, пока пустая
    s.fill(300);                                // Это влезет в резервуар,
    cout << s.get_limit() << endl;              // ... так что здесь увидим на экране 300.

    s.tank(100);                                // Забрали из резервуара 100,
    s.fill(300);                                // ... после чего долили ещё 300,
    cout << s.get_limit() << endl;              // ... так что на экране ожидаем 500.

    for(unsigned int i = 0; i < 5; i++)         // В цикле забрали 5 раз по 50,
        s.tank(50);
    cout << s.get_limit() << endl;              // ... так что на экране ожидаем 250.

    //s.fill(1000);
    //try{
      //  s.fill(1000);                               // А вот тут ожидаем exception.
    //} catch (std::exception& ex) {
      //  std::cout << ex.what() << std::endl;
    //}
    // (После проверки exception-а строку стоит просто убрать.)

    for(unsigned int i = 0; i < 50; i++) {      // Теперь пытаемся забрать 50 раз по 100,
        s.tank(100);                            // из-за чего на третьей попытке ждём exception.
        cout << s.get_limit() << endl;
    }

    return 0;
} */
/*
#include <iostream>
#include <string>

template <typename T>
T get_min_value(T a, T b) {
    if (a < b) return a;
    else return b;
};

int main () {

    int a = 5;
    int b = 4;
    std::string s1 = "abc";
    std::string s2 = "zxc";
    std::cout << "Min int: " << get_min_value(a, b) << std::endl;
    std::cout << "Min string: " << get_min_value(s1, s2) << std::endl;

    return 0;
}
*/
/*
#include <iostream>

struct student {
    std::string name;
    std::string id_number_string;
};

bool operator== (student &a, student &b) {
    return a.id_number_string == b.id_number_string;
}

int main() {
    student a = {"Andy", "1234 123123"};
    student b = {"Andrew", "1234 123123"};
    student c = {"Andy", "1234123123"};
    bool x = a == c;
    std::cout << std::boolalpha << "Check result is: " << x << std::endl;

    return 0;
}
 */
/*
#include <iostream>

template <typename T>
class Vector2D
{
private:
    T x, y;

public:
    // Конструкторы
    Vector2D(T x, T y): x(x), y(y) {}
    Vector2D() {}

    // Деструктор
    ~Vector2D(){}

    // Получение координат
    T getX() const {
        return x;
    }
    T getY() const {
        return y;
    }

    // Задание координат
    void setX(T x) {
        this->x = x;
    }
    void setY(T y) {
        this->y = y;
    }

    // Перегруженный оператор - сравнение двух векторов на равенство
    bool operator== (const Vector2D& v2) const {
        return (x == v2.x && y == v2.y);
    }

    // Ещё один перегруженный оператор - неравенство векторов
    // Да, это отдельный оператор! Хинт - настоящие джедаи смогут для != использовать уже написанное ==
    bool operator!= (const Vector2D& v2) const {
        bool x_ = (x==v2.x);
        bool y_ = (y==v2.y);
        if (x_ == true && y_ == true) return false;
        else return true;
    }

    // Сумма двух векторов, исходные вектора не меняются, возвращается новый вектор
    Vector2D operator+ (const Vector2D& v2) const {
        return Vector2D(x + v2.getX(), y + v2.getY());
    }

    // Вычитание векторов, исходные вектора не меняются, возвращается новый вектор
    Vector2D operator- (const Vector2D& v2) const {
        return Vector2D(x - v2.getX(), y - v2.getY());
    }

    // Оператор умножения вектора на скаляр, исходный вектор не меняется, возвращается новый вектор
    Vector2D operator* (const int a) const {
        return Vector2D(x*a, y*a);
    }
};

// Оператор умножения скаляра на вектор, исходный вектор не меняется, возвращается новый вектор
// Неожиданно, правда? Умножение скаляра на вектор - это отдельный оператор, причём описанный *вне* класса.
template <typename T>
Vector2D<T> operator* (int a, const Vector2D<T> &v) {
    return Vector2D<T>(a*v.getX(), a*v.getY());
}

// Вывод вектора, ожидается строго в формате (1; 1)
template <typename T>
std::ostream& operator<<(std::ostream& os, const Vector2D<T> &v) {
    os << "(" << v.getX() << "; " << v.getY() << ")";
    return os;
}

// Чтение вектора, читает просто две координаты без хитростей
template <typename T>
std::istream& operator>>(std::istream &is, Vector2D<T> &v) {
    T X, Y;
    is >> X >> Y;
    v.setX(X);
    v.setY(Y);
    return is;
}

int main (){

    Vector2D<int> v1;
    std::cin >> v1;
    std::cout << "Read vector: " << v1 << std::endl;
    std::cout << "Vector multiplied by 42: " << v1 * 42 << std::endl;

    Vector2D<double> v2;
    std::cin >> v2;
    std::cout << "Read vector: " << v2 << std::endl;
    std::cout << "Vector multiplied by 42: " << 42 * v2 << std::endl;

    return 0;
}
 */
/*
#include <iostream>
#include <chrono>
#include <cmath>

template <typename Duration>
class Timer {
public:
    Timer(): begin(std::chrono::steady_clock::now()), last_time(std::chrono::steady_clock::now()
    - std::chrono::steady_clock::now()) {}
    ~Timer() {
        std::cout << "Time is " <<   std::chrono::duration_cast<Duration> (last_time +
        std::chrono::steady_clock::now() - begin).count() << std::endl;
    }
    void pause_timer() {
        //auto now = std::chrono::steady_clock::now();
        last_time += std::chrono::steady_clock::now() - begin;
    }

    void stop_pause_timer() {
        begin = std::chrono::steady_clock::now();
    }
private:
    std::chrono::steady_clock::time_point begin;
    std::chrono::steady_clock::duration last_time;
};

int main() {
    auto sum = 0.;

    Timer<std::chrono::milliseconds> t;
    for(auto i = 0; i < 100000; i++) {
        sum += std::sin(i) + std::cos(i);
    }

    //Cтавим на паузу таймер
    t.pause_timer();
    for(auto i = 0; i < 100000; i++) {
        sum += std::sin(i) + std::cos(i);
    }
    //Снимаем с паузы таймер
    //В данной реализации таймера метод stop_pause_timer обязателен
    //после того, как мы восспользовались pause_timer

    t.stop_pause_timer();
    std::cout << "Sum is " << sum << std::endl;
    return 0;
}

*/
/*
#include <iostream>
#include <vector>
#include <chrono>
#include <random>
#include <algorithm>
//Найти все нули в последовательности
bool IsOdd (int i) {
    return i == 0;
}

void print ( std::vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << std::endl;
    };
}

int main() {
    std::vector<int> nums(10);
    auto current_time = std::chrono::steady_clock::now().time_since_epoch().count() / static_cast<unsigned long long>(1e9);
    auto generator = std::mt19937_64(current_time);
    int size1 = nums.size();
    auto distribution = std::uniform_int_distribution(0, size1);
    for (int i = 0; i < nums.size(); i++) {
        nums[i] = distribution(generator);
        std::cout << nums[i] << std::endl;

    }
    int capacity = std::count_if(nums.begin(), nums.end(), IsOdd);
    std:: cout << "Nulls: " <<capacity;

    return 0;
}

 */
/*
#include <iostream>
#include <string>
#include <algorithm>

bool Find_A(char c) {
    return c == 'a';
}
int main() {
    std::string our_string;
    std::cin >> our_string;
    auto _element = std::find_if(our_string.begin(), our_string.end(), Find_A);
    if (_element != our_string.end()) {
        std::cout << "'a' finds";
    }
    else  std::cout << "'a' not finds";
    return 0;
}
*/
/*
#include <iostream>
#include <numeric>
unsigned int least_common_multiple(unsigned int a, unsigned int b) {
    return (a*b)/std::gcd(a,b);
}

int main() {
    unsigned int k, m;
    std::cin >> k >> m;
    std::cout << k << " " << m << std::endl;
    unsigned int NOK = least_common_multiple(k, m);
    std::cout << "NOK k&m: "<< NOK;

    return 0;
}

*/

//Создать базовый класс и в нем виртуальную функцию. Ее определить в дочернем классе.
/*
#include <iostream>
#include <string>

class Parent {
public:
    Parent(): name("Parent") {}
    virtual void my_function() = 0;
protected:
    std::string name;
};

class Son: public Parent {
public:
    Son(): name("Son") {}
    void my_function() override {
        std::cout<< name;
    }

protected:
    std::string name;

};

int main() {
    auto son = Son();
    Parent* ptr =  &son;
    ptr->my_function();

    return 0;
}
 */

//Для каждого символа найти количество вхождений в строку
/*
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

void print ( std::vector<char> &v) {
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << std::endl;
    };
}

bool chek(char c, std::vector<char> &chars) {
    int sum = 0;
    for (int i = 0; i < chars.size(); i++) {
        if (c == chars[i]) sum++;
    }
    if (sum == 0) return true;
    if (sum != 0) return false;
}

int main() {

    std::string my_string;
    std::getline(std::cin, my_string);
    std::vector <char> v(my_string.size());
    for (int i = 0; i < my_string.size(); i++) {
        v[i] = my_string[i];
    };
    //print(v);
    std::vector<char> new_v(2);
    for (int i = 0; i < v.size(); i++) {
        if (chek(v[i],new_v)) {
            int mycount = std::count(v.begin(), v.end(), v[i]);
            std::cout << v[i] << ": " << mycount << std::endl;
            new_v.push_back(v[i]);
        }
    }

    return 0;
}
 */

/*
#include <set>
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

class SessionManager
{
public:
    SessionManager() {};
    // Вход пользователя.
    // Один пользователь может войти несколько раз подряд,
    // считать его при этом нужно один раз.
    void login(const std::string& username) {
        who_online.insert(username);
    }

    // Выход пользователя.
    // Пользователь может выйти несколько раз подряд,
    // падать при этом не нужно.
    void logout(const std::string& username) {
        who_online.erase(username);
    }

    // Сколько сейчас пользователей залогинено.
    int getNumberOfActiveUsers() const {
        return who_online.size();
    }

private:
    std::set<std::string> who_online;
};

int main() {

    SessionManager m;
    m.login("alice");
    cout << m.getNumberOfActiveUsers() << endl;
    m.login("bob");
    cout << m.getNumberOfActiveUsers() << endl;
    m.login("alice");
    cout << m.getNumberOfActiveUsers() << endl;
    m.logout("whoever");
    cout << m.getNumberOfActiveUsers() << endl;
    m.logout("alice");
    cout << m.getNumberOfActiveUsers() << endl;
    m.logout("bob");
    cout << m.getNumberOfActiveUsers() << endl;

    return 0;
}
 */
/*
#include <iostream>
#include <map>
#include <string>

using namespace std;

class Tracker
{
public:
    // При любом действии пользователя вызывается этот метод.
    // Методу передаётся:
    // - какой пользователь совершил действие (username);
    // - когда (timestamp - для простоты условные секунды от начала времён).
    // Внимание: не гарантируется, что timestamp расположены строго по
    // возрастанию, в них может быть любой бардак.
    void click(const string& username, unsigned long long timestamp) {
        if (capacity_click.find(username) == capacity_click.end()) {
            capacity_click.insert(std::pair<std::string, unsigned>(username, 1));
            old_click.insert(std::pair<std::string, unsigned>(username, timestamp));
            young_click.insert(std::pair<std::string, unsigned>(username, timestamp));
        }
        else {
            capacity_click[username]++;
            if (timestamp < old_click[username]) {
                old_click[username] = timestamp;
            }
            if (timestamp > young_click[username]) {
                young_click[username] = timestamp;
            }
        }

    }

    // По имени пользователя нужно вернуть, сколько всего было кликов
    unsigned long long getClickCount(const string& username) {
        return capacity_click[username];
    }

    // Когда был первый клик
    unsigned long long getFirstClick(const string& username) {
        return old_click[username];
    }

    // Когда был последний клик
    unsigned long long getLastClick(const string& username) {
        return young_click[username];
    }
private:
    std::map<std::string, unsigned long long> capacity_click;
    std::map<std::string, unsigned long long> old_click;
    std::map<std::string, unsigned long long> young_click;
};

int main() {

    Tracker t;
    t.click("alice", 1000);
    t.click("bob", 1100);
    t.click("alice", 1001);
    t.click("alice", 1200);
    t.click("alice", 1002);
    cout << t.getClickCount("alice") << endl;
    cout << t.getClickCount("bob") << endl;
    cout << t.getFirstClick("alice") << endl;
    cout << t.getFirstClick("bob") << endl;
    cout << t.getLastClick("alice") << endl;
    cout << t.getLastClick("bob") << endl;

    return 0;
}
*/
/*
#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

class TelemetryController
{
public:
    // Получить и обработать событие. Параметрами передаются:
    // - device - идентификатор устройства, с которого пришло значение;
    // - value - собственно значение некоторой величины, переданное устройством.
    void handleEvent(const string& device, long value) {
        if (capacity_value.find(device) == capacity_value.end()) {
            capacity_value.insert(std::pair<std::string, unsigned int>(device, 1));
            min_value.insert(std::pair<std::string, long>(device, value));
            max_value.insert(std::pair<std::string, long>(device, value));
        }
        else {
            capacity_value[device]++;
            if (value < min_value[device]) {
                min_value[device] = value;
            }
            if (value > max_value[device]) {
                max_value[device] = value;
            }
        }
    }

    // По идентификатору устройства возвращает,
    // сколько всего значений от него пришло за всё время
    unsigned int getEventsCount(const string& device) {
        return capacity_value[device];
    }

    // По идентификатору устройства возвращает
    // минимальное значение за всё время, пришедшее от данного устройства
    long getMinValue(const string& device) {
        return min_value[device];
    }

    // По идентификатору устройства возвращает
    // максимальное значение за всё время, пришедшее от данного устройства
    long getMaxValue(const string& device) {
        return max_value[device];
    }
private:
    std::map<std::string, unsigned int> capacity_value;
    std::map<std::string, long> min_value;
    std::map<std::string, long> max_value;
};

int main() {

    TelemetryController tc;

    tc.handleEvent("d1", 42);
    tc.handleEvent("d1", -42);
    tc.handleEvent("d2", 100);


    cout << "Events count for d1: " << tc.getEventsCount("d1") << endl;
    cout << "Min value for d1: " << tc.getMinValue("d1") << endl;
    cout << "Max value for d1: " << tc.getMaxValue("d1") << endl;

    return 0;
}
*/

/*
#include <iostream>
#include <vector>
#include <algorithm>

void print_vec(std::vector<int> &vec) {
    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    unsigned size1;
    std::cin >> size1;

    std::vector<int> vec_size(size1);
    std::vector<int> vec_seq(size1);
    std::vector<int> all_elements;

    for (int i = 0; i < size1; i++) {
        int Ni, Ki;
        std::cin >> Ni >> Ki;
        vec_size[i] = Ni;
        vec_seq[i] = Ki;
        for (int j = 0; j < Ni; j++) {
            int element;
            std::cin >> element;
            all_elements.push_back(element);
        }
    }

    //print_vec(vec_size);
    //print_vec(vec_seq);
    //print_vec(all_elements);

    for (int i = 0; i < size1; i++) {

        std::vector<int> sequence(vec_size[i]);

        for (int j = 0; j < sequence.size(); j++) {
            sequence[j] = all_elements[j];
        }

        std::vector<int> max_elements;

        for (int k = 0; k < (vec_size[i] - vec_seq[i] + 1); k++) {
            std::vector<int> subsequence;
            for (int j = 0; j < vec_seq[i]; j++) {
                subsequence.push_back(sequence[j]);
            }

            std::sort(subsequence.begin(), subsequence.end());
            auto it = subsequence.end() - 2;
            max_elements.push_back((*it));

            sequence.erase(sequence.begin());
        }

        //std::cout << "Max elements: ";
        print_vec(max_elements);

       auto it = all_elements.begin();
       all_elements.erase(it, it + vec_size[i]);

    }

    return 0;
}

*/
/*
#include <iostream>

using std::cin, std::cout, std::endl;

class Rational {
public:
    // Конструктор дроби, здесь a - числитель, b - знаменатель

    Rational() {};
    Rational(int a, int b): numerator(a), denominator(b) {}

    // Реализуйте операторы:
    // - сложения двух дробей
    Rational operator+(Rational other) const {
        return {numerator * other.denominator + denominator * other.numerator,
                denominator * other.denominator};
    }

    Rational operator-(Rational other) const {
        return Rational(numerator * other.denominator - denominator * other.numerator,
                        denominator * other.denominator);
    }

    Rational operator*(Rational other) const {
        return Rational(numerator * other.numerator,
                        denominator * other.denominator);
    }

    Rational operator/(Rational other) const {
        return Rational(numerator * other.denominator,
                        denominator * other.numerator);
    }

    Rational operator*(int number) const {
        return {numerator * number, denominator};
    }

    friend std::ostream& operator<<(std::ostream&, Rational);
    friend std::istream& operator>>(std::istream&, Rational);
    // - вычитания двух дробей
    // - умножения двух дробей
    // - деления двух дробей
    // - умножения дроби на целое число (должно работать при любом порядке операндов)
private:
    int numerator, denominator;
};

Rational operator*(int number, Rational other) {
    return other * number;
}

std::ostream& operator<<(std::ostream& out, Rational rational) {
    return out << rational.numerator << '/' << rational.denominator;
}

std::istream& operator>>(std::istream& in, Rational rational) {
    std::string a;
    return in >>
}

int main()
{
    Rational a(1, 2);
    Rational b(1, 3);

    cout << a << endl;
    cout << b << endl;
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << 3 * a << endl;
    cout << b * 4 << endl;

    Rational c;
    cin >> c;
    cout << c << endl;

    return 0;
}
 */
/*
#include <iostream>
#include <cmath>


class Point
{
protected:
    double _x;
    double _y;
    double _z;

public:
    Point(double x, double y, double z): _x(x), _y(y), _z(z) {
    }

    double x() const {
        return _x;
    }

    double y() const {
        return _y;
    }

    double z() const {
        return _z;
    }
};


class Sphere
{
public:
    // Конструктор сферы с центром в точке center и радиусом r
    Sphere(const Point& center, double r): center(center), r(r) {};

    // Проверка, попадает ли заданная точка p в данную сферу.
    // (Расстояния сравнивать с точностью 1e-6.)
    bool covers(const Point& p) const {
        double po = std::sqrt((p.x() - center.x())*(p.x() - center.x()) + (p.y() - center.y())*(p.y() - center.y())
                + (p.z() - center.z())*(p.z() - center.z()));
        if (po <= r) return true;
        else return false;
    }

protected:
    Point center;
    double r;
};

int main() {

    // Создаём сферу
    Point center(10.0, 10.0, 10.0);
    Sphere s(center, 0.5);

    // Создаём пару тестовых точек
    Point p1(10.1, 10.1, 10.1);
    Point p2(2, 2, 2);

    // Ожидаем, что первая точка внутри сферы
    std::cout << std::boolalpha << s.covers(p1) << std::endl;
    // Ожидаем, что вторая точка не попала внутрь сферы
    std::cout << std::boolalpha << s.covers(p2) << std::endl;

    return 0;
}
 */
/*
#include <iostream>

class MoneyBox {
public:
    // Конструктор и деструктор, если нужны
    MoneyBox() {
        this->Value = 0;
        this->capacity = 0;
    };

    // Добавить монетку достоинством value
    void addCoin(unsigned int value) {
        capacity += value;
        Value++;
    }

    // Получить текущее количество монеток в копилке
    unsigned int getCoinsNumber() const {
        return Value;
    }

    // Получить текущее общее достоинство всех монеток
    unsigned int getCoinsValue() const {
        return capacity;
    }

private:
    unsigned int Value;
    unsigned int capacity;
};

int main() {

    MoneyBox m;
    // Добавили монетку достоинством 10
    m.addCoin(10);
    // Добавили монетку достоинством 5
    m.addCoin(5);

    // Ожидаем, что монеток внутри 2 штуки
    std::cout << m.getCoinsNumber() << std::endl;
    // Ожидаем, что общее достоинство всех монеток 15
    std::cout << m.getCoinsValue() << std::endl;

    return 0;
}
 */

#include <iostream>
#include <exception>

class GasStation {
public:
    // Конструктор, принимающий один параметр - ёмкость резервуара колонки
    // Резервуар создаётся пустой
    GasStation(unsigned int capacity) {
        this->capacity = capacity;
        this->value = 0;
    }

    // Залить в резервуар колонки n литров топлива
    // Если столько не влезает в резервуар - не заливать ничего, выбросить std::exception
    void fill(unsigned int n) {
        if ((capacity - value) >= n) value += n;
        else throw std::exception();
    }

    // Заправиться, забрав при этом из резервура n литров топлива
    // Если столько нет в резервуаре - не забирать из резервуара ничего, выбросить std::exception
    void tank(unsigned int n) {
        if (value >= n) value -= n;
        else throw std::exception();
    }

    // Запросить остаток топлива в резервуаре
    unsigned int get_limit() const {
        return value;
    }

private:
    unsigned int capacity;
    unsigned int value;
};

int main() {

    GasStation s = GasStation(1000);            // Колонка на 1000, пока пустая
    s.fill(300);                                // Это влезет в резервуар,
    std::cout << s.get_limit() << std::endl;              // ... так что здесь увидим на экране 300.

    s.tank(100);                                // Забрали из резервуара 100,
    s.fill(300);                                // ... после чего долили ещё 300,
    std::cout << s.get_limit() << std::endl;              // ... так что на экране ожидаем 500.

    for(unsigned int i = 0; i < 5; i++)         // В цикле забрали 5 раз по 50,
        s.tank(50);
    std::cout << s.get_limit() << std::endl;              // ... так что на экране ожидаем 250.

    //s.fill(1000);                               // А вот тут ожидаем exception.
    // (После проверки exception-а строку стоит просто убрать.)

    for(unsigned int i = 0; i < 50; i++) {      // Теперь пытаемся забрать 50 раз по 100,
        s.tank(100);                            // из-за чего на третьей попытке ждём exception.
        std::cout << s.get_limit() << std::endl;
    }

    return 0;
}

/*
#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> nums;
    int size;
    std::cin >> size;

    int num;
    for (int i = 0; i < size; i++) {
        std::cin >> num;
        nums.push_back(num);
    }

    for (int i = 0; i < size; i++) {
        auto MaxElement = std::max_element(nums.begin(), nums.end());
        int Count = std::count(nums.begin(), nums.end(), *MaxElement);
        if (Count == 1) {
            std::cout << *MaxElement;
            break;
        }
        else {
            std::sort(nums.begin(), nums.end());
            nums.resize(std::distance(nums.begin(), nums.end() - Count));
        }
    }

    return 0;
}
 */
/*
#include <iostream>
#include <exception>

// Кофе-пойнт
class CoffeePoint {
public:
    virtual ~CoffeePoint() = default;

    // Метод возвращает цену кофе по умолчанию в конкретном типе ларька
    virtual int getDefaultPrice() const = 0;
};


// Грузовой автомобиль
class Truck {
public:
    virtual ~Truck() = default;

    // Метод возвращает максимальную скорость автомобиля конкретного типа
    virtual int getMaxSpeed() const = 0;
};

class CoffeeTruck: public CoffeePoint, public Truck {

public:
    int getDefaultPrice() const override {
        return 80;
    }

    int getMaxSpeed() const override {
        return 60;
    }
};

int main() {


    return 0;
}
 */
/*
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Point2D
{
protected:
    double _x;
    double _y;

public:
    // Конструктор точки с заданными координатами
    Point2D(double x, double y): _x(x), _y(y) {
    }

    // Получить координату X точки
    double x() const {
        return _x;
    }

    // Получить координату Y точки
    double y() const {
        return _y;
    }
};

class Polygon
{
private:
    std::vector<Point2D> Points;
public:
    // Конструктор, создаёт многоугольник из набора точек.
    // Точки передаются в порядке обхода многоугольника по контуру.
    Polygon(const std::vector<Point2D>& points) {
        for (int i = 0; i < points.size(); i++) {
            Points.push_back(points[i]);
        }
    }

    // Деструктор, если нужен

//~Polygon();

    // Возвращает периметр многоугольника
    double perimeter() const {
        int sum = 0;
        for (int i = 0; i < Points.size() + 1; i++) {
            if (i == Points.size() - 1) break;
            sum += std::sqrt((Points[i].x() - Points[i+1].x())*(Points[i].x() - Points[i+1].x()) +
                                     (Points[i].y() - Points[i+1].y())*(Points[i].y() - Points[i+1].y()));
        }
        sum += std::sqrt((Points[0].x() - Points[Points.size() - 1].x())*(Points[0].x() - Points[Points.size() - 1].x()) +
                         (Points[0].y() - Points[Points.size() - 1].y())*(Points[0].y() - Points[Points.size() - 1].y()));
        return sum;
    }

    // Возвращает количество вершин многоугольника
    unsigned int size() const {
        return Points.size();
    }

    // Возвращает N-ую вершину многоугольника
    // (вершины нумеруются начиная с нуля в том же порядке, в котором были переданы)
    Point2D vertex(unsigned int N) const {
        return Points[N];
    }
};


int main() {

    std::vector<Point2D> points = {{-1.0, -1.0}, {-1.0, 1.0}, {1.0, 1.0}, {1.0, -1.0}};
    Polygon p(points);
    cout << "Points:" << endl;
    for(unsigned int i = 0; i < p.size(); i++) {
        cout << p.vertex(i).x() << " " << p.vertex(i).y() << endl;
    }
    cout << "Perimeter: " << p.perimeter() << endl;
    return 0;


}
 */
/*
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Truck {
public:
    // Конструктор:
    // - capacity - грузоподъемность
    // - speed - скорость
    // - number - номер (да, это строка)
    Truck(unsigned int capacity, unsigned int speed, const std::string& number): capacity(capacity),
    speed(speed), number(number) {}

    friend std::ostream& operator<<(std::ostream&, Truck);
    // Дополнительные методы и операторы, которые потребуются
private:
    unsigned int capacity;
    unsigned int speed;
    std::string number;
};

std::ostream& operator<<(std::ostream& out, Truck truck) {
    return out << truck.number << ' ' << truck.capacity << ' ' << truck.speed;
}

int main() {
    vector<Truck> data;
    data.push_back(Truck(10, 10, "a720po"));
    data.push_back(Truck(100, 10, "a721aa"));
    data.push_back(Truck(100, 20, "e721op"));
    data.push_back(Truck(10, 10, "o720po"));

    for(const Truck& c : data) {
        cout << c << endl;
    }
    return 0;
}
 */
/*
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

int main() {

    std::vector<unsigned long long> nums;
    unsigned long long size;
    std::cin >> size;

    unsigned long long one_number;
    for (unsigned long long i = 0; i < size; i++) {
        std::cin >> one_number;
        nums.push_back(one_number);
    }

    std::map<unsigned long long, unsigned long long> counter;
    for (unsigned long long i = 0; i < size; i++) {
        unsigned long long Count = std::count(nums.begin(), nums.end(), nums[i]);
        counter.insert(std::pair<unsigned long long, unsigned long long>(nums[i], Count));

        std::vector<unsigned long long> NUMS;
        for (unsigned long long j = 0; j < nums.size(); j++) {
            if (nums[i] != nums[j]) NUMS.push_back(nums[j]);
        }
        nums.clear();
        for (unsigned long long j = 0; j < NUMS.size(); j++) {
            nums.push_back(NUMS[j]);
        }
        NUMS.clear();

    }

    for (auto i = 0; i < counter.size(); i++) {
       std::cout << counter[i] << " ";
    }
    auto it = counter.begin();
    //std::cout << std::endl;
    //std:: cout << it->first;


    return 0;
}

*/
/*
#include <vector>
#include<iostream>
#include<cmath>
using namespace std;


class Point2D
{
protected:
    double _x;
    double _y;

public:
    // Конструктор точки с заданными координатами
    Point2D(double x, double y): _x(x), _y(y) {
    }

    // Получить координату X точки
    double x() const {
        return _x;
    }

    // Получить координату Y точки
    double y() const {
        return _y;
    }
};

class Polygon
{
public:
    // Конструктор, создаёт многоугольник из набора точек.
    // Точки передаются в порядке обхода многоугольника по контуру.
    Polygon(const std::vector<Point2D>& points){
        for(int i = 0; i < points.size(); i++){
            Points.push_back(points[i]);
        }
    }

    // Деструктор, если нужен

    // Возвращает периметр многоугольника
    double perimeter() const{
        auto sum = 0;
        for(int i = 0; i < Points.size() - 1; i++){
            sum += sqrt((Points[i + 1].x() - Points[i].x())*(Points[i + 1].x() - Points[i].x())
                    + (Points[i + 1].y() - Points[i].y())*(Points[i + 1].y() - Points[i].y()));
        }
        sum += sqrt((Points[Points.size() - 1].x() - Points[0].x())*(Points[Points.size() - 1].x() - Points[0].x())+
                            (Points[Points.size() - 1].y() - Points[0].y())*(Points[Points.size() - 1].y() - Points[0].y()));
        return sum;
    }

    // Возвращает количество вершин многоугольника
    unsigned int size() const{
        return Points.size();
    }

    // Возвращает N-ую вершину многоугольника
    // (вершины нумеруются начиная с нуля в том же порядке, в котором были переданы)
    Point2D vertex(unsigned int N) const{
        return Points[N];
    }

private:
    vector<Point2D> Points;
};
int main()
{
    std::vector<Point2D> points = {{-1.0, -1.0}, {-1.0, 1.0}, {1.0, 1.0}, {1.0, -1.0}};
    Polygon p(points);
    cout << "Points:" << endl;
    for(unsigned int i = 0; i < p.size(); i++) {
        cout << p.vertex(i).x() << " " << p.vertex(i).y() << endl;
    }
    cout << "Perimeter: " << p.perimeter() << endl;
    return 0;
}
 */
/*
#include <vector>
#include<iostream>
#include<cmath>
using namespace std;



class Point2D
{
protected:
    double _x;
    double _y;

public:
    // Конструктор точки с заданными координатами
    Point2D(double x, double y): _x(x), _y(y) {
    }

    // Получить координату X точки
    double x() const {
        return _x;
    }

    // Получить координату Y точки
    double y() const {
        return _y;
    }
};
class Polygon
{
public:
    // Конструктор, создаёт многоугольник из набора точек.
    // Точки передаются в порядке обхода многоугольника по контуру.
    Polygon(const std::vector<Point2D>& points){
        for(int i = 0; i < points.size(); i++){
            Points.push_back(points[i]);
        }
    }

    // Деструктор, если нужен

    // Возвращает периметр многоугольника
    double perimeter() const{
        double sum = 0;
        for(int i = 0; i < Points.size() - 1; i++){
            sum += sqrt(pow((Points[i + 1].x() - Points[i].x()), 2) + pow((Points[i + 1].y() - Points[i].y()), 2));
        }
        sum += sqrt(pow(Points[Points.size() - 1].x() - Points[0].x(), 2) + pow(Points[Points.size() - 1].y() - Points[0].y(), 2));
        return round(sum);
    }

    // Возвращает количество вершин многоугольника
    unsigned int size() const{
        return Points.size();
    }

    // Возвращает N-ую вершину многоугольника
    // (вершины нумеруются начиная с нуля в том же порядке, в котором были переданы)
    Point2D vertex(unsigned int N) const{
        return Points[N];
    }

    unsigned int Size() const{
        return Points.size() + Points.size();
    }

private:
    vector<Point2D> Points;
};

int main()
{
    std::vector<Point2D> points = {{-1.0, -1.0}, {-1.0, 1.0}, {1.0, 1.0}, {1.0, -1.0}};
    Polygon p(points);
    cout << "Points:" << endl;
    for(unsigned int i = 0; i < p.size(); i++) {
        cout << p.vertex(i).x() << " " << p.vertex(i).y() << endl;
    }
    cout << "Perimeter: " << p.perimeter() << endl;
    return 0;
}
 */
/*
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
    int size;
    std::cin >> size;

    std::vector<int> nums;

    int number;

    for(int i = 0; i < size; ++i){
        cin >> number;
        nums.push_back(number);
    }

    std::vector<int> counter;

    for(int i = 0; i < size; i++){
        auto it = std::count(nums.begin(), nums.end(), nums[i]);
        counter.push_back(it);
    }

    std::vector<int> vec(size);
    for (int i = 0; i < size; i++){
        vec[i] = i;
    }

    std::sort(nums.begin(), nums.end());
    auto it = *std::max_element(counter.begin(), counter.end());
    vec.clear();

    std::vector<int> pretend;

    for(int i = 0; i < size; i++){
        auto y = std::count(nums.begin(), nums.end(), nums[i]);
        if(y == it){
            pretend.push_back(nums[i]);
        }
    }

    for (int i = 0; i < size; i++){
        vec[i] = i;
    }
    vec.clear();

    auto l = std::unique(pretend.begin(), pretend.end());
    pretend.erase(l, pretend.end());

    std::cout << pretend[0];

    return 0;
}
*/
/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
#include <map>
#include <math.h>
#include <stdio.h>


int main()
{
    std::map<unsigned int, std::string> memcheck;
    double x0, y0, z0, R;
    std::cin >> x0 >> y0 >> z0 >> R;
    int n;
    std::cin >> n;
    std::vector<int> vec(n);
    for (int i = 0; i < n; i++){
        vec[i] = i;
    }
    std::vector<std::string> Vec;
    for (int i = 0; i < n; ++i) {
        std::string s;
        std::cin >> s;
        unsigned int t;
        std::cin >> t;
        double a1, b1, c1;
        std::cin >> a1 >> b1 >> c1;
        if (count(Vec.begin(), Vec.end(), s) == 1)
        {
            unsigned int ti = 0;
            for (auto x : memcheck) {
                if (x.second == s) {
                    ti = x.first;
                }
            }
            if (ti > t)
            {
                double r = sqrt((x0 - a1) * (x0 - a1) + (y0 - b1) * (y0 - b1) + (z0 - c1) * (z0 - c1));
                if (r < R)
                {
                    std::pair<unsigned int, std::string> k(t, s);
                    memcheck.erase(ti);
                    memcheck.insert(k);
                    vec.clear();
                }
            }
        }

        else
        {
            double r = sqrt((x0 - a1) * (x0 - a1) + (y0 - b1) * (y0 - b1) + (z0 - c1) * (z0 - c1));
            if (r < R)
            {
                std::pair<unsigned int, std::string> k(t, s);
                memcheck.insert(k);
                vec.clear();
            }
            Vec.push_back(s);
        }
    }
    for (int k = 0; k < n; k++){
        vec[k] = ++k;
    }
    for (auto x : memcheck)
    {
        vec.clear();
        std::string temp12 = x.second;
        printf("%s\n" , temp12.c_str());
    }
    return 0;
}
 */
