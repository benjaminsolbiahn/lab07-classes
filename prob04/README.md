# Student Profile
Create a `Student` class. `Student` should have the following data members: `name_`, `cmajor_`,
`cwid_`, and `gpa_`. Their corresponding data types should be as follows: a `std::string`, a `std::string`, 
an `unsigned int`, and a `double`. Provide accessors and mutators for each data member.

In the `main` function, the program asks the user for an `unsigned int` number that controls the number of student objects that will be created. Follow the instructions in `main.cpp` to create the necessary arrays, create the correct `Student` object, and store the object in the array appropriately.

Create the function called `average_gpa` that accepts a `Student` array and the number of elements inside it. The function must traverse the array and retrieve the individual `Student` gpas to compute their average. The function should return the average. `average_gpa` is called from the main function and is given access to the array that was constructed together with the number of elements it holds. Take note that the `average_gpa` function is not part of the `Student` class.

Please make sure to create the `Student` class and `average_gpa` function prototypes in `student_profile.hpp`. `average_gpa`'s implementation should be placed in `student_profile.cpp`.

Please see the sample output below to guide the design of your program.

## Sample Output
<pre>
Enter number of students: <b>2</b>

Enter student 1 name: <b>Anita Borg</b>
Enter student 1 major: <b>Computer Science</b>
Enter student 1 cwid: <b>854719021</b>
Enter student 1 gpa: <b>3.0</b>

Enter student 2 name: <b>Alan Turing</b>
Enter student 2 major: <b>Math</b>
Enter student 2 cwid: <b>123853112</b>
Enter student 2 gpa: <b>3.7</b>

The average gpa of 2 student(s) is 3.35
</pre>

# Submission checklist
1. Created function prototype and stored in `.hpp` file.
1. Created function implementation and stored in `.cpp` file (see [reference](https://github.com/ILXL-guides/function-file-organization)).
1. Call function in the driver
1. Compiled and ran the driver (`main`).
1. Manually checked for compilation and logical errors.
1. Ensured no errors on the unit test (`make test`).
1. Followed advice from the stylechecker (`make stylecheck`).
1. Followed advice from the formatchecker to improve code readbility (`make formatcheck`).

# Code evaluation
Open the terminal and navigate to the folder that contains this exercise. Assuming you have pulled the code inside of `/home/student/labex02-tuffy` and you are currently in `/home/student` you can issue the following commands

```
cd labex02-tuffy
```

You also need to navigate into the problem you want to answer. To access the files needed to answer problem 1, for example, you need to issue the following command.

```
cd prob01
```

When you want to answer another problem, you need to go back up to the parent folder and navigate into the next problem. Assuming you are currently in `prob01`, you can issue the following commands to go to the parent folder then go into another problem you want to answer; `prob02` for example.

```
cd ..
cd prob02
```

Use the `clang++` command to compile your code and the `./` command to run it. The sample code below shows how you would compile code save in `student_profile.cpp` and `main.cpp`, and into the executable file `main`. Make sure you use the correct filenames required in this problem.  Take note that if you make any changes to your code, you will need to compile it first before you see changes when running it.

```
clang++ -std=c++17 main.cpp student_profile.cpp -o main
./main
```

You can run one, two, or all the commands below to `test` your code, `stylecheck` your code's design, or `formatcheck` your work. Kindly make sure that you have compiled and executed your code before issuing any of the commands below to avoid errors.

```
make test
make stylecheck
make formatcheck
```

A faster way of running all these tests uses the `all` parameter.

```
make all
```

# Submission
1. When everything runs correctly,  let's copy your code into the Github repository. The first step is to add your code to what is called the staging area using git's `add` command. The parameter after `add` is the name of the file you want to add. There are cases when you have multiple changed files, so you can just type . (period) to add all modified files.

    ```
    git add main.cpp
    ```
1. Once everything is in the staging area, we use the `commit` command to tell git that we have added everything we need into the staging area.

    ```
    git commit
    ```
1. In case it asks you  to configure global variables for an email and name, just copy the commands it provides then replace the dummy text with your email and Github username.

    ```
    git config --global user.email "tuffy@csu.fullerton.edu"
    git config --global user.name "Tuffy Titan"
    ```
    When you're done, make sure you type `git commit` again.    
1. Git will ask you to describe what you have added to the staging area. By default, you will use a command-line based editor called *nano*. Go ahead and provide a description then press <kbd>Ctrl</kbd> + <kbd>x</kbd> to exit. Press <kbd>Y</kbd> to confirm that you want to make changes and then press <kbd>Enter</kbd>.
1. Lets push all changes to the Github repository using git's `push` command. Provide your Github username and password when you are asked.

    ```
    git push
    ```
1. When you finish the exercise, go back to Titanium and click on the `Add submission` button in the lab exercise page. Provide a short message in the text area such as "finished lab exercise" and click on `Save changes`. Finally click on `Submit assignment` to inform your instructor that you are done.
