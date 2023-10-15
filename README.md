# printf Function Implementation

## Description

This repository contains a C function named `_printf` that produces output according to a specified format. The function follows certain requirements and supports various conversion specifiers. The goal is to create a simplified version of the `printf` function.

## Function Signature

```c
int _printf(const char *format, ...);
```

## Return Value

The function returns the number of characters printed, excluding the null byte used to end output to strings.

## Usage

Write the output to the standard output stream (`stdout`).

## Supported Conversion Specifiers

- `%c`: Character
- `%s`: String
- `%%`: Percent sign (literal `%`)

## Repository Structure

### 1. Basic

#### Task
Handle the following conversion specifiers:
- `%d`
- `%i`
#### Flowchart

```
+---------------------+
| Start               |
+---------------------+
          |
          v
+---------------------+
| Parse Format String |
+---------------------+
          |
          v
+---------------------+
| Loop through format |
|      characters     |
+---------------------+
          |
          v
+---------------------+
|   Check for '%'     |
+---------------------+
          |
          v
+---------------------+
| Handle Specifiers   |
+---------------------+
          |
          v
+---------------------+
|   Print Character   |
+---------------------+
          |
          v
+---------------------+
|    Continue Loop    |
+---------------------+
          |
          v
+---------------------+
|   End of Format?    |
+---------------------+
          |
          v
+---------------------+
|    Return Count     |
+---------------------+
          |
          v
+---------------------+
|       End           |
+---------------------+
```
#### Repository
[printf](https://github.com/emmystrings309/printf)

### 2. Advanced - Binary Conversion

#### Task
Handle the following custom conversion specifier:
- `%b`: Convert unsigned int argument to binary

#### Repository
[printf](https://github.com/emmystrings309/printf)

### 3. Advanced - Numeric Conversions

#### Task
Handle the following conversion specifiers:
- `%u`
- `%o`
- `%x`
- `%X`

#### Repository
[printf](https://github.com/emmystrings309/printf)

### 4. Advanced - Local Buffer Optimization

#### Task
Use a local buffer of 1024 chars to optimize `write` calls.

#### Repository
[printf](https://github.com/emmystrings309/printf)

### 5. Advanced - String Conversion with Special Characters

#### Task
Handle the following custom conversion specifier:
- `%S`: Print the string with non-printable characters represented as `\x` followed by ASCII code in hexadecimal (uppercase).

#### Repository
[printf](https://github.com/emmystrings309/printf)

### 6. Advanced - Pointer Address

#### Task
Handle the following conversion specifier:
- `%p`: Print pointer address

#### Repository
[printf](https://github.com/emmystrings309/printf)

### 7. Advanced - Flag Characters

#### Task
Handle the following flag characters for non-custom conversion specifiers:
- `+`
- `space`
- `#`

#### Repository
[printf](https://github.com/emmystrings309/printf)

### 8. Advanced - Length Modifiers

#### Task
Handle the following length modifiers for non-custom conversion specifiers:
- `l`
- `h`

#### Repository
[printf](https://github.com/emmystrings309/printf)

### 9. Advanced - Field Width

#### Task
Handle the field width for non-custom conversion specifiers.

#### Repository
[printf](https://github.com/emmystrings309/printf)

### 10. Advanced - Precision

#### Task
Handle the precision for non-custom conversion specifiers.

#### Repository
[printf](https://github.com/emmystrings309/printf)

### 11. Advanced - Zero Flag Character

#### Task
Handle the `0` flag character for non-custom conversion specifiers.

#### Repository
[printf](https://github.com/emmystrings309/printf)

### 12. Advanced - Minus Flag Character

#### Task
Handle the `-` flag character for non-custom conversion specifiers.

#### Repository
[printf](https://github.com/emmystrings309/printf)

### 13. Advanced - Reversed String

#### Task
Handle the following custom conversion specifier:
- `%r`: Print the reversed string.

#### Repository
[printf](https://github.com/emmystrings309/printf)

### 14. Advanced - ROT13 String

#### Task
Handle the following custom conversion specifier:
- `%R`: Print the ROT13'ed string.

#### Repository
[printf](https://github.com/emmystrings309/printf)

### 15. Advanced - Comprehensive Implementation

#### Task
Ensure that all the above options work well together.

#### Repository
[printf](https://github.com/emmystrings309/printf)

## Quotes

1. "Education is when you read the fine print. Experience is what you get if you don't." - **Mandy Johnson**
2. "With a face like mine, I do better in print." - **Barrow**
3. "What one has not experienced, one will never understand in print." - **Isadora Duncan**
4. "Nothing in fine print is ever good news." - **Andy Rooney**
5. "My weakness is wearing too much leopard print." - **Jack Whitehall**
6. "Sarcasm is lost in print." - **Judi Dench**
7. "Print some money and give it to us for the rain forests." - **Imelda Marcos**
8. "The negative is the equivalent of the composer's score, and the print the performance." - **Ansel Adams**
9. "It's depressing when you're still around and your albums are out of print." - **Zack De La Rocha**
10. "Every time that I wanted to give up, if I saw an interesting textile, print whatever, suddenly I would see a collection." - **Anna Wintour**
11. "Print is the sharpest and the strongest weapon of our party." - **Joseph Stalin**
12. "The flood of print has turned reading into a process of gulping rather than savoring." - **Warren Chappell**
13. "All the above options work well together." - **Anonymous**


## Copyright

&copy; 2023 Okikijesu Emmanuel, Onabanjo Oluwatomiwa . All rights reserved. This project is licensed under the [License Name](link-to-license).
