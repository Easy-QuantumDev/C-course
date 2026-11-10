// /*
// ===============================================================================
//                     C PROGRAMMING COURSE - MAIN DOCUMENT
// ===============================================================================

// این فایل، جزوه‌ی اجرایی دوره‌ی زبان C است.
// هر مبحث در یک تابع جداگانه قرار گرفته و از طریق منوی اصلی اجرا می‌شود.

// روش کامپایل:
//     gcc -std=c11 -Wall -Wextra -pedantic main.c -o c-course

// روش اجرا:
//     ./c-course             (Linux / MSYS2)
//     .\c-course.exe         (Windows PowerShell)

// نکته:
//     این فایل بر اساس کدها و مباحثی که در یادداشت‌های دوره آمده‌اند مرتب شده.
//     برای اجرای درس‌ها، شماره‌ی آن‌ها را از منو وارد کنید.
// ===============================================================================
// */

// #include <stdio.h>
// #include <string.h>

// /* ============================================================================
//    SECTION 01 — FIRST PROGRAM, VARIABLES, INPUT / OUTPUT
//    ============================================================================ */

// /* LESSON 01: اولین برنامه در C
//    اجرای برنامه از تابع main شروع می‌شود.
//    printf برای نمایش متن در خروجی استفاده می‌شود.
// */
// static void lesson_01(void)
// {
//     printf("////////////////////////////\n");
//     printf("My first C program\n");
//     printf("////////////////////////////\n");
//     printf("Name: Mohammadreza\n");
//     printf("Age: 21\n");
//     printf("Language: Persian\n");
//     printf("Goal: Cyber Security\n");
//     printf("Dream: Inventor\n");
// }

// /* LESSON 02: متغیرها و انواع داده
//    متغیر فضایی در حافظه برای نگهداری یک مقدار است.
//    int برای عدد صحیح، float برای عدد اعشاری و char برای یک کاراکتر.
// */
// static void lesson_02(void)
// {
//     int age = 22;
//     int score = 2000;
//     int year = 2005;
//     char initial = 'M';
//     float money = 150.156f;

//     printf("Initial: %c\n", initial);
//     printf("Age: %d\n", age);
//     printf("Score: %d\n", score);
//     printf("Birth year: %d\n", year);
//     printf("Budget: %.2f\n", money);
// }

// /* LESSON 03: ورودی با scanf
//    در scanf برای متغیرهای معمولی، آدرس متغیر را با & ارسال می‌کنیم.
// */
// static void lesson_03(void)
// {
//     int age;

//     printf("Enter your age: ");

//     if (scanf("%d", &age) == 1) {
//         printf("Your age is: %d\n", age);
//     } else {
//         printf("Invalid input.\n");
//     }
// }

// /* LESSON 04: تبدیل نوع داده (Type Conversion)
//    تبدیل صریح نوع با نوشتن نوع مقصد داخل پرانتز انجام می‌شود.
// */
// static void lesson_04(void)
// {
//     int x = 20;
//     float y = (float)x;

//     printf("Integer: %d\n", x);
//     printf("Converted float: %.2f\n", y);

//     /* تبدیل صریح هنگام تقسیم مانع تقسیم صحیح می‌شود. */
//     int total = 7;
//     int count = 2;
//     printf("Integer division: %d\n", total / count);
//     printf("Floating division: %.2f\n", (float)total / count);
// }

// /* LESSON 05: sizeof
//    sizeof اندازه‌ی حافظه‌ی یک نوع یا متغیر را بر حسب بایت برمی‌گرداند.
//    نوع خروجی sizeof برابر size_t است؛ برای چاپ آن از %zu استفاده می‌کنیم.
// */
// static void lesson_05(void)
// {
//     char grade = 'A';
//     int number = 200;
//     float price = 22.22f;

//     printf("Size of int: %zu bytes\n", sizeof(number));
//     printf("Size of char: %zu bytes\n", sizeof(grade));
//     printf("Size of float: %zu bytes\n", sizeof(price));
// }

// /* ============================================================================
//    SECTION 02 — OPERATORS AND CONDITIONS
//    ============================================================================ */

// /* LESSON 06: عملگرهای حسابی
//    + جمع، - تفریق، * ضرب، / تقسیم و % باقیمانده‌ی تقسیم صحیح.
//    ++ یک واحد اضافه و -- یک واحد کم می‌کند.
// */
// static void lesson_06(void)
// {
//     int a = 20;
//     int b = 50;
//     int result = a + b;

//     printf("a = %d, b = %d\n", a, b);
//     printf("a + b = %d\n", result);
//     printf("a - b = %d\n", a - b);
//     printf("a * b = %d\n", a * b);
//     printf("b / a = %d\n", b / a);
//     printf("b %% a = %d\n", b % a);

//     a++;
//     b--;
//     printf("After a++ and b--: a=%d, b=%d\n", a, b);
// }

// /* LESSON 07: عملگرهای انتساب ترکیبی
//    += ، -= ، *= ، /= و %= مقدار متغیر را به‌روزرسانی می‌کنند.
// */
// static void lesson_07(void)
// {
//     int a = 20;

//     a += 20;
//     printf("After += 20: %d\n", a);

//     a *= 10;
//     printf("After *= 10: %d\n", a);

//     a /= 2;
//     printf("After /= 2: %d\n", a);

//     a -= 50;
//     printf("After -= 50: %d\n", a);

//     a %= 10;
//     printf("After %%= 10: %d\n", a);
// }

// /* LESSON 08: عملگرهای مقایسه‌ای و منطقی
//    مقایسه‌ها: == ، != ، > ، < ، <= ، >=
//    منطقی‌ها: ! (NOT)، && (AND)، || (OR)
//    نتیجه‌ی شرط در C صفر (false) یا غیرصفر (true) است.
// */
// static void lesson_08(void)
// {
//     int a = 10;
//     int b = 20;

//     printf("a == b: %d\n", a == b);
//     printf("a != b: %d\n", a != b);
//     printf("a < b: %d\n", a < b);
//     printf("a >= b: %d\n", a >= b);

//     printf("(a < b && b > 0): %d\n", (a < b && b > 0));
//     printf("(a > b || b > 0): %d\n", (a > b || b > 0));
//     printf("!(a == b): %d\n", !(a == b));
// }

// /* LESSON 09: if / else if / else
//    برای اجرای مسیرهای متفاوت بر اساس شرط استفاده می‌شود.
// */
// static void lesson_09(void)
// {
//     int number = 18;

//     if (number > 0 && number % 2 == 0) {
//         printf("Positive and even\n");
//     } else if (number > 0 && number % 2 != 0) {
//         printf("Positive and odd\n");
//     } else if (number < 0) {
//         printf("Negative\n");
//     } else {
//         printf("Zero\n");
//     }
// }

// /* LESSON 10: switch / case
//    برای انتخاب یک شاخه از بین چند مقدار مشخص استفاده می‌شود.
//    break از ادامه‌ی اجرای caseهای بعدی جلوگیری می‌کند.
// */
// static void lesson_10(void)
// {
//     int day_number = 1;

//     switch (day_number) {
//         case 1: printf("Monday\n"); break;
//         case 2: printf("Tuesday\n"); break;
//         case 3: printf("Wednesday\n"); break;
//         case 4: printf("Thursday\n"); break;
//         case 5: printf("Friday\n"); break;
//         case 6: printf("Saturday\n"); break;
//         case 7: printf("Sunday\n"); break;
//         default: printf("Invalid day\n");
//     }
// }

// /* ============================================================================
//    SECTION 03 — LOOPS
//    ============================================================================ */

// /* LESSON 11: for
//    ساختار for شامل مقداردهی اولیه، شرط ادامه و تغییر شمارنده است.
// */
// static void lesson_11(void)
// {
//     int sum = 0;
//     int even_sum = 0;
//     int even_count = 0;

//     printf("Numbers from 1 to 10:\n");
//     for (int i = 1; i <= 10; i++) {
//         printf("%d ", i);
//     }

//     printf("\nNumbers from 10 to 1:\n");
//     for (int i = 10; i >= 1; i--) {
//         printf("%d ", i);
//     }

//     for (int i = 1; i <= 100; i++) {
//         sum += i;

//         if (i % 2 == 0) {
//             even_sum += i;
//             even_count++;
//         }
//     }

//     printf("\nSum 1..100: %d\n", sum);
//     printf("Sum of even numbers: %d\n", even_sum);
//     printf("Count of even numbers: %d\n", even_count);

//     printf("Multiples of 5:\n");
//     for (int i = 0; i <= 100; i += 5) {
//         printf("%d ", i);
//     }
//     printf("\n");
// }

// /* LESSON 12: break و continue
//    break حلقه را تمام می‌کند.
//    continue ادامه‌ی دستورات همان دور را رد می‌کند و به دور بعد می‌رود.
// */
// static void lesson_12(void)
// {
//     printf("break example:\n");
//     for (int i = 0; i <= 20; i++) {
//         if (i == 10) {
//             break;
//         }
//         printf("%d ", i);
//     }

//     printf("\ncontinue example (skip 10):\n");
//     for (int i = 0; i <= 20; i++) {
//         if (i == 10) {
//             continue;
//         }
//         printf("%d ", i);
//     }
//     printf("\n");
// }

// /* LESSON 13: while
//    تا وقتی شرط درست باشد، بدنه‌ی حلقه اجرا می‌شود.
// */
// static void lesson_13(void)
// {
//     int i = 0;
//     int sum = 0;

//     while (i <= 100) {
//         sum += i;
//         i++;
//     }
//     printf("Sum from 0 to 100: %d\n", sum);

//     i = 0;
//     printf("Even numbers from 0 to 20:\n");
//     while (i <= 20) {
//         if (i % 2 == 0) {
//             printf("%d ", i);
//         }
//         i++;
//     }
//     printf("\n");
// }

// /* LESSON 14: do while
//    بدنه‌ی do while حداقل یک بار اجرا می‌شود؛ سپس شرط بررسی می‌شود.
// */
// static void lesson_14(void)
// {
//     int i = 1;

//     do {
//         printf("This block runs at least once.\n");
//     } while (i < 1);

//     i = 2;
//     do {
//         printf("%d ", i);
//         i += 2;
//     } while (i <= 20);

//     printf("\n");
// }

// /* ============================================================================
//    SECTION 04 — FUNCTIONS, SCOPE AND STATIC
//    ============================================================================ */

// /* LESSON 15: توابع دارای مقدار بازگشتی
//    تابع می‌تواند ورودی بگیرد و با return نتیجه برگرداند.
// */
// static int add_numbers(int a, int b)
// {
//     return a + b;
// }

// static int multiply_numbers(int a, int b)
// {
//     return a * b;
// }

// static void lesson_15(void)
// {
//     printf("Addition: %d\n", add_numbers(10, 10));
//     printf("Multiplication: %d\n", multiply_numbers(10, 10));
// }

// /* LESSON 16: تابع void
//    void یعنی تابع مقدار بازگشتی ندارد.
// */
// static void print_number(int number)
// {
//     printf("Number: %d\n", number);
// }

// static int double_number(int number)
// {
//     return number * 2;
// }

// static void lesson_16(void)
// {
//     print_number(10);
//     printf("Double: %d\n", double_number(10));
// }

// /* LESSON 17: Function Prototype
//    Prototype امضای تابع را قبل از محل استفاده به کامپایلر معرفی می‌کند.
// */
// static int subtract_numbers(int a, int b);

// static void lesson_17(void)
// {
//     printf("Subtraction: %d\n", subtract_numbers(30, 12));
// }

// static int subtract_numbers(int a, int b)
// {
//     return a - b;
// }

// /* LESSON 18: Scope
//    متغیر محلی در محدوده‌ی تابع یا بلوک خودش قابل دسترسی است.
//    متغیر سراسری بیرون توابع تعریف می‌شود.
// */
// static int global_value = 100;

// static void lesson_18(void)
// {
//     int local_value = 10;

//     printf("Local variable: %d\n", local_value);
//     printf("Global variable: %d\n", global_value);

//     if (1) {
//         int block_value = 50;
//         printf("Block variable: %d\n", block_value);
//         printf("Outer local inside block: %d\n", local_value);
//     }

//     /* block_value بیرون بلوک قابل استفاده نیست. */
// }

// /* LESSON 19: Shadowing
//    متغیر داخلی می‌تواند متغیر هم‌نام بیرونی را در محدوده‌ی خودش بپوشاند.
// */
// static void lesson_19(void)
// {
//     int value = 100;

//     printf("Outer value: %d\n", value);

//     {
//         int value = 10;
//         printf("Inner value: %d\n", value);
//     }

//     printf("Outer value again: %d\n", value);
// }

// /* LESSON 20: متغیر معمولی و static
//    متغیر محلی معمولی با پایان فراخوانی تابع از بین می‌رود.
//    متغیر local static مقدار خود را بین فراخوانی‌ها حفظ می‌کند.
// */
// static void normal_counter(void)
// {
//     int count = 0;
//     count++;
//     printf("Normal counter: %d\n", count);
// }

// static void static_counter(void)
// {
//     static int count = 1;
//     count++;
//     printf("Static counter: %d\n", count);
// }

// static void lesson_20(void)
// {
//     normal_counter();
//     normal_counter();

//     static_counter();
//     static_counter();
// }

// /* ============================================================================
//    SECTION 05 — ARRAYS AND MATRICES
//    ============================================================================ */

// /* LESSON 21: تعریف، مقداردهی و دسترسی به آرایه
//    اندیس آرایه از صفر شروع می‌شود.
//    عناصر آرایه از یک نوع داده هستند.
// */
// static void lesson_21(void)
// {
//     int scores[5] = {10, 20, 30, 40, 50};

//     printf("First element: %d\n", scores[0]);
//     printf("Last element: %d\n", scores[4]);

//     scores[0] = 100;
//     printf("Updated first element: %d\n", scores[0]);

//     int numbers[5] = {10, 10};
//     printf("Initialized values: ");
//     for (int i = 0; i < 5; i++) {
//         printf("%d ", numbers[i]);
//     }
//     printf("\n");

//     int values[] = {1, 2, 3, 4, 5};
//     printf("Inferred array first value: %d\n", values[0]);
// }

// /* LESSON 22: sizeof و تعداد عناصر آرایه
//    تعداد عناصر = اندازه‌ی کل آرایه / اندازه‌ی یک عنصر.
//    این روش وقتی استفاده می‌شود که متغیر واقعاً آرایه باشد، نه اشاره‌گر.
// */
// static void lesson_22(void)
// {
//     int scores[] = {10, 20, 30, 40, 50};

//     size_t total_size = sizeof(scores);
//     size_t item_size = sizeof(scores[0]);
//     size_t length = total_size / item_size;

//     printf("Array size in bytes: %zu\n", total_size);
//     printf("One element size: %zu\n", item_size);
//     printf("Array length: %zu\n", length);
// }

// /* LESSON 23: پیمایش آرایه
//    با حلقه می‌توان از ابتدا تا انتهای آرایه یا برعکس حرکت کرد.
// */
// static void lesson_23(void)
// {
//     int scores[5] = {10, 20, 30, 40, 50};

//     printf("Forward:\n");
//     for (int i = 0; i < 5; i++) {
//         printf("%d ", scores[i]);
//     }

//     printf("\nReverse:\n");
//     for (int i = 4; i >= 0; i--) {
//         printf("%d ", scores[i]);
//     }
//     printf("\n");
// }

// /* LESSON 24: مجموع و شمارش عناصر با شرط
// */
// static void lesson_24(void)
// {
//     int numbers[] = {10, 20, 30, 40};
//     int sum = 0;
//     int even_count = 0;
//     size_t length = sizeof(numbers) / sizeof(numbers[0]);

//     for (size_t i = 0; i < length; i++) {
//         sum += numbers[i];

//         if (numbers[i] % 2 == 0) {
//             even_count++;
//         }
//     }

//     printf("Sum: %d\n", sum);
//     printf("Even elements count: %d\n", even_count);
// }

// /* LESSON 25: کمینه و بیشینه‌ی آرایه
//    مقدار اولیه‌ی min و max را از اولین عنصر می‌گیریم.
// */
// static void lesson_25(void)
// {
//     int numbers[] = {7, 2, 19, -4, 12};
//     size_t length = sizeof(numbers) / sizeof(numbers[0]);

//     int max = numbers[0];
//     int min = numbers[0];

//     for (size_t i = 1; i < length; i++) {
//         if (numbers[i] > max) {
//             max = numbers[i];
//         }

//         if (numbers[i] < min) {
//             min = numbers[i];
//         }
//     }

//     printf("Maximum: %d\n", max);
//     printf("Minimum: %d\n", min);
// }

// /* LESSON 26: میانگین عناصر آرایه
//    برای جلوگیری از تقسیم صحیح، sum را به float تبدیل می‌کنیم.
// */
// static void lesson_26(void)
// {
//     int numbers[] = {1, 2, 3, 4};
//     size_t length = sizeof(numbers) / sizeof(numbers[0]);
//     int sum = 0;

//     for (size_t i = 0; i < length; i++) {
//         sum += numbers[i];
//     }

//     float average = (float)sum / (float)length;
//     printf("Average: %.2f\n", average);
// }

// /* LESSON 27: ارسال آرایه به تابع
//    هنگام ارسال آرایه، طول آن را نیز جداگانه ارسال می‌کنیم.
// */
// static void print_array(const int numbers[], size_t length)
// {
//     for (size_t i = 0; i < length; i++) {
//         printf("%d ", numbers[i]);
//     }
//     printf("\n");
// }

// static void lesson_27(void)
// {
//     int scores[] = {15, 25, 30, 50};
//     size_t length = sizeof(scores) / sizeof(scores[0]);

//     print_array(scores, length);
// }

// /* LESSON 28: تغییر آرایه در تابع
//    تابع می‌تواند عناصر آرایه‌ی اصلی را تغییر دهد.
// */
// static void update_first_element(int numbers[], size_t length)
// {
//     if (length > 0) {
//         numbers[0] = 100;
//     }
// }

// static void lesson_28(void)
// {
//     int scores[] = {15, 25, 30, 50};
//     size_t length = sizeof(scores) / sizeof(scores[0]);

//     printf("Before: %d\n", scores[0]);
//     update_first_element(scores, length);
//     printf("After: %d\n", scores[0]);
// }

// /* LESSON 29: محاسبه‌ی مجموع آرایه با تابع
// */
// static int sum_array(const int numbers[], size_t length)
// {
//     int sum = 0;

//     for (size_t i = 0; i < length; i++) {
//         sum += numbers[i];
//     }

//     return sum;
// }

// static void lesson_29(void)
// {
//     int scores[] = {10, 20, 30, 40, 50};
//     size_t length = sizeof(scores) / sizeof(scores[0]);

//     printf("Array sum: %d\n", sum_array(scores, length));
// }

// /* LESSON 30: آرایه‌ی دوبعدی یا Matrix
//    برای دسترسی به هر عنصر از دو اندیس استفاده می‌کنیم: matrix[row][column].
// */
// static void lesson_30(void)
// {
//     int matrix[2][5] = {
//         {1, 2, 3, 4, 5},
//         {6, 7, 8, 9, 10}
//     };

//     printf("matrix[0][0] = %d\n", matrix[0][0]);
//     printf("matrix[1][4] = %d\n", matrix[1][4]);
// }

// /* LESSON 31: پیمایش ماتریس با حلقه‌های تو در تو
// */
// static void lesson_31(void)
// {
//     int matrix[2][5] = {
//         {1, 2, 3, 4, 5},
//         {6, 7, 8, 9, 10}
//     };

//     for (int row = 0; row < 2; row++) {
//         for (int column = 0; column < 5; column++) {
//             printf("%d ", matrix[row][column]);
//         }
//         printf("\n");
//     }
// }

// /* ============================================================================
//    SECTION 06 — STRINGS
//    ============================================================================ */

// /* LESSON 32: تعریف و نمایش رشته
//    رشته در C آرایه‌ای از char است که با کاراکتر پایان‌دهنده‌ی '\0' خاتمه می‌یابد.
// */
// static void lesson_32(void)
// {
//     char name[] = "Mohammadreza";
//     printf("My name is: %s\n", name);
// }

// /* LESSON 33: تغییر یک کاراکتر رشته
//    چون name یک آرایه‌ی قابل تغییر است، می‌توانیم یکی از خانه‌هایش را عوض کنیم.
// */
// static void lesson_33(void)
// {
//     char name[] = "mohammadreza";

//     printf("Before: %s\n", name);
//     name[0] = 'M';
//     printf("After: %s\n", name);
// }

// /* LESSON 34: strlen
//    strlen تعداد بایت‌های پیش از '\0' را برمی‌گرداند.
// */
// static void lesson_34(void)
// {
//     char name[] = "mohammadreza";
//     printf("String: %s\n", name);
//     printf("Length: %zu\n", strlen(name));
// }

// /* LESSON 35: strcmp
//    strcmp برای مقایسه‌ی لغوی دو رشته است.
//    مقدار صفر یعنی برابر؛ مقدار منفی یا مثبت یعنی ترتیب لغوی متفاوت.
//    برای تشخیص نابرابری فقط از != 0 استفاده کنید، نه != 1.
// */
// static void lesson_35(void)
// {
//     char first[] = "mohammad";
//     char second[] = "alireza";
//     char third[] = "mohammad";

//     printf("first vs second: %d\n", strcmp(first, second));
//     printf("first vs third: %d\n", strcmp(first, third));

//     if (strcmp(first, third) == 0) {
//         printf("Strings are equal.\n");
//     } else {
//         printf("Strings are not equal.\n");
//     }
// }

// /* LESSON 36: strcpy
//    رشته‌ی مبدا را در مقصد کپی می‌کند.
//    مقصد باید به‌اندازه‌ی کافی فضا داشته باشد.
// */
// static void lesson_36(void)
// {
//     char source[] = "Mohammadreza";
//     char destination[30];

//     strcpy(destination, source);
//     printf("Copied string: %s\n", destination);
// }

// /* LESSON 37: strcat
//    رشته‌ی دوم را به انتهای رشته‌ی اول اضافه می‌کند.
//    آرایه‌ی مقصد باید فضای کافی برای هر دو رشته و '\0' داشته باشد.
// */
// static void lesson_37(void)
// {
//     char first_name[30] = "Mohammadreza";
//     char last_name[] = " Barati";

//     strcat(first_name, last_name);
//     printf("Full name: %s\n", first_name);
// }

// /* LESSON 38: دریافت یک کلمه با scanf
//    %19s حداکثر 19 نویسه می‌خواند و یک خانه برای '\0' باقی می‌گذارد.
//    scanf با %s در اولین فاصله متوقف می‌شود.
// */
// static void lesson_38(void)
// {
//     char name[20];

//     printf("Enter one-word name: ");
//     if (scanf("%19s", name) == 1) {
//         printf("Hello %s\n", name);
//     } else {
//         printf("Input error.\n");
//     }
// }

// /* LESSON 39: دریافت یک خط با fgets
//    fgets می‌تواند فاصله‌ها را بخواند.
//    در صورت جا شدن، newline نیز در آرایه ذخیره می‌شود.
// */
// static void lesson_39(void)
// {
//     char name[50];
//     int ch;

//     /* منوی اصلی با scanf عدد را می‌خواند و newline باقی می‌ماند.
//        آن newline را مصرف می‌کنیم تا fgets ورودی خالی نخواند. */
//     while ((ch = getchar()) != '\\n' && ch != EOF) {
//         /* discard remaining characters */
//     }

//     printf("Enter your full name: ");
//     if (fgets(name, sizeof(name), stdin) != NULL) {
//         printf("Hello %s", name);
//     } else {
//         printf("Input error.\n");
//     }
// }

// /* ============================================================================
//    SECTION 07 — STRUCTURES
//    ============================================================================ */

// /* LESSON 40: ساختارها (struct)
//    struct چند عضو با نوع‌های مختلف را زیر یک نوع داده‌ی جدید گروه‌بندی می‌کند.
// */
// struct Student {
//     char name[50];
//     int age;
//     float score;
// };

// static void lesson_40(void)
// {
//     struct Student student = {"Mohammadreza", 22, 18.5f};

//     printf("Name: %s\n", student.name);
//     printf("Age: %d\n", student.age);
//     printf("Score: %.1f\n", student.score);
// }

// /* LESSON 41: تغییر اعضای ساختار
//    برای تغییر آرایه‌ی کاراکتری داخل struct از strcpy استفاده می‌کنیم؛
//    انتساب مستقیم آرایه با = مجاز نیست.
// */
// static void lesson_41(void)
// {
//     struct Student student = {"Mohammadreza", 22, 18.5f};

//     strcpy(student.name, "Alireza");
//     student.age = 25;
//     student.score = 19.5f;

//     printf("Updated name: %s\n", student.name);
//     printf("Updated age: %d\n", student.age);
//     printf("Updated score: %.1f\n", student.score);
// }

// /* ============================================================================
//    SECTION 08 — POINTERS
//    ============================================================================ */

// /* LESSON 42: آدرس حافظه و اشاره‌گر
//    & آدرس یک متغیر را می‌دهد.
//    * در تعریف، نوع اشاره‌گر را مشخص می‌کند و در عبارت، مقدار آدرس را می‌خواند.
//    برای چاپ آدرس از %p و تبدیل به void * استفاده می‌کنیم.
// */
// static void lesson_42(void)
// {
//     int x = 2026;

//     printf("Value of x: %d\n", x);
//     printf("Address of x: %p\n", (void *)&x);

//     int y = 6;
//     int *pointer = &y;

//     printf("Value of y: %d\n", y);
//     printf("Address stored in pointer: %p\n", (void *)pointer);
//     printf("Value through pointer: %d\n", *pointer);

//     *pointer = 500;

//     printf("Updated value through pointer: %d\n", *pointer);
//     printf("Updated y: %d\n", y);
//     printf("Address of pointer variable: %p\n", (void *)&pointer);
// }

// /* LESSON 43: اشاره‌گر و تغییر مقدار
//    با dereference کردن اشاره‌گر (*pointer) می‌توان مقدار متغیر مقصد را تغییر داد.
//    این مثال مفهوم اشاره‌گر به متغیر را دوباره و مستقل نشان می‌دهد.
// */
// static void lesson_43(void)
// {
//     int value = 10;
//     int *pointer = &value;

//     printf("Before: %d\n", value);
//     *pointer = 75;
//     printf("After: %d\n", value);
// }

// /* ============================================================================
//    SECTION 09 — FILE HANDLING
//    ============================================================================ */

// /* LESSON 44: مقدمه‌ی مدیریت فایل
//    متغیرهای معمولی داده را در RAM نگه می‌دارند؛ فایل داده را برای استفاده‌ی
//    بعدی روی حافظه‌ی ذخیره‌سازی نگه می‌دارد.
//    این دوره در این بخش با فایل متنی کار می‌کند.
// */

// /* LESSON 45: fopen و fclose
//    fopen فایل را باز می‌کند و FILE * می‌دهد.
//    اگر باز کردن فایل شکست بخورد، NULL برمی‌گرداند.
//    پس از پایان کار باید fclose فراخوانی شود.
// */
// static void lesson_45(void)
// {
//     FILE *file = fopen("student-file.txt", "w");

//     if (file == NULL) {
//         printf("Error opening file.\n");
//         return;
//     }

//     printf("File opened successfully.\n");
//     fclose(file);
//     printf("File closed successfully.\n");
// }

// /* LESSON 46: حالت‌های باز کردن فایل
//    r  : فقط خواندن؛ فایل باید وجود داشته باشد.
//    w  : نوشتن؛ فایل ساخته یا محتوای قبلی پاک می‌شود.
//    a  : افزودن در انتهای فایل؛ در صورت نبود ساخته می‌شود.
//    r+ : خواندن و نوشتن؛ فایل باید وجود داشته باشد.
//    w+ : خواندن و نوشتن؛ فایل ساخته یا خالی می‌شود.
//    a+ : خواندن و افزودن در انتهای فایل.
// */
// static void lesson_46(void)
// {
//     FILE *file = fopen("file-modes.txt", "a");

//     if (file == NULL) {
//         printf("Error opening file.\n");
//         return;
//     }

//     fputs("Appended text.\n", file);
//     fclose(file);

//     printf("Text appended. Try r, w, a, r+, w+ and a+ as needed.\n");
// }

// /* LESSON 47: نوشتن داده با fprintf
//    fprintf داده‌ها را با قالب مشخص در فایل می‌نویسد.
//    %d عدد صحیح، %f عدد اعشاری، %.1f یک رقم اعشار، %s رشته و %c کاراکتر.
// */
// static void lesson_47(void)
// {
//     char name[] = "Ali";
//     int age = 22;
//     float score = 19.5f;

//     FILE *file = fopen("student.txt", "w");

//     if (file == NULL) {
//         printf("Error opening student.txt\n");
//         return;
//     }

//     fprintf(file, "Name: %s\n", name);
//     fprintf(file, "Age: %d\n", age);
//     fprintf(file, "Score: %.1f\n", score);

//     fclose(file);
//     printf("Student data written to student.txt\n");
// }

// /* LESSON 48: خواندن داده با fscanf
//    برای int و float آدرس متغیر با & ارسال می‌شود.
//    برای آرایه‌ی char نام آرایه کافی است.
//    %49s برای آرایه‌ی 50 خانه‌ای یک خانه را برای '\0' نگه می‌دارد.
//    قالب خواندن باید با متن ذخیره‌شده مطابقت داشته باشد.
// */
// static void lesson_48(void)
// {
//     FILE *file = fopen("student.txt", "r");

//     if (file == NULL) {
//         printf("Run lesson 47 first to create student.txt\n");
//         return;
//     }

//     char name[50];
//     int age;
//     float score;

//     int r1 = fscanf(file, "Name: %49s\n", name);
//     int r2 = fscanf(file, "Age: %d\n", &age);
//     int r3 = fscanf(file, "Score: %f", &score);

//     if (r1 == 1 && r2 == 1 && r3 == 1) {
//         printf("Name: %s\n", name);
//         printf("Age: %d\n", age);
//         printf("Score: %.1f\n", score);
//     } else {
//         printf("Could not read student data in the expected format.\n");
//     }

//     fclose(file);
// }

// /* LESSON 49: خواندن یک خط با fgets
//    fgets یک خط یا بخشی از آن را می‌خواند و می‌تواند فاصله‌ها را نگه دارد.
// */
// static void lesson_49(void)
// {
//     FILE *file = fopen("names.txt", "w");

//     if (file == NULL) {
//         printf("Error creating names.txt\n");
//         return;
//     }

//     fputs("Mohammadreza Barati\n", file);
//     fputs("Ali Ahmadi\n", file);
//     fclose(file);

//     file = fopen("names.txt", "r");
//     if (file == NULL) {
//         printf("Error reading names.txt\n");
//         return;
//     }

//     char line[100];

//     if (fgets(line, sizeof(line), file) != NULL) {
//         printf("First line: %s", line);
//     }

//     fclose(file);
// }

// /* LESSON 50: خواندن تمام خطوط با fgets و while
//    fgets در صورت موفقیت آدرس buffer و در پایان فایل یا خطا NULL برمی‌گرداند.
// */
// static void lesson_50(void)
// {
//     FILE *file = fopen("names.txt", "r");

//     if (file == NULL) {
//         printf("Run lesson 49 first to create names.txt\n");
//         return;
//     }

//     char line[100];

//     while (fgets(line, sizeof(line), file) != NULL) {
//         printf("%s", line);
//     }

//     fclose(file);
// }

// /* LESSON 51: خواندن بایت با fgetc و تشخیص EOF
//    مقدار بازگشتی را در int نگه می‌داریم تا EOF قابل تشخیص باشد.
// */
// static void lesson_51(void)
// {
//     FILE *file = fopen("student.txt", "r");

//     if (file == NULL) {
//         printf("Run lesson 47 first to create student.txt\n");
//         return;
//     }

//     int ch;

//     while ((ch = fgetc(file)) != EOF) {
//         putchar(ch);
//     }

//     fclose(file);
// }

// /* LESSON 52: شمارش بایت‌ها و کاراکتر خاص
//    fgetc یک بایت می‌خواند؛ بنابراین این شمارش برای UTF-8 لزوماً تعداد
//    نویسه‌های قابل مشاهده نیست. فاصله و newline نیز شمرده می‌شوند.
// */
// static void lesson_52(void)
// {
//     FILE *file = fopen("student.txt", "r");

//     if (file == NULL) {
//         printf("Run lesson 47 first to create student.txt\n");
//         return;
//     }

//     int ch;
//     int byte_count = 0;
//     int a_count = 0;

//     while ((ch = fgetc(file)) != EOF) {
//         byte_count++;

//         if (ch == 'a' || ch == 'A') {
//             a_count++;
//         }
//     }

//     printf("Total bytes read: %d\n", byte_count);
//     printf("Count of a/A: %d\n", a_count);

//     fclose(file);
// }

// /* LESSON 53: نوشتن یک کاراکتر با fputc
//    برای کاراکتر از کوتیشن تکی استفاده می‌کنیم: 'A'
// */
// static void lesson_53(void)
// {
//     FILE *file = fopen("letters.txt", "w");

//     if (file == NULL) {
//         printf("Error opening letters.txt\n");
//         return;
//     }

//     fputc('A', file);
//     fputc('B', file);
//     fputc('C', file);
//     fputc('D', file);

//     fclose(file);
//     printf("Characters written to letters.txt\n");
// }

// /* LESSON 54: نوشتن رشته با fputs
//    fputs رشته را در فایل می‌نویسد اما newline خودکار اضافه نمی‌کند.
//    برای رفتن به خط بعد باید \n را خودمان قرار دهیم.
// */
// static void lesson_54(void)
// {
//     FILE *file = fopen("messages.txt", "w");

//     if (file == NULL) {
//         printf("Error opening messages.txt\n");
//         return;
//     }

//     fputs("Hello from C\n", file);
//     fputs("I am learning File Handling\n", file);
//     fputs("This is my course document\n", file);

//     fclose(file);
//     printf("Strings written to messages.txt\n");
// }

// /* ============================================================================
//    MAIN MENU
//    ============================================================================ */

// struct Lesson {
//     const char *title;
//     void (*run)(void);
// };

// int main(void)
// {
//     const struct Lesson lessons[] = {
//         {"First C program", lesson_01},
//         {"Variables and data types", lesson_02},
//         {"Input with scanf", lesson_03},
//         {"Type conversion", lesson_04},
//         {"sizeof", lesson_05},
//         {"Arithmetic operators", lesson_06},
//         {"Compound assignment operators", lesson_07},
//         {"Comparison and logical operators", lesson_08},
//         {"if / else if / else", lesson_09},
//         {"switch / case", lesson_10},
//         {"for loop and number exercises", lesson_11},
//         {"break and continue", lesson_12},
//         {"while loop", lesson_13},
//         {"do while loop", lesson_14},
//         {"Functions with return values", lesson_15},
//         {"void functions", lesson_16},
//         {"Function prototype", lesson_17},
//         {"Scope", lesson_18},
//         {"Shadowing", lesson_19},
//         {"static local variable", lesson_20},
//         {"Array basics", lesson_21},
//         {"Array sizeof and length", lesson_22},
//         {"Array loops", lesson_23},
//         {"Array sum and condition count", lesson_24},
//         {"Array minimum and maximum", lesson_25},
//         {"Array average", lesson_26},
//         {"Passing array to function", lesson_27},
//         {"Changing array in function", lesson_28},
//         {"Array sum with function", lesson_29},
//         {"Two-dimensional array / Matrix", lesson_30},
//         {"Matrix loops", lesson_31},
//         {"String basics", lesson_32},
//         {"Change string character", lesson_33},
//         {"strlen", lesson_34},
//         {"strcmp", lesson_35},
//         {"strcpy", lesson_36},
//         {"strcat", lesson_37},
//         {"String input with scanf", lesson_38},
//         {"String input with fgets", lesson_39},
//         {"Struct basics", lesson_40},
//         {"Update struct members", lesson_41},
//         {"Pointer and memory address", lesson_42},
//         {"Dereference and update value", lesson_43},
//         {"File handling introduction / open / close", lesson_45},
//         {"File opening modes", lesson_46},
//         {"Writing with fprintf", lesson_47},
//         {"Reading with fscanf", lesson_48},
//         {"Reading one line with fgets", lesson_49},
//         {"Reading all lines", lesson_50},
//         {"Reading bytes with fgetc", lesson_51},
//         {"Counting bytes and selected character", lesson_52},
//         {"Writing a character with fputc", lesson_53},
//         {"Writing a string with fputs", lesson_54}
//     };

//     const size_t lesson_count = sizeof(lessons) / sizeof(lessons[0]);
//     int choice;

//     for (;;) {
//         printf("\n========== C PROGRAMMING COURSE ==========\n");
//         for (size_t i = 0; i < lesson_count; i++) {
//             printf("%2zu. %s\n", i + 1, lessons[i].title);
//         }
//         printf(" 0. Exit\n");
//         printf("Choose a lesson: ");

//         if (scanf("%d", &choice) != 1) {
//             printf("Invalid input. Exiting.\n");
//             break;
//         }

//         if (choice == 0) {
//             printf("Goodbye!\n");
//             break;
//         }

//         if (choice < 1 || (size_t)choice > lesson_count) {
//             printf("Lesson number does not exist.\n");
//             continue;
//         }

//         printf("\n----- %s -----\n", lessons[choice - 1].title);
//         lessons[choice - 1].run();
//         printf("\n----- End of lesson -----\n");
//     }

//     return 0;
// }




#include <stdio.h>
int main(void){
    FILE *file = fopen("student.txt","a+");
    if (file ==NULL){
        perror("error the file cant open!!!!!");
        return 1;
    }

/////////////////// fseek and ftell  

//     if (fseek(file, 0, SEEK_END) != 0) {
//     perror("fseek error");
//     fclose(file);
//     return 1;
// }
    // fseek(file,0,SEEK_END);

    // long position = ftell(file);

    // printf("position : %ld",position);
    // long size = ftell(file);
    // printf("size of file : %ld \n",size);

    // fseek(file,0,SEEK_SET);
    // char ch = fgetc(file);
    // printf("%c",ch);
    // fclose(file);
    // return 0;

int number = 100;
fwrite(&number,sizeof(number),1,file);


}