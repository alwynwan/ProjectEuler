#pragma once

// works
uintptr_t three() {
	auto target = 600851475143, temp = target, highest_prime = 0i64;

	for (auto i = 2;; i++) {
		if (temp == 1)
			break;

		if (!(temp % i)) {
			temp /= i;
			highest_prime = i;
			std::cout << i << '\t' << temp << std::endl;
		}
	}

	return highest_prime;
}