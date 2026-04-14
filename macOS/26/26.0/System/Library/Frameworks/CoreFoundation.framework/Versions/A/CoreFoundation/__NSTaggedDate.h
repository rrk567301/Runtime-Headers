@interface __NSTaggedDate : NSDate

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (double)timeIntervalSinceReferenceDate;
- (void)dealloc;
- (id)initWithTimeIntervalSinceReferenceDate:(double)a0;

@end
