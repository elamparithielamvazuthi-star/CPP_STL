# C++ STL Complete Practice Repository 🚀

Welcome to my C++ Standard Template Library (STL) learning repository.

This repository contains my hands-on C++ STL practice while preparing for:

- Data Structures & Algorithms
- LeetCode
- Coding Interviews
- Software Engineering roles
- Placement preparation
- Competitive Programming

---

# About STL

STL (Standard Template Library) is a collection of ready-made classes and functions in C++ that help write efficient and reusable code.

STL mainly contains:

1. Containers
2. Iterators
3. Algorithms
4. Functors

---

# Repository Structure

```text
CPP_STL/
│
├── INTRODUCTION
│
├── Vectors
│   ├── VECTORS.cpp
│   ├── VECTOR_INSERT.cpp
│   ├── VECTOR_ERASE.cpp
│   ├── VECTOR_CLEAR.cpp
│   ├── VECTOR_EMPTY.cpp
│   ├── VECTORS_ITERATORS.cpp
│
├── Iterators
│   ├── FORWARD_ITERATORS.cpp
│   ├── BACKWARD_ITERATORS.cpp
│
├── Lists
│   ├── LIST.cpp
│
├── Extra Functions
│   ├── EXTRA_FUNCTIONS_VECTOR.cpp
│
├── Declaration Methods
│   ├── METHODS_OF_DECLARATION.cpp
```

---

# Topics Covered

## Vector

Topics:

- Declaration
- Initialization
- push_back()
- pop_back()
- size()
- capacity()
- front()
- back()
- insert()
- erase()
- clear()
- empty()
- iterators

Example:

```cpp
vector<int> v;

v.push_back(10);
v.push_back(20);

for(int val:v)
{
    cout<<val;
}
```

---

## List

Topics:

- push_front()
- push_back()
- pop_front()
- pop_back()
- traversal

Example:

```cpp
list<int> l;

l.push_front(10);
l.push_back(20);
```

---

## Iterators

Types covered:

- begin()
- end()
- forward iterator
- reverse iterator
- rbegin()
- rend()

Example:

```cpp
for(auto it=v.begin();it!=v.end();it++)
{
     cout<<*it;
}
```

---

# STL Containers To Learn Next

- Stack
- Queue
- Priority Queue
- Deque
- Pair
- Set
- Multiset
- Unordered Set
- Map
- Multimap
- Unordered Map

---

# Algorithms To Learn

- sort()
- reverse()
- max_element()
- min_element()
- binary_search()
- lower_bound()
- upper_bound()
- count()
- find()

---

# Learning Goals

Current Focus:

✅ Vectors  
✅ Iterators  
✅ Lists

Upcoming:

⬜ Stack  
⬜ Queue  
⬜ Set  
⬜ Map  
⬜ Algorithms

---

# Why this repository?

This repository tracks my C++ STL learning journey and documents my progress while improving problem-solving skills.

---

# Author

Elamparithi  
CSE Student  
Learning DSA | LeetCode | STL | Software Engineering

⭐ If you found this useful, feel free to explore the repository.
