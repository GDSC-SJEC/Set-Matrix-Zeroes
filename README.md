# Set Matrix Zeroes Coding Challenge

A challenge to solve a 2D Matrix Problem for Hacktoberfest 2022!<br /><br />
<img src="https://img.shields.io/badge/DIFFICULTY-Easy-228B22?style=for-the-badge&logo=OpenProject" />

## ❇️ What is Hacktoberfest and how do I get started?

Hacktoberfest is a month-long celebration of open source, organised by Digital Ocean. ([More details here](https://hacktoberfest.com/participation/))

If you've never made a pull request before, or participated in an open-source project, we recommend taking a look at these resources:

- [Firstcontributions](https://github.com/firstcontributions/first-contributions)
- [Digitalocean's guide to creating your first pull request](https://www.youtube.com/watch?v=nkuYH40cjo4)

These two resources have everything you need to learn about open-source, with a step-by-step guide to making your very first PR. Once you've got your feet wet, you're ready to come back and dive into Hacktoberfest fun!

## ❇️ Rules

- You are free to use any Programming Language.
- Include Output Screenshot of Example Cases.
- Also mention the Time and Space Complexity of your solution in the code.
- You are allowed to add images or any kind of assets.
- Please make sure that the code is your own and not copied from somewhere else.

## ❇️ Question
Given an **m x n** integer matrix, if an element is 0, set its entire row and column to 0's.

### Constraints
	m > 1
	n > 1

#### Example 1
	
	Input:
    m = 3, n = 3
    matrix = [[1,1,1],
              [1,0,1],
              [1,1,1]]

	Output: 
	[[1,0,1],
	 [0,0,0],
	 [1,0,1]]

#### Example 2

	Input:
    m = 3, n = 4
	matrix = [[0,1,2,0],
			  [3,4,5,2],
			  [1,3,1,5]]

	Output:
	[[0,0,0,0],
	 [0,4,5,0],
	 [0,3,1,0]]

### Note
The best solution has **Space Complexity** of **O(1)**.

## ❇️ How to contribute

1. First up you need to fork (make a copy) of this repo to your Github account.

2. Clone (download) your fork to your computer.

3. Set your streams so you can sync your clone with the original repo (get the latest updates).

   - `git remote add upstream https://github.com/GDSC-SJEC/Set-Matrix-Zeroes.git `
   - `git pull upstream main`
   - The above 2 commands will synchronize your forked version of the project with the actual repository.

4. Create a branch.

5. In the Submissions directory (folder), create a directory named after yourself. (Eg: yashasip/).

6. Within this folder you just made, create the file containing your solution. Add the Output Screenshots in this directory.

7. Write the code to take input and display the output as a 2D List. Include comments. Add the Space and Time Complexity of your solution at the beginning as a comment.

8. Open the file `CONTRIBUTORS.md` and add your name with your github URL.
   <br />Note: The format is `- [Your Name](https://github.com/yourgithubusername)`

9. Grab a screenshot of your final solution, ensuring that its nicely cropped and preferably squared. Save this in your directory using `icon.png` as the name.
    <br />Note: Make sure you have addded this screenshot since this screenshot will help us save time while verifying your work.

10. Pull from the upstream again, like we did in step 3. This is to ensure we still have the latest code.

    - `git pull upstream main`

11. Commit and push the code to your fork.

12. Create a pull request to have the changes merged from your fork into the origin.

> Congratulations! You are now one pull request closer to getting that free t-shirt. Repeat these steps until you have made at least 4 qualifying pull requests. You can check how many qualifying pull requests you have made at <https://hacktoberfest.com/profile/> Have fun and Happy coding!

**Stuck? No problem! You can come talk to us in our discord server and we're here to help you!**
