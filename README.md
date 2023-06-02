# **RELATIVE GRADING SYSTEM**
## INTRODUCTION
The relative grading system in universities is a method of evaluating students' performance in comparison to their peers. Instead of assessing students' absolute scores or achievements, relative grading ranks students based on their performance relative to the rest of the class. Here's how it typically works:
1. Distribution of grades: In a relative grading system, grades are assigned based on a predetermined distribution. This distribution can be a bell curve or any other predefined pattern. The purpose is to assign a fixed percentage of students to each grade category.

2. Comparison to peers: After all the students' scores have been obtained, the scores are sorted in descending order to determine the highest and lowest scores in the class. These scores set the benchmark for the grading scale.

3. Determining grade boundaries: The distribution of grades is then applied to the sorted scores. Grade boundaries are established based on the distribution percentages. For example, the top 10% of students may receive an 'A', the next 20% a 'B', and so on.

4. Assigning grades: Each student is assigned a grade based on their position in the sorted list and the determined grade boundaries. Students who perform better than the majority of their peers receive higher grades, while those who perform worse receive lower grades.

This program uses the following distribution of grades that follows a standard 10 point scale:
* Top 10%: S
* Next 20%: A
* Next 30%: B
* Next 25%: C
* Next 15%: F

## EXPLANATION OF THE CODE
The given code is a C++ program that takes input for the marks scored by students, sorts the marks in descending order, assigns grades to the students based on a standard grading scale, and displays the grades in increasing order of student numbers.

Let's break down the code step by step:

1. The code includes necessary header files such as `<iostream>`,`<string>`,and `<iomanip>`  to provide input/output and string manipulation functionality.

2. The `myswap` function is a utility function that swaps the values of two integers using two integer parameters.

3. The `swapchar` function is a utility function that swaps the values of two strings using two string parameters.

4. The `bubbleSort` function performs bubble sort on an integer array (arr) and also swaps the corresponding elements in another integer array (index1). The sorting is done in descending order.

5. The main function is the entry point of the program.

6. It prompts the user to enter the number of students (n).

7. It declares two integer arrays, marks and index1, of size n to store the marks and original indices of the students, respectively.

8. It then asks the user to input the marks for each student and stores them in the marks array. It also assigns the original indices to the index1 array.

9. The bubbleSort function is called to sort the marks array in descending order while keeping the corresponding indices in sync.

10. The sorted marks are then displayed.

11. The original indices (after sorting) are displayed to represent the student numbers in increasing order.

12. A standard 10-point relative grading scale is defined using an integer array b, where each element represents the number of students falling into a particular grade range.

13. A string array grade is declared to store the grades corresponding to each student.

14. The grades are assigned to the students using a while loop and the values from the b array. The grades are assigned in the order of "S" (for top 10%), "A" (for next 20%), "B" (for next 30%), "C" (for next 25%+0.5), and "F" (for the remaining 15%-0.5).

15. After assigning the grades, another loop is used to rearrange the grade array in increasing order of student numbers. The index1 array is used as a reference for this reordering, and the swapchar function is called to swap the corresponding grades.

16. Finally, the grades of each student are displayed according to the increasing order of student numbers.

17. The program ends with a return 0 statement.

In summary, this program takes input for student marks, sorts them in descending order, assigns grades based on a grading scale, and displays the grades in increasing order of student numbers.

