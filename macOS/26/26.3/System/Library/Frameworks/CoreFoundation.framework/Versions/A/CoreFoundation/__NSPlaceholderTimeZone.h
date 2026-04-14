@interface __NSPlaceholderTimeZone : NSTimeZone

- (unsigned long long)retainCount;
- (id)retain;
- (long long)secondsFromGMTForDate:(id)a0;
- (id)init;
- (id)initWithName:(id)a0;
- (id)data;
- (BOOL)isDaylightSavingTimeForDate:(id)a0;
- (id)name;
- (double)daylightSavingTimeOffsetForDate:(id)a0;
- (id)initWithName:(id)a0 data:(id)a1;
- (void)dealloc;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)a0;
- (id)abbreviationForDate:(id)a0;
- (oneway void)release;

@end
