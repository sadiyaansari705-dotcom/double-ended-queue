Deque Implementation in C (Using Doubly Linked List)

This project demonstrates how to implement a Deque (Double Ended Queue) in C using a Doubly Linked List.

A Deque allows insertion and deletion from both ends (front and rear).

🧾 Program Description

The program implements the following operations:

✅ Insert at Front

✅ Insert at Rear

✅ Delete from Front

✅ Delete from Rear

✅ Display Deque Elements

The implementation uses:

A Node structure with:

data

prev pointer

next pointer

Two global pointers:

front

rear

🧠 Concepts Used

Doubly Linked List

Pointers (prev and next)

Dynamic Memory Allocation (malloc)

Memory Deallocation (free)

Deque Data Structure

Functions in C

🔄 How Deque Works
🔹 Insert at Front

Create a new node.

Set its next to current front.

Update prev pointer of old front.

Move front to new node.

🔹 Insert at Rear

Create a new node.

Set its prev to current rear.

Update next pointer of old rear.

Move rear to new node.

🔹 Delete from Front

Remove the node at front.

Move front to next node.

Update prev pointer.

Free removed node.

🔹 Delete from Rear

Remove the node at rear.

Move rear to previous node.

Update next pointer.

Free removed node.

📤 Sample Output
Inserted at rear: 10
Inserted at rear: 20
Inserted at front: 5
Deque elements: 5 10 20
Deleted from front: 5
Deleted from rear: 20
Deque elements: 10
🚀 How to Run
🔹 Compile the Program
gcc main.c -o output
🔹 Run the Program
./output

(For Windows)

output.exe
📂 Project Structure
📁 deque-using-doubly-linked-list
 ├── main.c
 └── README.md
⚠️ Features

Dynamic memory allocation

Efficient insertion and deletion from both ends

Proper handling of empty deque

Clean traversal using next pointer

🔧 Possible Improvements

Make the program menu-driven

Add peek front and peek rear functions

Implement size counter

Add full memory cleanup before exit

👨‍💻 Author


B.Tech Student

If you want, I can also provide:

⭐ Short lab submission version

⭐ Deque using array implementation

⭐ Comparison between Queue and Deque

⭐ Menu-driven full implementation
