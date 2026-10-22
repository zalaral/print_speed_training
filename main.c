#include <time.h.>

#define WORDS_SRC english_words

#define USR_SRC users_string

/* Используем, чтобы получить текущее время в секундах */
int timer_init()
{
  return (int)time(NULL); 
}

/* Просто вычисляет количество секунд между timer_init и текущим моментом */
int timer_res(int from_timer_init)
{
  int current_time = (int)time(NULL);
  return current_time - from_timer_init;
}

/* Возвращает число из диапозона [min, max] */
int get_random_num(int min, int max)
{

}

/* Возвращает слово из случайных символов определённой длины*/
char* get_random_chars_word(int word_len)
{

}

/* Открывает файл на чтение и считает в нём строки, после чего закрывает файл */
int strs_cnt_in_file(char *filename)
{

}

/* Возвращает строку под определённым номером из файла */
char *get_str_from_file(char *filename, int str_num)
{

}

/* Читает строку, которую ввёл пользователь, после чего возвращает её */
char *read_str_from_user()
{

}

/* Считает количество ошибок между строками */
int mistakes_count(char *original_str, char *users_str)
{

}

/* Режим слов из случайных символов, возвращает колличество ошибок */
int random_generated_words_mode(int words_cnt, int word_len)
{

}

/* Берём слова из файла под именем WORDS_SRC и возвращаем колличество ошибок */
int random_words_mode(int words_cnt)
{

}

/* Берём строки из файла под именем USER_SRC и возвращаем колличество ошибок */
int random_users_strings_mode(int strings_cnt)
{

}

/* Запускает один из трёх режимов, засекает время, выводит рез-ты */
void start_game(int gamemode)
{

}

/* Предлагает пользователю выбор из нескольких режимов,
	а потом считывает его выбор и возвращает в виде цифры (1, 2 или 3) */
int get_gamemode()
{

}

int main()
{
	int gamemode;
	gamemode = get_gamemode(); /* Пользователь вводит режим */
	start_game(gamemode);
	return 0;
}
