# byte-vector-array-cpp

This C++ example demonstrates the **dynamic resizing** of a `std::vector<std::byte>`, showcasing how its **size** (number of elements) and **capacity** (allocated memory) evolve as elements are added, removed, or cleared.

---
```
--- Step 1: Initialization ---
Vector:     []
Capacity:   []
Size: 0 bytes
Capacity: 0 bytes
```
- **Initialization**: Starts as an empty vector, with both `size` and `capacity` at their minimum.

---

```
--- Step 2: After Pushing 8 Bytes ---
Vector:     [● ● ● ● ● ● ● ●]
Capacity:   [● ● ● ● ● ● ● ●]
Size: 8 bytes
Capacity: 8 bytes (expanded)
```
- **Pushing Elements**: As bytes are added, the `size` increases. If the current `capacity` is exceeded, the vector automatically reallocates memory, typically doubling its `capacity` to accommodate future growth.

---

```
--- Step 3: After Removing 4 Bytes ---
Vector:     [● ● ● ●]
Capacity:   [● ● ● ● ● ● ● ●]
Size: 4 bytes
Capacity: 8 bytes (unchanged)
```
- **Removing Elements**: Removing elements reduces the `size`, but the `capacity` remains unchanged unless explicitly adjusted.

---
```
--- Step 4: After Cleanup ---
Vector:     []
Capacity:   []
Size: 0 bytes
Capacity: 0 bytes (shrunk)
```
- **Cleanup**: Clearing the vector resets the `size` to zero, and `shrink_to_fit()` releases excess `capacity`, minimizing memory usage.

Run showcase:
```console
g++ -std=c++17 main.cpp && ./a.out
```
