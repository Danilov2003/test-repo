#include <iostream>
#include <string>
#include <set>
#include <map>
#include <algorithm>
#include <vector>

class ResultsHolder {
private:
    std::map<std::string, unsigned> AllStudents;
public:
    ResultsHolder() {};
    /**
     * Добавить в общую таблицу результат экзамена студента.
     * Параметры:
     * - full_name - строка с полным именем студента
     * - mark - оценка (от 1 до 10)
     * (Гарантируется, что совпадений полных имён у разных студентов не бывает.)
     *
     * Если студента с данным именем нет в результатах - добавить его.
     * Если студент с таким именем есть - обновить его результат
     * (потому что апелляции вполне возможны).
     */
    void update(const std::string& full_name, unsigned mark) {
        if (AllStudents.find(full_name) == AllStudents.end()) {
            AllStudents.insert(std::pair<std::string, unsigned>(full_name, mark));
        }
        else {
            AllStudents[full_name] = mark;
        }
    }

    /**
     * Вывести студентов, отсортировав по именам по алфавиту.
     *
     * Вывод в std::cout.
     *
     * Формат вывода:
     * Alex 7
     * Anastasia 9
     * Anny 5
     * Ivan 10
     * Nikita 8
     */
    void print_students() const {
        for (auto it = AllStudents.begin(); it != AllStudents.end(); ++it) {
            std::cout << it->first << " " << it->second << std::endl;
        }
    }

    /**
     * Вывести студентов, отсортировав сперва по оценкам по убыванию,
     * а при равных оценках - по именам по алфавиту.
     *
     * Вывод в std::cout.
     *
     * Формат вывода:
     * Ivan 10
     * Anastasia 9
     * Nikita 8
     * Alex 7
     * Anny 5
     */
    void print_standings() const {
        std::vector<std::pair<std::string, unsigned>> vec;
        for (auto it = AllStudents.begin(); it != AllStudents.end(); ++it) {
            vec.push_back((*it));
        }
        std::sort(vec.begin(), vec.end(),
                  [](const std::pair<std::string, unsigned>& the_one,
                     const std::pair<std::string, unsigned>& the_two)
                  {return the_one.second > the_two.second;});
        
        for (auto it = vec.begin(); it != vec.end(); ++it) {
            std::cout << it->first << " " << it->second << std::endl;
        }
    }

    /**
     * Обработать запрос военкомата.
     *
     * Военкомат передаёт список имён и хочет призвать этих людей в армию.
     * Если у этих людей неуд-ы (оценка ниже 3), то:
     * - вернуть эти имена в ответе военкомату;
     * - удалить этих людей из общей таблицы (потому что теперь они не студенты).
     *
     * Входной параметр: сет строк с именами, кого хочет призвать военкомат.
     * Возвращаемое значение: сет строк с именами, кого действительно можно призвать
     * (или пустой сет, если призвать никого нельзя).
     * Гарантируется, что военкомат не будет пытаться призвать несуществующих студентов.
     */
    std::set<std::string> process_military_request(const std::set<std::string>& names) {
        std::set<std::string> result_name;
        for (auto it = names.begin(); it != names.end(); ++it) {
            if (AllStudents[(*it)] < 3) {
                AllStudents.erase((*it));
                result_name.insert((*it));
            }
        }
        return result_name;
    }
};
//Для тестирования можете использовать следующий базовый пример:

int main() {
// Создали таблицу
    ResultsHolder rh;

// Загрузили результаты
    rh.update("Alex", 6);
    rh.update("Anny", 5);
    rh.update("Ivan", 10);
    rh.update("Anastasia", 9);
    rh.update("Johnny", 1);
    rh.update("Alex", 7); // Апелляция у Alex, оценка обновляется
    rh.update("Nikita", 8);

// Вывели в порядке убывания результата
    std::cout << "Exam results:" << std::endl;
    rh.print_standings();

// Определили, кто идёт в армию
    auto to_military_service = rh.process_military_request({"Johnny", "Ivan"});

// Вывели их на экран
    std::cout << "Are in army now:" << std::endl;
    for (const auto &s: to_military_service) {
        std::cout << s << std::endl;
    }

// Вывели по алфавиту (но уже без Johnny, но Ivan остался с нами)
    std::cout << "Exam results:" << std::endl;
    rh.print_students();
    return 0;

}
