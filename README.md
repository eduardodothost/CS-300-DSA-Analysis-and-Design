# CS-300-DSA-Analysis-and-Design Module Eight Journal

      The Problem

> The class was given a programing problem that they attempted to solve using three different data structures using an original algorithm. We were given a series of several comma separated strings in a text file and given the scenario of storing the information in such a way that we could access it outside of the file for validation and printing purposes.

    The Approach

> Each week the class worked to develop a new storage algorithm employing a linked list, hash table, and binary search tree. We ultimately worked our way to devising our own implementation considering time and space complexity and the problem itself using pseudo code and applying our knowledge of the C/C++ language.

> I learned to focus on my overall process to aproaching a problem from many angles and it's possible solutions. Ultimately I learned to value my time understanding the problem is equally, if not more important then finding a solution.

    Roadblocks

> While working the code I realized that I had to satisfy three key requirements. I had multiple lines in a text file that had to be individualy containerized. I had to make sure that each line had two identifiers; and that each line identifier had a coresponding prerequisite line to be valid.

> I realized that I had a finite number of elements I had to account for and choose not to implement anyone of the data structures that we studied. I came to realize that I had to make an argumentagainst the style of input that I was going to recieve. I was recieveing a line of information that coresponded to a student's course selection. The line itself listed an identifier and an inline statement in regards to that identifiers prerequsites. The line was soposed to be used as a means to later cross check each additional line added to the file. In this case one would need to itterate over a the whole list first and then calidate that you had a matching prerequsite for each course id.

> I made sure to treat my course class as something I could see being used as an interface for classes that pertained to different courses curiculums that had to be accounted for. I had a set of dependencies that each course had to abide by. I decded to implement a graph where I kept track the presence of a course ID or its absence using booleans. I made sure that I had a struct that kept track of wach possible state that my data intended to represent. My narrative tree was then scripted in a way that accounted for falacies or edge cases in the input given. My search and printing function then ended up running on an order of constant time because I kept all elements I had to access on the stack using local variables that represented the state of the object I intended to evaluate.

    New Prospectives

> I now have a much better idea of how to approach a problem and it's solution. I even have a better idea on how to manage problems and solutions themselves. Now I tend to stand back and look at the bigger picture in order to start thinking outside of the box. For instance; I now realize that the key to implementing any one of the other data structures would lie in proper bounds checking. Linked lists work well if they follow a certain order. Hash Tables and Trees too need to be balanced in a way in which you can use them efficiently for their use case. In taking control of the rules in which I managed my data to realize the system requirements; I added value and quality to the system at large. My implementation was moved to provided usefull reausable code. I had a clear input stream that had a container we could easily manipulate in constant time.
