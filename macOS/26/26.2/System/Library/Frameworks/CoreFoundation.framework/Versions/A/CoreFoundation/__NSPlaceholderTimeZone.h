@interface __NSPlaceholderTimeZone : NSTimeZone

- (id)nextDaylightSavingTimeTransitionAfterDate:(id)a0;
- (id)retain;
- (id)abbreviationForDate:(id)a0;
- (unsigned long long)retainCount;
- (id)initWithName:(id)a0 data:(id)a1;
- (id)name;
- (id)initWithName:(id)a0;
- (oneway void)release;
- (id)init;
- (double)daylightSavingTimeOffsetForDate:(id)a0;
- (id)data;
- (long long)secondsFromGMTForDate:(id)a0;
- (BOOL)isDaylightSavingTimeForDate:(id)a0;
- (void)dealloc;

@end
