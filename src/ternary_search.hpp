#ifndef _TERNARY_SEARCH_HPP
#define _TERNARY_SEARCH_HPP
template<typename ArrayLike, typename T>
int ternary_search(const ArrayLike & array, const T& value, int low, int high)
{
   if(high <= low) return -1;

   int third = (high - low) / 3;
   int location = low + third;

   if( value == array[location] )
      return location;
   else if( value < array[location] )
      return ternary_search( array, value, low, location );
   
   if( value == array[location + third] )
      return location + third;
   else if( value < array[location + third] )
      return ternary_search( array, value, location, location + third );
   else if( value > array[location + third] )
      return ternary_search( array, value, location + third + 1, high );

   else return -1;
}

#endif
