// This program declares the Square class and uses member functions to find
// the perimeter and area of the square
#include <iostream>
using namespace std;
// FILL IN THE CODE TO DECLARE A CLASS CALLED Square. TO DO THIS SEE
// THE IMPLEMENTATION SECTION.
int main()
{
Square box; // box is defined as an object of the Square class
float size; // size contains the length of a side of the square
// FILL IN THE CLIENT CODE THAT WILL ASK THE USER FOR THE LENGTH OF THE
// SIDE OF THE SQUARE. (This is stored in size)
// FILL IN THE CODE THAT CALLS SetSide.
// FILL IN THE CODE THAT WILL RETURN THE AREA FROM A CALL TO A FUNCTION
// AND PRINT OUT THE AREA TO THE SCREEN.
// FILL IN THE CODE THAT WILL RETURN THE PERIMETER FROM A CALL TO A
// FUNCTION AND PRINT OUT THAT VALUE TO THE SCREEN.
return 0;
}
//
//Implementation section Member function implementation
//**************************************************
// setSide
//
// task: This procedure takes the length of a side and
// places it in the appropriate member data
// data in: length of a side
//***************************************************
void Square::setSide(float length)
{
side = length;
}
