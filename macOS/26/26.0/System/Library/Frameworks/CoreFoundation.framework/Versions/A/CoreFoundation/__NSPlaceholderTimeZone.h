@interface __NSPlaceholderTimeZone : NSTimeZone

- (void)dealloc;
- (id)retain;
- (id)abbreviationForDate:(id)a0;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)a0;
- (id)init;
- (unsigned long long)retainCount;
- (id)initWithName:(id)a0 data:(id)a1;
- (id)name;
- (BOOL)isDaylightSavingTimeForDate:(id)a0;
- (oneway void)release;
- (id)initWithName:(id)a0;
- (double)daylightSavingTimeOffsetForDate:(id)a0;
- (long long)secondsFromGMTForDate:(id)a0;
- (id)data;

@end
