# ArrayDupesSolver

This is a C++ program that demonstrates how to find and remove duplicate values from an array using dynamic memory allocation. The program takes an array of integers as input, identifies and marks the duplicate values, removes the marked duplicates, and displays the resulting array without duplicates.

## Table of Contents

- [Overview](#overview)
- [Usage](#usage)
- [How It Works](#how-it-works)
- [Example](#example)
- [Contributing](#contributing)
- [License](#license)

## Overview

The program uses dynamic memory allocation to create an array of integers based on user input. It then sorts the array in non-decreasing order and identifies duplicate values by marking them with -1. After marking the duplicates, it shifts the non-duplicate elements to the front of the array and updates the array size. Finally, the program displays the resulting array without duplicates.

## Usage

1. Clone this repository to your local machine.
2. Navigate to the project directory.
3. Compile the program using a C++ compiler (e.g., g++).
4. Run the executable.
5. Follow the on-screen prompts to input the array size and elements.

## How It Works

The program dynamically allocates memory for the array and sorts it to prepare for duplicate identification. It then marks the duplicate values and removes them from the array. The resulting array contains only unique elements.

## Example

![Arraydupes](https://github.com/HamzaSajjad141/ArrayDupesSolver/assets/125465047/7a985e76-a990-4c03-ae34-70b74e5d9947)
)

## Contributing

Contributions are welcome! If you find any issues or have suggestions for improvements, please feel free to open an issue or create a pull request.

## License

This project is licensed under the [MIT License](LICENSE).
