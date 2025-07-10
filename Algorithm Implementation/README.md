<div align="center">
  <img src="https://readme-typing-svg.herokuapp.com?font=Fira+Code&duration=3000&pause=1000&color=4CAF50&center=true&vCenter=true&width=800&lines=📚+AI+Search+Algorithm+Implementations;For+Solving+Pathfinding,+Games+and+Optimization;Built+with+Python+%26+Love+❤️" />
</div>

<p align="center">
  <img src="https://media.giphy.com/media/f3iwJFOVOwuy7K6FFw/giphy.gif" width="350" alt="AI Search Gif"/>
</p>

<p align="center"> 
  <img src="https://komarev.com/ghpvc/?username=hrithikd9&label=Repo+views&color=0e75b6&style=flat" alt="Repo Views" /> 
</p>

---

# 📚 Algorithm Implementations

This repository contains implementations of popular AI search algorithms for solving problems like pathfinding, decision making in games, and heuristic optimizations.

---

## 📦 What's Inside:
- 🧩 **How the algorithm works**
- 🎯 **Applications**
- ⏱️ **Time & Space Complexity**
- 📸 **Example Input & Output screenshots**

---

## 📌 Algorithms Covered

### 🔹 A Star (A*)

**How it works:**  
A* search combines Dijkstra and Best-First by using `f(n) = g(n) + h(n)`:
- `g(n)` → cost from start to current node
- `h(n)` → estimated cost to goal

**Applications:**  
- 🚗 GPS navigation  
- 🤖 Robot path planning  
- 🧩 Puzzle solving  

**Complexity:**  
- Time: `O(b^d)`  
- Space: `O(b^d)`

**Example:**  
![A* Input](images/a_star_input.png)  
![A* Output](images/a_star_output.png)

---

### 🔹 Alpha-Beta Pruning

**How it works:**  
Optimizes Minimax by pruning branches that can’t affect final decision.

**Applications:**  
- ♟️ AI in two-player games

**Complexity:**  
- Time: `O(b^(m/2))` (best case)  
- Space: `O(bm)`

**Example:**  
![Alpha Beta Input](images/alpha_beta_input.png)  
![Alpha Beta Output](images/alpha_beta_output.png)

---

### 🔹 AO* (And-Or Star)

**How it works:**  
For problems with AND/OR graphs, finds minimal cost considering both.

**Applications:**  
- 🕹️ Game trees  
- 📈 Planning systems  

**Complexity:**  
- Time: Exponential (worst)  
- Space: Depends on expanded nodes

**Example:**  
![AO Star Input](images/ao_star_input.png)  
![AO Star Output](images/ao_star_output.png)

---

### 🔹 Beam Search

**How it works:**  
Heuristic search limiting to best `k` nodes at each level.

**Applications:**  
- 🗣️ Speech recognition  
- 🌐 Machine translation  

**Complexity:**  
- Time & Space: `O(b^k)`

**Example:**  
![Beam Input](images/beam_input.png)  
![Beam Output](images/beam_output.png)

---

### 🔹 Best First Search

**How it works:**  
Greedy — expands node with lowest `h(n)`.

**Applications:**  
- 📍 Pathfinding  
- 🌐 Network routing  

**Complexity:**  
- Time & Space: `O(b^m)`

**Example:**  
![Best First Input](images/best_first_input.png)  
![Best First Output](images/best_first_output.png)

---

### 🔹 BFS (Breadth-First Search)

**How it works:**  
Explores all nodes at a depth before moving deeper. Guarantees shortest path in unweighted graphs.

**Applications:**  
- 📡 Web crawlers  
- 🔗 Peer-to-peer networks  

**Complexity:**  
- Time: `O(V + E)`  
- Space: `O(V)`

**Example:**  
![BFS Input](images/bfs_input.png)  
![BFS Output](images/bfs_output.png)

---

### 🔹 Bidirectional Search

**How it works:**  
Two simultaneous searches — one from start, one from goal — stop when they meet.

**Applications:**  
- 🗺️ Road maps  
- 🚥 Large graph shortest paths  

**Complexity:**  
- Time & Space: `O(b^(d/2))`

**Example:**  
![Bidirectional Input](images/bidirectional_input.png)  
![Bidirectional Output](images/bidirectional_output.png)

---

### 🔹 DFS (Depth-First Search)

**How it works:**  
Explores as deep as possible along a branch before backtracking.

**Applications:**  
- 🧭 Maze solving  
- 🔄 Cycle detection  

**Complexity:**  
- Time: `O(V + E)`  
- Space: `O(V)`

**Example:**  
![DFS Input](images/dfs_input.png)  
![DFS Output](images/dfs_output.png)

---

### 🔹 Heuristic Search

**How it works:**  
Uses domain knowledge to pick promising paths.

**Applications:**  
- 🎮 Game AI  
- 📍 Route optimization  

**Complexity:**  
- Time/Space depends on heuristic

**Example:**  
![Heuristic Input](images/heuristic_input.png)  
![Heuristic Output](images/heuristic_output.png)

---

### 🔹 Hill Climbing

**How it works:**  
Starts with a random solution, iteratively improves until no better option.

**Applications:**  
- 📈 Function optimization  
- 🤖 ML parameter tuning  

**Complexity:**  
- Time: Problem-dependent  
- Space: Linear

**Example:**  
![Hill Climb Input](images/hill_climb_input.png)  
![Hill Climb Output](images/hill_climb_output.png)

---

### 🔹 Minimax

**How it works:**  
Simulates all possible moves in a zero-sum game to find optimal strategy assuming perfect play.

**Applications:**  
- ♟️ Chess  
- ⭕❌ Tic Tac Toe  

**Complexity:**  
- Time: `O(b^m)`  
- Space: `O(bm)`

**Example:**  
![Minimax Input](images/minimax_input.png)  
![Minimax Output](images/minimax_output.png)

---

## 📌 Notes

📂 **Ensure your input/output screenshots are inside an `images/` folder.**  
Use consistent naming like `a_star_input.png`, `a_star_output.png`, etc.

---

<p align="center">
  <img src="https://readme-typing-svg.herokuapp.com?font=Fira+Code&duration=3000&pause=1000&color=FF6B6B&center=true&vCenter=true&width=700&lines=Made+with+%E2%9D%A4%EF%B8%8F+for+AI+learners+%26+students+by+Hrithik" />
</p>
