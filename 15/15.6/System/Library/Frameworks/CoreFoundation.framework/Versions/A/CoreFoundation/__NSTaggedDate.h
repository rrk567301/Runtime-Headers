@interface __NSTaggedDate : NSDate

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (char)automaticallyNotifiesObserversForKey:(id)a0;

- (void)dealloc;
- (id)initWithTimeIntervalSinceReferenceDate:(double)a0;
- (double)timeIntervalSinceReferenceDate;

@end
