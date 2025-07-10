# 📚 Algorithm Implementations

This repository contains implementations of popular AI search algorithms.  
Each folder includes:
- 🧩 How the algorithm works
- 🎯 Applications
- ⏱️ Time and space complexity
- 📸 Example input & output

---

## 🔹 A Star (A*)

**How it works:**  
A* search combines the advantages of Dijkstra’s Algorithm and Best-First Search. It uses `f(n) = g(n) + h(n)` where:  
- `g(n)` = cost from start to current node  
- `h(n)` = heuristic estimate to goal

**Applications:**  
- GPS navigation systems  
- Robot path planning  
- Puzzle solving (like 8-puzzle)

**Complexity:**  
- Time: `O(b^d)`  
- Space: `O(b^d)`  
  *`b` = branching factor, `d` = depth of solution*

**Input & Output:**  
![A* Input](images/a_star_input.png)  
![A* Output](images/a_star_output.png)

---

## 🔹 Alpha-Beta

**How it works:**  
Alpha-Beta pruning improves the Minimax algorithm by eliminating branches that won’t affect the final decision.

**Applications:**  
- AI in two-player games (Chess, Tic Tac Toe)

**Complexity:**  
- Time: `O(b^(m/2))` with perfect ordering  
- Space: `O(bm)`  
  *`b` = branching factor, `m` = maximum depth*

**Input & Output:**  
![Alpha Beta Input](images/alpha_beta_input.png)  
![Alpha Beta Output](images/alpha_beta_output.png)

---

## 🔹 AO* (And-Or Star)

**How it works:**  
AO* is used for problems with AND/OR graphs. It expands nodes and backtracks to find minimal-cost solutions considering both AND and OR branches.

**Applications:**  
- Game trees with multiple possible strategies  
- Problem reduction  
- Planning systems

**Complexity:**  
- Time: Exponential in worst case  
- Space: Proportional to number of nodes expanded

**Input & Output:**  
![AO Star Input](images/ao_star_input.png)  
![AO Star Output](images/ao_star_output.png)

---

## 🔹 Beam Search

**How it works:**  
Beam Search is a heuristic search that explores a graph by expanding only a limited number of best nodes at each level.

**Applications:**  
- Speech recognition  
- Machine translation  
- Scheduling

**Complexity:**  
- Time: `O(b^k)` (where `k` is beam width)  
- Space: `O(b^k)`

**Input & Output:**  
![Beam Search Input](images/beam_input.png)  
![Beam Search Output](images/beam_output.png)

---

## 🔹 Best First Search

**How it works:**  
Best First Search selects the next node with the lowest heuristic cost (`h(n)`). It’s greedy — always expanding the most promising node.

**Applications:**  
- Pathfinding  
- Network routing

**Complexity:**  
- Time: `O(b^m)`  
- Space: `O(b^m)`  
  *`b` = branching factor, `m` = maximum depth*

**Input & Output:**  
![Best First Input](images/best_first_input.png)  
![Best First Output](images/best_first_output.png)

---

## 🔹 BFS (Breadth-First Search)

**How it works:**  
BFS explores all nodes at the current depth before moving to the next level. It guarantees the shortest path in unweighted graphs.

**Applications:**  
- Shortest path in unweighted graphs  
- Web crawlers  
- Peer-to-peer networks

**Complexity:**  
- Time: `O(V + E)`  
- Space: `O(V)`

**Input & Output:**  
![BFS Input](images/bfs_input.png)  
![BFS Output](images/bfs_output.png)

---

## 🔹 Bidirectional Search

**How it works:**  
Runs two simultaneous searches — one forward from the start, one backward from the goal — stopping when they meet.

**Applications:**  
- Pathfinding in road maps  
- Shortest path in large graphs

**Complexity:**  
- Time: `O(b^(d/2))`  
- Space: `O(b^(d/2))`

**Input & Output:**  
![Bidirectional Input](images/bidirectional_input.png)  
![Bidirectional Output](images/bidirectional_output.png)

---

## 🔹 DFS (Depth-First Search)

**How it works:**  
DFS explores as far as possible along each branch before backtracking.

**Applications:**  
- Solving mazes  
- Topological sorting  
- Cycle detection

**Complexity:**  
- Time: `O(V + E)`  
- Space: `O(V)`

**Input & Output:**  
![DFS Input](images/dfs_input.png)  
![DFS Output](images/dfs_output.png)

---

## 🔹 Heuristic Search

**How it works:**  
Uses domain-specific knowledge to estimate which path is likely to lead to a solution faster.

**Applications:**  
- Game AI  
- Route finding  
- Expert systems

**Complexity:**  
- Depends on the heuristic used  
- Can dramatically reduce time compared to blind search

**Input & Output:**  
![Heuristic Input](images/heuristic_input.png)  
![Heuristic Output](images/heuristic_output.png)

---

## 🔹 Hill Climbing

**How it works:**  
Starts with an arbitrary solution and iteratively makes small changes that improve it. Stops when no further improvements can be found.

**Applications:**  
- Function optimization  
- Machine learning parameter tuning  
- Robotics

**Complexity:**  
- Time: Depends on problem  
- Space: Linear

**Input & Output:**  
![Hill Climb Input](images/hill_climb_input.png)  
![Hill Climb Output](images/hill_climb_output.png)

---

## 🔹 Minimax

**How it works:**  
Used for decision making in zero-sum games. It simulates all possible moves to find the optimal strategy assuming the opponent plays optimally too.

**Applications:**  
- Chess  
- Tic Tac Toe  
- Connect Four

**Complexity:**  
- Time: `O(b^m)`  
- Space: `O(bm)`

**Input & Output:**  
![Minimax Input](images/minimax_input.png)  
![Minimax Output](images/minimax_output.png)

---

## 📌 Notes

📂 **Replace image paths:**  
Put your input/output screenshots in an `images/` folder inside your repo.  
Update the file names as needed.

---

✅ **Made with ❤️ for AI learners**
