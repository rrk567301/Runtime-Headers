@interface __NSCFTimer : NSTimer

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (unsigned long long)_cfTypeID;
- (void)invalidate;
- (id)initWithFireDate:(id)a0 interval:(double)a1 target:(id)a2 selector:(SEL)a3 userInfo:(id)a4 repeats:(BOOL)a5;
- (double)timeInterval;
- (double)tolerance;
- (id)retain;
- (BOOL)_isDeallocating;
- (void)setTolerance:(double)a0;
- (void)fire;
- (void)setFireDate:(id)a0;
- (BOOL)_tryRetain;
- (id)fireDate;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)retainCount;
- (id)userInfo;
- (BOOL)isValid;
- (oneway void)release;
- (id)init;

@end
