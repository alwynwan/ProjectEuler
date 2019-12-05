#include <iostream>
#include <conio.h>
#include <string>
#include <vector>
#include <algorithm>

// wip
uintptr_t eleven( ) {
	uintptr_t highest_product = 0;
	int elem_count = 4;

	int grid[ 20 ][ 20 ] = { 8, 02, 22, 97, 38, 15, 00, 40, 00, 75, 04, 05, 07, 78, 52, 12, 50, 77, 91, 8,
		49, 49, 99, 40, 17, 81, 18, 57, 60, 87, 17, 40, 98, 43, 69, 48, 04, 56, 62, 00,
		81, 49, 31, 73, 55, 79, 14, 29, 93, 71, 40, 67, 53, 88, 30, 03, 49, 13, 36, 65,
		52, 70, 95, 23, 04, 60, 11, 42, 69, 24, 68, 56, 01, 32, 56, 71, 37, 02, 36, 91,
		22, 31, 16, 71, 51, 67, 63, 89, 41, 92, 36, 54, 22, 40, 40, 28, 66, 33, 13, 80,
		24, 47, 32, 60, 99, 03, 45, 02, 44, 75, 33, 53, 78, 36, 84, 20, 35, 17, 12, 50,
		32, 98, 81, 28, 64, 23, 67, 10, 26, 38, 40, 67, 59, 54, 70, 66, 18, 38, 64, 70,
		67, 26, 20, 68, 02, 62, 12, 20, 95, 63, 94, 39, 63, 8, 40, 91, 66, 49, 94, 21,
		24, 55, 58, 05, 66, 73, 99, 26, 97, 17, 78, 78, 96, 83, 14, 88, 34, 89, 63, 72,
		21, 36, 23, 9, 75, 00, 76, 44, 20, 45, 35, 14, 00, 61, 33, 97, 34, 31, 33, 95,
		78, 17, 53, 28, 22, 75, 31, 67, 15, 94, 03, 80, 04, 62, 16, 14, 9, 53, 56, 92,
		16, 39, 05, 42, 96, 35, 31, 47, 55, 58, 88, 24, 00, 17, 54, 24, 36, 29, 85, 57,
		86, 56, 00, 48, 35, 71, 89, 07, 05, 44, 44, 37, 44, 60, 21, 58, 51, 54, 17, 58,
		19, 80, 81, 68, 05, 94, 47, 69, 28, 73, 92, 13, 86, 52, 17, 77, 04, 89, 55, 40,
		04, 52, 8, 83, 97, 35, 99, 16, 07, 97, 57, 32, 16, 26, 26, 79, 33, 27, 98, 66,
		88, 36, 68, 87, 57, 62, 20, 72, 03, 46, 33, 67, 46, 55, 12, 32, 63, 93, 53, 69,
		04, 42, 16, 73, 38, 25, 39, 11, 24, 94, 72, 18, 8, 46, 29, 32, 40, 62, 76, 36,
		20, 69, 36, 41, 72, 30, 23, 88, 34, 62, 99, 69, 82, 67, 59, 85, 74, 04, 36, 16,
		20, 73, 35, 29, 78, 31, 90, 01, 74, 31, 49, 71, 48, 86, 81, 16, 23, 57, 05, 54,
		01, 70, 54, 71, 83, 51, 54, 69, 16, 92, 33, 48, 61, 43, 52, 01, 89, 19, 67, 48 };

	auto get_top = [ & ]( int row, int col ) {
		return grid[ row - 1 ][ col ];
	};

	auto get_bottom = [ & ]( int row, int col ) {
		return grid[ row + 1 ][ col ];
	};

	auto get_left = [ & ]( int row, int col ) {
		return grid[ row ][ col - 1 ];
	};

	auto get_right = [ & ]( int row, int col ) {
		return grid[ row ][ col + 1 ];
	};

	auto get_top_right = [ & ]( int row, int col ) {
		return grid[ row - 1 ][ col + 1 ];
	};

	auto get_top_left = [ & ]( int row, int col ) {
		return grid[ row - 1 ][ col - 1 ];
	};

	auto get_bottom_right = [ & ]( int row, int col ) {
		return grid[ row + 1 ][ col + 1 ];
	};

	auto get_bottom_left = [ & ]( int row, int col ) {
		return grid[ row + 1 ][ col - 1 ];
	};

	for ( auto i = 0; i < 20; i++ ) {
		for ( auto j = 0; j < 20; j++ ) {
			// start our product at the central value
			auto product = grid[ i ][ j ];

			// we're on the first row, so don't try doing top-left, top, or top-right
			if ( !i ) {
				// we're in the first column, so don't try doing top-left, left, or bottom-left
				if ( !j ) {
					// first element
					product *= get_right( i, j );
				}

				else {

				}
			}

			// we're not in the first row
			else {
				// we're in the first column, so don't try doing top-left, left, or bottom-left
				if ( !j ) {

				}
			}
		}
	}

	return highest_product;
}

// works
uintptr_t ten( ) {
	auto is_prime = [ ]( int input ) {
		if ( input < 2 )
			return false;
		for ( auto i = 2; i * i <= input; i++ ) {
			if ( !( input % i ) )
				return false;
		}

		return true;
	};

	uintptr_t sum = 0;

	for ( auto i = 2000000; i; i-- ) {
		if ( is_prime( i ) )
			sum += i;
	}

	return sum;
}
// works
uintptr_t nine( ) {
	uintptr_t product = 0;
	bool done = false;

	// find pythagorean triplets
	for ( auto a = 1; a < 1000; a++ ) {
		for ( auto b = 1; b < 1000; b++ ) {
			for ( auto c = 1; c < 1000; c++ ) {

				// do it do the pythagorean thing AND equal 1000?
				if ( ( ( a*a ) + ( b*b ) == ( c*c ) ) && ( a + b + c ) == 1000 ) {
					// we got our answer, so....
					product = a * b * c;
					printf( "THE NUMBERS MASON:\t %i %i %i\r\nTHE SUM MASON:\t\t %i + %i = %i\r\nTHE PRODUCT MASON:\t %i\r\n", a, b, c, a*a, b*b, c*c, product );

					// get
					done = true;
					break;
				}
			}
			// the
			if ( done )
				break;
		}

		// fuck
		if ( done )
			break;
	}

	// out
	return product;
}

// works
uintptr_t eight( ) {
	// number of adjacent elements to use in creating the product
	int num_elements = 13;
	std::vector<unsigned long long> products;

	// storing as a string so we can access each digit
	std::string evil_number = "7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450";

	// don't you love random maths?
	auto char_to_int = [ ]( char input ) {
		return input - '0';
	};

	// iterate over every digit and the next nth digits
	for ( auto i = 0; i <= evil_number.length( ) - num_elements - 1; i++ ) {

		// start with a product equal to our first digit
		unsigned long long product = char_to_int( evil_number[ i ] );

		printf( "%i", product );

		// just keep multiplying
		for ( int j = 1; j < num_elements; j++ ) {

			printf( " * " );
			printf( "%i", char_to_int( evil_number[ i + j ] ) );
			product *= char_to_int( evil_number[ i + j ] );
		}

		printf( " = %i \r\n", product );

		printf( "product for numbers %i to %i is %i\r\n", i, i + num_elements, product );

		products.push_back( product );
	}

	// thank u microsoft~
	std::sort( products.begin( ), products.end( ), std::greater<unsigned long long>( ) );

	// front will be the highest, since we sorted using greater ^^^^^^^^^^^^^^^^^^
	return products.front( );
}
// works
uintptr_t seven( ) {
	auto is_prime = [ ]( int input ) {
		if ( input < 2 )
			return false;
		for ( auto i = 2; i * i <= input; i++ ) {
			if ( !( input % i ) )
				return false;
		}

		return true;
	};

	int prime = 0, count = 0;

	// continue incrementing until we get to 
	for ( auto i = 0; count < 10001; i++ ) {
		if ( is_prime( i ) ) {
			prime = i;
			count++;
		}
	}

	return prime;
}

// works
uintptr_t six( ) {
	long limit = 100, sum_squares = 0, square_sum = 0, diff = 0;

	// get sum of squares
	for ( auto i = 1; i <= limit; i++ ) {
		sum_squares += i * i;
	}

	printf( "sum of squares for numbers [1-%i] = %i\r\n", limit, sum_squares );

	// get sum
	for ( auto i = 1; i <= limit; i++ ) {
		square_sum += i;
	}

	// square sum
	square_sum = square_sum * square_sum;

	printf( "square of sum for numbers [1-%i] = %i\r\n", limit, square_sum );

	diff = square_sum - sum_squares;

	return diff;
}

// works, but slow
uintptr_t five( ) {
	int result = -1;
	bool skip = false;

	for ( auto i = 1; i < INT_MAX; i++ ) {
		for ( auto j = 1; j < 21; j++ ) {
			if ( i % j ) {
				skip = true;
				break;
			}
		}

		if ( skip ) {
			skip = false;
			continue;
		}

		result = i;
		break;
	}

	return result;
}

// works
uintptr_t four( ) {
	int highest_palindrome = 0;

	auto is_palindrome = [ ]( unsigned int input ) {
		int n = input, reverse = 0, rem;
		while ( n != 0 ) {
			rem = n % 10;
			reverse = reverse * 10 + rem;
			n /= 10;
		}
		return reverse == input;
	};

	for ( auto i = 100; i < 1000; i++ ) {
		for ( auto j = 100; j < 1000; j++ ) {
			if ( is_palindrome( i * j ) ) {
				printf( "[%i * %i] %i is a palindrome\r\n", i, j, i * j );

				if ( ( i * j ) > highest_palindrome )
					highest_palindrome = i * j;
			}
		}
	}

	return highest_palindrome;
}
// works
uintptr_t three( ) {
	auto target = 600851475143, temp = target, highest_prime = 0i64;

	for ( auto i = 2;; i++ ) {
		if ( temp == 1 )
			break;

		if ( !( temp % i ) ) {
			temp /= i;
			highest_prime = i;
			std::cout << i << '\t' << temp << std::endl;
		}
	}

	return highest_prime;
}

// works
uintptr_t two( ) {
	int x = 0, y = 1, z = 0;
	int sum = 0;

	for ( auto i = 0; ; i++ ) {
		z = x + y;

		if ( z > 4000000 )
			break;

		if ( !( z % 2 ) ) {
			std::cout << sum << std::endl;
			sum += z;
		}

		y = x;
		x = z;
	}

	return sum;
}

// works
uintptr_t one( ) {
	int sum = 0;
	for ( auto i = 0; i < 1000; i++ ) {
		if ( !( i % 3 ) || !( i % 5 ) ) {
			sum += i;
		}
	}

	return sum;
}

int main( ) {
	std::string gay;
	std::cout << "done: answer = " << eleven( ) << std::endl;
	std::getline( std::cin, gay );
	return 0;
}