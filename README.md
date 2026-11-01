# 🏆 C++ Dynamic Leaderboard (STL Maps)

## 📖 About the Project
This project explores the `std::map` container within the C++ Standard Template Library. It simulates a game leaderboard by pairing string-based player names (keys) with integer-based high scores (values), allowing for fast data retrieval without relying on sequential array indexes.

## ✨ Features
*   **Associative Arrays:** Replaces standard integer indexing with custom key-value bindings.
*   **Dual Insertion Methods:** Populates the map using both the direct assignment operator (`map[key] = value`) and the strict insertion method (`map.insert({{key, value}})`).
*   **Pair Iteration:** Utilizes `map::iterator` to extract data pairs, accessing keys via `iter->first` and values via `iter->second`.
*   **Automatic Sorting:** Leverages the internal binary search tree architecture of `std::map` to automatically order leaderboard entries alphabetically by key.

## 💻 Tech Stack
*   **Language:** C++
*   **Core Concepts:** STL Maps, Key-Value Pairs, Associative Containers, Iterators.
