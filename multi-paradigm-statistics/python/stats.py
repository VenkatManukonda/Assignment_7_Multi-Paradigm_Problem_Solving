class StatisticsCalculator:
    """A simple OOP-based statistics calculator."""

    def __init__(self, numbers):
        self.numbers = numbers

    def mean(self):
        if not self.numbers:
            return 0
        return sum(self.numbers) / len(self.numbers)

    def median(self):
        if not self.numbers:
            return 0
        nums = sorted(self.numbers)
        n = len(nums)
        mid = n // 2
        if n % 2 == 0:
            return (nums[mid - 1] + nums[mid]) / 2
        return nums[mid]

    def mode(self):
        if not self.numbers:
            return 0
        freq = {}
        for num in self.numbers:
            freq[num] = freq.get(num, 0) + 1
        return max(freq, key=freq.get)

if __name__ == "__main__":
    nums = [4, 2, 5, 2, 9, 2, 3]
    calc = StatisticsCalculator(nums)

    print("Mean:", calc.mean())
    print("Median:", calc.median())
    print("Mode:", calc.mode())