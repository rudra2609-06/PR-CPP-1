# PR-CPP-1

```markdown
# Time Conversion Utility (C++)

## Table of Contents
1. [Description](#description)
2. [Features](#features)
3. [Installation](#installation)
4. [Usage](#usage) 
5. [Examples](#examples)
6. [Output Screenshots](#output-screenshots)
7. [Technical Details](#technical-details)
8. [Testing](#testing)
9. [Limitations](#limitations)
10. [License](#license)
11. [Author](#author)

## Description
This C++ program provides time conversion capabilities between two formats:
- **Seconds to HH:MM:SS**: Converts total seconds to hours, minutes, seconds format
- **HH:MM:SS to Seconds**: Converts hours, minutes, seconds format to total seconds

The program demonstrates object-oriented programming principles with a clean, modular design using a dedicated TimeConvertor class.

## Features
✔ Bidirectional time conversion  
✔ Input validation  
✔ Proper zero-padded time formatting (HH:MM:SS)  
✔ Simple console-based interface  
✔ Clean, well-structured OOP implementation  

## Installation
1. Ensure you have a C++ compiler installed (g++, clang, or MSVC)
2. Clone or download the source code
3. Compile using:
```bash
g++ TimeConverter.cpp -o timeconverter
```
4. Run the executable:
```bash
./timeconverter
```

## Usage
The program presents a simple menu-driven interface:
1. Select conversion type (1 or 2)
2. Enter the time values:
   - For seconds to HH:MM:SS: Enter total seconds
   - For HH:MM:SS to seconds: Enter hours, minutes, seconds separately
3. View the converted result

## Examples
### Example 1: Seconds to HH:MM:SS
```
Enter conversion type (1 or 2): 1
Enter time in seconds: 3661
Time in HH:MM:SS = 01:01:01
```

### Example 2: HH:MM:SS to Seconds
```
Enter conversion type (1 or 2): 2  
Enter hours: 1
Enter minutes: 30
Enter seconds: 15
Total seconds: 5415
```

## Output Screenshots
### Terminal Output
![Terminal Output]<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/ab4417d8-1a25-4b8b-b3c4-362382c2f250" />
 *Replace with actual screenshot path*

## Technical Details
### Class Structure
```cpp
class TimeConvertor {
private:
    int total_time;
    int time_sec;
    int time_min; 
    int time_hours;
    int choice;
    
public:
    void Convert_Time_Input();
    void Convert_Time();
};
```

### Key Methods
1. `Convert_Time_Input()`: 
   - Handles user input selection
   - Gathers appropriate time values
   - Includes basic input validation

2. `Convert_Time()`:
   - Performs calculations:
     - Seconds → HH:MM:SS using division/modulus
     - HH:MM:SS → Seconds using arithmetic
   - Formats output with zero-padding

## Testing
The program should be tested with:
- Boundary cases (0 seconds, max int values)
- Edge cases (59 seconds/minutes transitions)
- Invalid inputs (negative numbers, non-numeric)

## Limitations
- No GUI interface (console only)
- Limited input validation (only handles basic invalid choices)
- No memory for previous conversions
- Integer-only calculations (precision loss)

## License
MIT License - Free to use and modify with attribution.

To use this README:
1. Save as `README.md`
2. Take screenshots of both conversion types in action
3. Replace placeholder image paths
4. Fill in the author information
5. Update the date
6. Add any additional notes about modifications

