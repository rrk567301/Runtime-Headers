@interface NSConstantDate : NSDate {
    double _ti;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)new;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)autorelease;
- (BOOL)_isDeallocating;
- (double)timeIntervalSinceReferenceDate;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_tryRetain;
- (id)copy;
- (id)retain;
- (id)init;
- (unsigned long long)retainCount;
- (oneway void)release;

@end
