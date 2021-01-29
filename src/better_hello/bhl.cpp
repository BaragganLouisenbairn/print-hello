#include "better_hello/bhl.h"

using namespace std;

void bhl(int n){
	for (int i = 0; i < n; i++){
		if (i % 2 == 1){
			cout << "HELLO\n";
		} else {
			cout << "hello\n";
		}
	}
}
