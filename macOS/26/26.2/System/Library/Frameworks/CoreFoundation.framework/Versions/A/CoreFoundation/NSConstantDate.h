@interface NSConstantDate : NSDate {
    double _ti;
}

+ (id)new;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)retain;
- (BOOL)_isDeallocating;
- (double)timeIntervalSinceReferenceDate;
- (BOOL)_tryRetain;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)retainCount;
- (id)autorelease;
- (id)copy;
- (oneway void)release;
- (id)init;
- (void)dealloc;

@end
