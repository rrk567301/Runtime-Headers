@interface NSCFTimer : NSTimer

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (char)automaticallyNotifiesObserversForKey:(id)a0;

- (oneway void)release;
- (char)allowsWeakReference;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)retain;
- (unsigned long long)retainCount;
- (char)retainWeakReference;
- (char)isValid;
- (unsigned long long)_cfTypeID;
- (void)fire;
- (id)fireDate;
- (id)initWithFireDate:(id)a0 interval:(double)a1 target:(id)a2 selector:(SEL)a3 userInfo:(id)a4 repeats:(char)a5;
- (void)invalidate;
- (void)setFireDate:(id)a0;
- (void)setTolerance:(double)a0;
- (double)timeInterval;
- (double)tolerance;
- (id)userInfo;

@end
