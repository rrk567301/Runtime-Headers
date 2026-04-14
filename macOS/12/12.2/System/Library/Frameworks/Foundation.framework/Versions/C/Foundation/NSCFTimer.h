@interface NSCFTimer : NSTimer

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (id)userInfo;
- (void)invalidate;
- (BOOL)isValid;
- (id)fireDate;
- (double)timeInterval;
- (double)tolerance;
- (unsigned long long)_cfTypeID;
- (void)setTolerance:(double)a0;
- (void)setFireDate:(id)a0;
- (void)fire;
- (id)initWithFireDate:(id)a0 interval:(double)a1 target:(id)a2 selector:(SEL)a3 userInfo:(id)a4 repeats:(BOOL)a5;

@end
