@interface __NSCFTimer : NSTimer

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (double)timeInterval;
- (void)setTolerance:(double)a0;
- (double)tolerance;
- (BOOL)isValid;
- (void)fire;
- (unsigned long long)_cfTypeID;
- (BOOL)_isDeallocating;
- (id)fireDate;
- (void)invalidate;
- (BOOL)_tryRetain;
- (void)setFireDate:(id)a0;
- (id)retain;
- (id)init;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)userInfo;
- (id)initWithFireDate:(id)a0 interval:(double)a1 target:(id)a2 selector:(SEL)a3 userInfo:(id)a4 repeats:(BOOL)a5;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
