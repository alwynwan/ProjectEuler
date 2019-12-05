#pragma once

// works
uintptr_t nine() {
	uintptr_t product = 0;
	bool done = false;

	// find pythagorean triplets
	for (auto a = 1; a < 1000; a++) {
		for (auto b = 1; b < 1000; b++) {
			for (auto c = 1; c < 1000; c++) {

				// do it do the pythagorean thing AND equal 1000?
				if (((a * a) + (b * b) == (c * c)) && (a + b + c) == 1000) {
					// we got our answer, so....
					product = a * b * c;
					printf("THE NUMBERS MASON:\t %i %i %i\r\nTHE SUM MASON:\t\t %i + %i = %i\r\nTHE PRODUCT MASON:\t %i\r\n", a, b, c, a * a, b * b, c * c, product);

					// get
					done = true;
					break;
				}
			}
			// the
			if (done)
				break;
		}

		// heck
		if (done)
			break;
	}

	// out
	return product;
}