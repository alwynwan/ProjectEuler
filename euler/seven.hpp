#pragma once

// works
uintptr_t seven() {
	auto is_prime = [](int input) {
		if (input < 2)
			return false;
		for (auto i = 2; i * i <= input; i++) {
			if (!(input % i))
				return false;
		}

		return true;
	};

	int prime = 0, count = 0;

	// continue incrementing until we get to 
	for (auto i = 0; count < 10001; i++) {
		if (is_prime(i)) {
			prime = i;
			count++;
		}
	}

	return prime;
}