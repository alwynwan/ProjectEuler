#pragma once

// works
uintptr_t six() {
	long limit = 100, sum_squares = 0, square_sum = 0, diff = 0;

	// get sum of squares
	for (auto i = 1; i <= limit; i++) {
		sum_squares += i * i;
	}

	printf("sum of squares for numbers [1-%i] = %i\r\n", limit, sum_squares);

	// get sum
	for (auto i = 1; i <= limit; i++) {
		square_sum += i;
	}

	// square sum
	square_sum = square_sum * square_sum;

	printf("square of sum for numbers [1-%i] = %i\r\n", limit, square_sum);

	diff = square_sum - sum_squares;

	return diff;
}