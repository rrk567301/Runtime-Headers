@interface __NSPlaceholderTimeZone : NSTimeZone

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)data;
- (BOOL)isDaylightSavingTimeForDate:(id)a0;
- (void)dealloc;
- (id)initWithName:(id)a0;
- (id)abbreviationForDate:(id)a0;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)a0;
- (id)name;
- (id)initWithName:(id)a0 data:(id)a1;
- (id)init;
- (double)daylightSavingTimeOffsetForDate:(id)a0;
- (long long)secondsFromGMTForDate:(id)a0;

@end
