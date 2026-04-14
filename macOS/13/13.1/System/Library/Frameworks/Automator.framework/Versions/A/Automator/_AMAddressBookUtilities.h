@interface _AMAddressBookUtilities : NSObject

+ (id)yearlessSearchElementForToday:(BOOL)a0 withProperty:(id)a1 withLabel:(id)a2;
+ (id)yearlessSearchElementForDate:(id)a0 withCurrentDate:(id)a1 withProperty:(id)a2 withLabel:(id)a3;
+ (id)yearlessSearchElementForDatesBetween:(BOOL)a0 withStartDate:(id)a1 endDate:(id)a2 withCurrentDate:(id)a3 withProperty:(id)a4 withLabel:(id)a5;
+ (id)falseABPersonSearchElement;
+ (id)trueABPersonSearchElement;

@end
