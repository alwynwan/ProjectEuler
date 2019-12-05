#pragma once

// works, but slow
uintptr_t five() {
	int result = -1;
	bool skip = false;

	for (auto i = 1; i < std::numeric_limits<int32_t>::max(); i++) {
		for (auto j = 1; j < 21; j++) {
			if (i % j) {
				skip = true;
				break;
			}
		}

		if (skip) {
			skip = false;
			continue;
		}

		result = i;
		break;
	}

	return result;
}