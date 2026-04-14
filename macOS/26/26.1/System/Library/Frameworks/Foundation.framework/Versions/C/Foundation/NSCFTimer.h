@interface NSCFTimer : NSTimer

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)setTolerance:(double)a0;
- (void)fire;
- (id)retain;
- (double)timeInterval;
- (id)initWithFireDate:(id)a0 interval:(double)a1 target:(id)a2 selector:(SEL)a3 userInfo:(id)a4 repeats:(BOOL)a5;
- (id)userInfo;
- (unsigned long long)hash;
- (void)setFireDate:(id)a0;
- (oneway void)release;
- (id)fireDate;
- (unsigned long long)retainCount;
- (void)invalidate;
- (unsigned long long)_cfTypeID;
- (BOOL)retainWeakReference;
- (double)tolerance;
- (BOOL)allowsWeakReference;
- (BOOL)isEqual:(id)a0;
- (BOOL)isValid;
- (id)init;

@end
