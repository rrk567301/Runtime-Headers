@interface __NSPlaceholderTimeZone : NSTimeZone

- (id)retain;
- (oneway void)release;
- (void)dealloc;
- (unsigned long long)retainCount;
- (id)name;
- (id)init;
- (id)data;
- (long long)secondsFromGMTForDate:(id)a0;
- (id)abbreviationForDate:(id)a0;
- (BOOL)isDaylightSavingTimeForDate:(id)a0;
- (double)daylightSavingTimeOffsetForDate:(id)a0;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)a0;
- (id)__initWithName:(id)a0 data:(id)a1 secondsFromGMT:(int)a2 cache:(BOOL)a3;
- (id)initWithName:(id)a0 data:(id)a1;
- (id)__initWithName:(id)a0 cache:(BOOL)a1;
- (id)initWithName:(id)a0;

@end
