#pragma once

// works
uintptr_t one() {
	int sum = 0;
	for (auto i = 0; i < 1000; i++) {
		if (!(i % 3) || !(i % 5)) {
			sum += i;
		}
	}

	return sum;
}