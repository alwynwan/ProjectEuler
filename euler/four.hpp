#pragma once

// works
uintptr_t four() {
	int highest_palindrome = 0;

	auto is_palindrome = [](unsigned int input) {
		int n = input, reverse = 0, rem;
		while (n != 0) {
			rem = n % 10;
			reverse = reverse * 10 + rem;
			n /= 10;
		}
		return reverse == input;
	};

	for (auto i = 100; i < 1000; i++) {
		for (auto j = 100; j < 1000; j++) {
			if (is_palindrome(i * j)) {
				printf("[%i * %i] %i is a palindrome\r\n", i, j, i * j);

				if ((i * j) > highest_palindrome)
					highest_palindrome = i * j;
			}
		}
	}

	return highest_palindrome;
}