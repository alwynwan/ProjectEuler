#pragma once

// works
uintptr_t two() {
	int x = 0, y = 1, z = 0;
	int sum = 0;

	for (auto i = 0; ; i++) {
		z = x + y;

		if (z > 4000000)
			break;

		if (!(z % 2)) {
			std::cout << sum << std::endl;
			sum += z;
		}

		y = x;
		x = z;
	}

	return sum;
}