from collections import Counter

class StatisticsCalculator:
    def __init__(self, numbers):
        # Sort the list once for median and mode
        self.numbers = sorted(numbers)

    def mean(self):
        # Return average of all numbers
        return sum(self.numbers) / len(self.numbers)

    def median(self):
        # Return middle value(s) depending on even or odd length
        n = len(self.numbers)
        mid = n // 2
        if n % 2 == 0:
            return (self.numbers[mid - 1] + self.numbers[mid]) / 2
        else:
            return self.numbers[mid]

    def mode(self):
        # Count occurrences and return most frequent number(s)
        counts = Counter(self.numbers)
        max_freq = max(counts.values())
        return [num for num, freq in counts.items() if freq == max_freq]

# Test the class
if __name__ == "__main__":
    nums = [1, 2, 2, 3, 4]
    stats = StatisticsCalculator(nums)
    print("Mean:", stats.mean())
    print("Median:", stats.median())
    print("Mode:", stats.mode())
