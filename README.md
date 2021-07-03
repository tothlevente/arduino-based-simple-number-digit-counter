[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](https://opensource.org/licenses/MIT)

# Welcome to the project of Arduino based simple number digit counter!

Thank you for your interest about this project!

Please read all files before you use this project.

### Description:

When you push the button the counter starts counting.
The counter counts from zero to nine then resets to zero again.

### Setup:

You can change the `waiting` value to set the time between switch digits.

### Set LED display:

| Number | Pin to hight                       | Functions   |
| ------ | ---------------------------------- | ----------- |
| `0`    | `A`, `B`, `C`, `D`, `E`, `F`,      | `print_0()` |
| `1`    | `B`, `C`,                          | `print_1()` |
| `2`    | `A`, `B`, `D`, `E`, `F`, `G`,      | `print_2()` |
| `3`    | `A`, `B`, `C`, `D`, `G`,           | `print_3()` |
| `4`    | `B`, `C`, `F`, `G`,                | `print_4()` |
| `5`    | `A`, `C`, `D`, `F`, `G`,           | `print_5()` |
| `6`    | `A`, `C`, `D`, `E`, `F`, `G`,      | `print_6()` |
| `7`    | `A`, `B`, `C`,                     | `print_7()` |
| `8`    | `A`, `B`, `C`, `D`, `E`, `F`, `G`, | `print_8()` |
| `9`    | `A`, `B`, `C`, `F`, `G`,           | `print_9()` |

### Clear LED display:

| Pin to low                         | Function  |
| ---------------------------------- | --------- |
| `A`, `B`, `C`, `D`, `E`, `F`, `G`, | `reset()` |

<br /> Feel free to copy that if you want to use your own project.
<br /> With the reset function you can reset the all digits number.

### License

This project is open source and available under the [MIT License](LICENSE).
