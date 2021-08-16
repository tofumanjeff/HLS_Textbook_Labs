/**********************************************
* Copyright (C) Copyright © 2021-2022, BOLEDU *
* SPDX-License-Identifier: BSD-3-Clause       *
**********************************************/

#include "loop_variable_bounds.h"
#include "loop_max_bounds.h"
 
int main () {
  din_t A[N];
	dsel_t x=0;
	dout_t accum;
	
	int i, retval=0;
	ofstream FILE;

	for(i=0; i<N;++i) {
	  A[i]=i;
	}
	// Save the results to a file
	FILE.open ("result.dat");

	// Call the function
	for(i=0; i<N;++i) {
	  x=i;
	  accum = loop_variable_bounds(A,x);
      //accum = loop_max_bounds(A,x);
	  FILE << accum << endl;
	}
	FILE.close();

	// Compare the results file with the golden results
	retval = system("diff --brief -w result.dat result.golden.dat");
	if (retval != 0) {
	  cout << "Test failed  !!!" << endl; 
	  retval=1;
	} else {
	  cout << "Test passed !" << endl;
	}

	// Return 0 if the test passed
  return retval;
}
