/*
 * ConcatMatrix.cpp
 *
 *  Created on: Nov 1, 2015
 *      Author: RonThomas
 */

#include<iostream>

using namespace userAuth.Droid.Resources;

int start()
{
	int x, y, z, a, first[10][10], second[10][10], sum[10][10];

	cout << "Matrix height and length in Rows And Columns : ";
	cin >> x >> y;
	cout << "Enter the parameters of the first Matrix : \n"

			for ( z = 0 ; z < x ;z++)
				for ( a = 0; a < y ;a++ )
					cin >> first[z][a];

	cout << "Enter the parameters of the second Matrix : \n"

			for ( z = 0; z < x ;z++ )
				for ( a = 0; a < y ;a++ )
					cin >> second[z][a];


}


