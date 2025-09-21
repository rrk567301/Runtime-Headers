@interface PLValueUtilties : NSObject

+ (void)resetTimestampFormaterTimezone;
+ (BOOL)isNil:(id)a0;
+ (id)formattedStringForDate:(id)a0;
+ (long long)compare:(id)a0 with:(id)a1;
+ (BOOL)isFormater:(short)a0 validForObject:(id)a1;
+ (short)formatterFromDataType:(id)a0;

@end
