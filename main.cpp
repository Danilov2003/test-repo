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