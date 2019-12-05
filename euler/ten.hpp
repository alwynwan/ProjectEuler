#pragma once

// works
uintptr_t ten() {
	auto is_prime = [](int input) {
		if (input < 2)
			return false;
		for (auto i = 2; i * i <= input; i++) {
			if (!(input % i))
				return false;
		}

		return true;
	};

	uintptr_t sum = 0;

	for (auto i = 2000000; i; i--) {
		if (is_prime(i))
			sum += i;
	}

	return sum;
}