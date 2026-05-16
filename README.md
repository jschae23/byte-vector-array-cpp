# byte-vector-array-cpp

This C++ example demonstrates the **dynamic resizing** of a `std::vector<std::byte>`, showcasing how its **size** (number of elements) and **capacity** (allocated memory) evolve as elements are added, removed, or cleared.

---
- **Initialization**: Starts as an empty vector, with both `size` and `capacity` at their minimum (often zero).
- **Pushing Elements**: As bytes are added, the `size` increases. If the current `capacity` is exceeded, the vector automatically reallocates memory, typically doubling its `capacity` to accommodate future growth.
- **Removing Elements**: Removing elements reduces the `size`, but the `capacity` remains unchanged unless explicitly adjusted. This ensures efficient reuse of allocated memory.
- **Cleanup**: Clearing the vector resets the `size` to zero, and `shrink_to_fit()` releases excess `capacity`, minimizing memory usage.

This example highlights the **efficiency and flexibility** of vectors in managing dynamic data.

Run showcase:
```console
g++ -std=c++17 main.cpp
```
