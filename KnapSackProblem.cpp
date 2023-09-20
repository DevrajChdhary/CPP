#include <iostream>
#include <vector>

using namespace std;

struct Item {
    int weight;
    int value;
};

int knapsackRecursive(vector<Item>& items, int capacity, int index) {
    if (index < 0 || capacity == 0) {
        return 0;
    }
    if (items[index].weight > capacity) {
        return knapsackRecursive(items, capacity, index - 1);
    }
    int includeItem = items[index].value + knapsackRecursive(items, capacity - items[index].weight, index - 1);
    int excludeItem = knapsackRecursive(items, capacity, index - 1);
    return max(includeItem, excludeItem);
}

int main() {
    vector<Item> items = {{2, 10}, {3, 5}, {5, 15}, {7, 7}, {1, 6}};
    int capacity = 10;
    int max_value = knapsackRecursive(items, capacity, items.size() - 1);
    cout << "Maximum value: " << max_value << endl;
    return 0;
}
