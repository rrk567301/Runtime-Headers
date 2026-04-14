@interface __NSPlaceholderTimeZone : NSTimeZone

- (double)daylightSavingTimeOffsetForDate:(id)a0;
- (id)initWithName:(id)a0 data:(id)a1;
- (id)name;
- (id)abbreviationForDate:(id)a0;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)a0;
- (BOOL)isDaylightSavingTimeForDate:(id)a0;
- (long long)secondsFromGMTForDate:(id)a0;
- (id)retain;
- (id)initWithName:(id)a0;
- (id)init;
- (id)data;
- (oneway void)release;
- (void)dealloc;
- (unsigned long long)retainCount;

@end
