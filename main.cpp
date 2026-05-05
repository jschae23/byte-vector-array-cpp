#include <vector>
#include <iostream>

int main() {
    // Create an empty vector of std::byte
    std::vector<std::byte> buf;

    std::cout << "Initial size: " << buf.size() << " bytes\n";
    std::cout << "Initial capacity: " << buf.capacity() << " bytes\n";

    // --- PUSH BYTES ---
    // Push 8 bytes to trigger capacity expansion
    for (int i = 1; i <= 8; ++i) {
        buf.push_back(static_cast<std::byte>(i));
    }

    std::cout << "After pushing 8 bytes:\n";
    std::cout << "Size: " << buf.size() << " bytes\n";
    std::cout << "Capacity: " << buf.capacity() << " bytes\n";

    // --- REMOVE BYTES ---
    // Remove the last 2 bytes (0x08, 0x07)
    buf.pop_back();
    buf.pop_back();

    // Remove the first 2 bytes (0x01, 0x02) by erasing the first two elements
    buf.erase(buf.begin(), buf.begin() + 2);

    std::cout << "After removing 4 bytes:\n";
    std::cout << "Size: " << buf.size() << " bytes\n";
    std::cout << "Capacity: " << buf.capacity() << " bytes\n";

    // --- CLEANUP TO 0 BYTES ---
    // Remove all remaining bytes
    buf.clear();
    buf.shrink_to_fit();

    std::cout << "After cleanup:\n";
    std::cout << "Size: " << buf.size() << " bytes\n";
    std::cout << "Capacity: " << buf.capacity() << " bytes\n";
}
