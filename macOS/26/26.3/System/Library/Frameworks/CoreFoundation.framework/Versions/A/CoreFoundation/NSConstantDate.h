@interface NSConstantDate : NSDate {
    double _ti;
}

+ (id)new;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)copy;
- (unsigned long long)retainCount;
- (id)autorelease;
- (id)retain;
- (double)timeIntervalSinceReferenceDate;
- (id)init;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;

@end
