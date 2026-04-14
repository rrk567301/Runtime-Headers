@interface __NSCFTimer : NSTimer

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)invalidate;
- (unsigned long long)retainCount;
- (id)initWithFireDate:(id)a0 interval:(double)a1 target:(id)a2 selector:(SEL)a3 userInfo:(id)a4 repeats:(BOOL)a5;
- (unsigned long long)_cfTypeID;
- (id)retain;
- (void)setTolerance:(double)a0;
- (double)tolerance;
- (id)init;
- (double)timeInterval;
- (BOOL)_tryRetain;
- (id)fireDate;
- (BOOL)_isDeallocating;
- (void)fire;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)setFireDate:(id)a0;
- (BOOL)isValid;
- (id)userInfo;
- (oneway void)release;

@end
