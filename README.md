In this assignment, you will be writing a template-type struct for a Node in a singly-linked list data structure, a Stack class template designed using a linked data structure (using the Node struct), and an Instagram class template which utilizes the Stack class template as a data member.  You will then write a main.cpp file which tests the features of the Instagram class template as specified using the attached data file presidentsWstates.txt Download presidentsWstates.txt

stack.h will contain the definitions for the Node struct template and the stack class, along with the implementations of the stack member functions.  There will not be a stack.cpp file

instagram.h will contain the definition for the instagram class template, along with the implementation of its member functions.  There will not be an instagram.cpp file.  It should include the stack.h file.

main.cpp will contain the main function definition.  It should include the instagram.h file.

If you find that you need to include the iostream library or the string library you can.  However, you should not be using things like the stack class template defined in the STL.  Don't include a library for the stack definition; you will be writing it.

 

Node Struct Template:

Write a Node struct template for a singly-linked data structure.  Each node will have two data members:

A generic data member (use the generic type of the template), IE if you write " template < class T> " then the generic data type is "T"
A Node pointer for the next data member.

 

 

Stack Class:

Write a Stack class template using linked structure (rather than an array structure) and implement the following functionalities.

push (inserts element to the front)
pop (removes the front element and provides content)
isEmpty (checks whether the Stack is empty or not)
makeEmpty (calls pop function until the Stack is empty)
peek (provides the element sitting at the top/front, but does not remove)
print (prints all the elements)
You will need to define a Node structure to be used by the Stack class.  Use a singly-linked list structure.  A Node should be a template type structure with a generic data member and a link to the next node.  

For the Stack class template and the Node struct template, if you wish to use online resources / textbook resources to help you this is okay.  However, it should include exactly the same functions described in this specification--not "similar" or "different" functions.  There are many different implementations of Stack class templates to be found online--please don't simply copy one of those without ensuring that it works according to this specification.  Make sure that you are using the same function names as in this specification, and that they work as specified here.


Instagram Class:

You’re going to #include the Stack class (stack.h) in your Instagram class that will have the following functions and data members:

 

Functions:

 

addfollower(): a given follower should be added to the follower list which is a Stack object. That means when you call this function push function from Stack should be triggered and the new follower should be added to the front of your stack.
 

removeFollower(): you don’t have to pass a user name, but whenever this function is called the pop function from Stack should be triggered. That means the follower at the front/top should be removed from the list and his/her name should be provided.
 

printFollowers(): this should trigger the print() function of Stack so that you can print all the followers.
 

latestFollower(): this should trigger the peek() function of Stack so that you can print the follower who was added most recently.
 

resetFollowers(): this should trigger the makeEmpty() function of Stack so that your list can be emptied.
 

checklist(): this should trigger the isEmpty() function of Stack to verify that your list is empty.
 

Data members:

 

“int numoffollowers” to keep track of the total number of followers
 

“DataType user” who’s going to be followed.
 

“Stack<DataType>followerlist” (this is the followerlist in a stack form, not an array!)
 

Main Program:

Your main program should  #include the Instagram class and read the presidents and their home states in the file attached. 

 Additionally, your main program should satisfy the following conditions:

As you read the presidents and their home states from the file, your addFollower() function should push them into the followerlist. All presidents become followers.
 

Call latestFollower() function to see the most recent president name and state and print it on the screen.
 

Call removeFollower() function and print the name and the home state of the removed president. 
 

Call printFollowers() to display all the names with their states (You can use your earlier print function)
 

Call resetFollowers() to remove all followers .
 

Call checklist to verify that your Instagram object has an empty followerlist and report your finding with a message on the screen.
