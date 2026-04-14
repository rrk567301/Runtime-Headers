@interface NSCFTimer : NSTimer

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (unsigned long long)_cfTypeID;
- (void)setFireDate:(id)a0;
- (BOOL)retainWeakReference;
- (id)initWithFireDate:(id)a0 interval:(double)a1 target:(id)a2 selector:(SEL)a3 userInfo:(id)a4 repeats:(BOOL)a5;
- (id)fireDate;
- (BOOL)allowsWeakReference;
- (void)fire;
- (double)tolerance;
- (void)setTolerance:(double)a0;
- (BOOL)isValid;
- (BOOL)isEqual:(id)a0;
- (id)retain;
- (void)invalidate;
- (id)userInfo;
- (unsigned long long)hash;
- (id)init;
- (double)timeInterval;
- (oneway void)release;
- (unsigned long long)retainCount;

@end
