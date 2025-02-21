Charles C. Campbell
6/27/2024
README: Reflection for Corner Grocer Program (CS210Project3 / Module 8 Journal)

1. Summariazion:

This project was made for Corner Grocer; to better help them analyze their produce bought throughout the day, and to make decisions to establish a more effective layout for their customers. The program reads a file of produce bought from the store in one day, and tally’s how many of each item was bought. The program has 4 options to choose from to analyze the data: first it will report the frequency of an item upon the user typing in it's name; second, it will provide a full list of items bought along with the number of times it sold in the day; the third option works the same as the second, except it prints a histogram with the special character "*" instead of numbers for each item; and the fourth option allows the user to end the program.

2. What Went Well:

The use of a map made pulling the items from the stores text file very simple, and allowed me to make an easy to use system with only a few lines of code to store all the string names of the items, and tally up the number of times it appeared in the text file. Additionally, the use of a switch statement made it easy to create the menu and options for the user to choose what to do in the program, as they simply only have to input 1, 2, 3, 4 to execute commands.

3. What Was Most Challenging:

I've been working hard to develop my understanding of Classes in C++; ensuring this code was implemented with a class, including public and private sections, was the most challenging part for me. Despite the difficulty of ensuring all the pieces were correct, it helped me deepen my understanding of proper syntax and logic on how this essential piece of C++ functionality works. Utilizing prior projects and examples that I had personally made helped, along with additional examples and further research into Classes through my C++ class textbook and the detailed tutorial on cplusplus.com for Classes. Having these resources helped me achieve a correctly implemented class that this project needed to succeed. I'm certain they'll continue to help me well into the future as I continue to code in C++.

4. What Could Be Enhanced:

While the code works well with the text file that I was given by Corner Grocer, it doesn't have a way to change what text file is being analyzed. A good way to improve this code would be to allow the user to type the name of a new text file to read, which would allow the program to be usable for past or future analysis on the produce bought for any given day. Additionally, it only shows the number of times the item was bought. The program could grow into something much more advanced, like being able to tally up the total sales of all (or one) product for marketing analysis to give Corner Grocer detailed money report on sales for certain or all produce in a given day.

5. Transferrable Skills:

This project was my first utilization of the map container. Seeing how easily it allowed me to store information with such little code could be very useful for future projects, especially those that deal with a great number of key values, or a group of variables. Additionally, being able to take information from an external file, utilize the variables from it within the program, and also export that info to a new file (in possible different formats as well) is a complex skill that would be very beneficial in future projects that are common in programming challenges. Knowing how to do that will be a very helpful skill in the future. Finally, getting a further foundation on how to properly establish a class structure and it's functions is an essential skill for C++ programming, and this project helped solidify my understanding and implementation of it. I'll be able to take what I've done in this program to other projects in the future.

6. How is the Program Maintainable, Readable, Adaptable?

Careful commenting throughout the code has made this program easy to understand. I've carefully detailed what the code does by explaining key parts that help the whole system run such as the implementation of the map, info on the switch statement, and key functions. As the majority of the functions and operations of the program are done within a Class, the code is easily maintainable by simply removing functions that aren't necessary or can be built upon with new functions. The Class can be adapted as well to fit the Corner Grocers needs, such as refactoring of variables can be easily done since most variables are within the Class. Additionally, following the industry standard best practices allows any other programmer to easily hop in and make adaptions.
