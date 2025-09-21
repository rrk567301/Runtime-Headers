@interface NSConstantDate : NSDate {
    double _ti;
}

+ (id)new;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (char)automaticallyNotifiesObserversForKey:(id)a0;

- (char)_isDeallocating;
- (oneway void)release;
- (void)dealloc;
- (char)_tryRetain;
- (id)autorelease;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)retain;
- (unsigned long long)retainCount;
- (double)timeIntervalSinceReferenceDate;

@end
