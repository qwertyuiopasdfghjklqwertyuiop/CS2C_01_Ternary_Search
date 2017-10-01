#ifndef _TERNARY_SEARCH_HPP
#define _TERNARY_SEARCH_HPP
template<typename ArrayLike, typename T>
int ternary_search(const ArrayLike & array, const T& value, int low, int high)
{
   if(high <= low) return -1;

   int third = (high - low) / 3;
   int location1 = low + third;
   int location2 = low + third + third;

   if( value == array[location1] )
      return location1;
   else if( value < array[location1] )
      return ternary_search( array, value, low, location1 );
   
   if( value == array[location2] )
      return location2;
   else if( value < array[location2] )
      return ternary_search( array, value, location1, location2 );
   else if( value > array[location2] )
      return ternary_search( array, value, location2 + 1, high );

   else return -1;
}

#endif
